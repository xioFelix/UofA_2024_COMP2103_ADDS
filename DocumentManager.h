#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <unordered_map>
#include <unordered_set>

struct Document {
  std::string name;
  size_t id;
  size_t license_limit;
  std::unordered_set<size_t> current_patrons;
};

class DocumentManager {
  std::unordered_map<size_t, size_t> patrons;
  std::unordered_map<size_t, Document> documents;
  std::unordered_map<std::string, size_t> documentNames;

 public:
  void addDocument(std::string name, size_t id, size_t license_limit);
  void addPatron(size_t patronID);
  size_t search(std::string name);
  bool borrowDocument(size_t docid, size_t patronID);
  void returnDocument(size_t docid, size_t patronID);
};

#endif
