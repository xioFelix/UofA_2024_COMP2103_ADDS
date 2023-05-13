#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>
#include <vector>

class BinaryTrieNode {
 public:
  BinaryTrieNode* children[2];
  int routerNumber;

  BinaryTrieNode();
};

class PrefixMatcher {
 public:
  PrefixMatcher();

  size_t selectRouter(const std::string& networkAddress);
  void insert(const std::string& address, int routerNumber);

 private:
  BinaryTrieNode* root;
};

#endif  // PREFIXMATCHER_H
