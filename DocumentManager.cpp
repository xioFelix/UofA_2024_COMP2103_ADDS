#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, size_t id, size_t license_limit) {
  Document doc = {name, id, license_limit, {}};
  documents[id] = doc;
  documentNames[name] = id;
}

void DocumentManager::addPatron(size_t patronID) { patrons[patronID] = 1; }

size_t DocumentManager::search(std::string name) {
  if (documentNames.find(name) != documentNames.end())
    return documentNames[name];
  else
    return 0;
}

bool DocumentManager::borrowDocument(size_t docid, size_t patronID) {
  if (patrons.find(patronID) == patrons.end() ||
      documents.find(docid) == documents.end() ||
      documents[docid].current_patrons.size() >= documents[docid].license_limit)
    return false;

  documents[docid].current_patrons.insert(patronID);
  return true;
}

void DocumentManager::returnDocument(size_t docid, size_t patronID) {
  if (documents.find(docid) != documents.end() &&
      documents[docid].current_patrons.find(patronID) !=
          documents[docid].current_patrons.end())
    documents[docid].current_patrons.erase(patronID);
}
