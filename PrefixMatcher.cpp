#include "PrefixMatcher.h"

BinaryTrieNode::BinaryTrieNode() {
  routerNumber = -1;
  children[0] = nullptr;
  children[1] = nullptr;
}

PrefixMatcher::PrefixMatcher() { root = new BinaryTrieNode(); }

int PrefixMatcher::selectRouter(const std::string& networkAddress) {
  BinaryTrieNode* current = root;
  int selectedRouter = -1;

  for (char ch : networkAddress) {
    size_t index = ch - '0';
    if (current->children[index] == nullptr) {
      break;
    }
    current = current->children[index];
    if (current->routerNumber != -1) {
      selectedRouter = current->routerNumber;
    }
  }
  return selectedRouter;
}

void PrefixMatcher::insert(const std::string& address, int routerNumber) {
  BinaryTrieNode* current = root;
  for (char ch : address) {
    size_t index = ch - '0';
    if (current->children[index] == nullptr) {
      current->children[index] = new BinaryTrieNode();
    }
    current = current->children[index];
  }

  if (current->routerNumber == -1) {
    current->routerNumber = routerNumber;
  }
}
