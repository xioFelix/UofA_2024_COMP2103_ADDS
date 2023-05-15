#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>
#include <vector>

class BinaryTrieNode {
 public:
  BinaryTrieNode* children[2];
  int routerNumber = -1;

  BinaryTrieNode();
};

class PrefixMatcher {
 public:
  PrefixMatcher();

  int selectRouter(const std::string& networkAddress);
  void insert(const std::string& address, int routerNumber);

 private:
  BinaryTrieNode* root;
};

#endif  // PREFIXMATCHER_H
