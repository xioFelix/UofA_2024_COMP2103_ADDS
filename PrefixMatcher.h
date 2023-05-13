#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>
#include <vector>

class BinaryTrieNode {
 public:
  BinaryTrieNode* children[2];
  size_t routerNumber;

  BinaryTrieNode();
};

class PrefixMatcher {
 public:
  PrefixMatcher();

  size_t selectRouter(const std::string& networkAddress);
  void insert(const std::string& address, size_t routerNumber);

 private:
  BinaryTrieNode* root;
};

#endif  // PREFIXMATCHER_H
