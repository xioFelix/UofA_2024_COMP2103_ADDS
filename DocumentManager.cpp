#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
  Document doc = {name, id, license_limit, {}};
  documents[id] = doc;
  documentNames[name] = id;
}

void DocumentManager::addPatron(int patronID) { patrons[patronID] = 1; }

int DocumentManager::search(std::string name) {
  if (documentNames.find(name) != documentNames.end())
    return documentNames[name];
  else
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
  if (patrons.find(patronID) == patrons.end() ||
      documents.find(docid) == documents.end() ||
      documents[docid].current_patrons.size() >= documents[docid].license_limit)
    return false;

  documents[docid].current_patrons.insert(patronID);
  return true;
}

void DocumentManager::returnDocument(int docid, int patronID) {
  if (documents.find(docid) != documents.end() &&
      documents[docid].current_patrons.find(patronID) !=
          documents[docid].current_patrons.end())
    documents[docid].current_patrons.erase(patronID);
}
