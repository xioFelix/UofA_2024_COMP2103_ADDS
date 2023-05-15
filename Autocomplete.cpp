#include "Autocomplete.h"

TrieNode::TrieNode() {
  isEndOfWord = false;
  for (size_t i = 0; i < 26; ++i) {
    children[i] = nullptr;
  }
}

Autocomplete::Autocomplete() { root = new TrieNode(); }

std::vector<std::string> Autocomplete::getSuggestions(
    std::string& partialWord) {
  std::vector<std::string> suggestions;
  TrieNode* current = root;
  for (char ch : partialWord) {
    size_t index = ch - 'a';
    if (current->children[index] == nullptr) {
      return suggestions;
    }
    current = current->children[index];
  }
  getSuggestionsHelper(current, partialWord, suggestions);
  return suggestions;
}

void Autocomplete::insert(std::string& word) {
  TrieNode* current = root;
  for (char ch : word) {
    size_t index = ch - 'a';
    if (current->children[index] == nullptr) {
      current->children[index] = new TrieNode();
    }
    current = current->children[index];
  }
  current->isEndOfWord = true;
}

void Autocomplete::getSuggestionsHelper(TrieNode* node,
                                        std::string currentPrefix,
                                        std::vector<std::string>& suggestions) {
  if (node->isEndOfWord) {
    suggestions.push_back(currentPrefix);
  }
  for (size_t i = 0; i < 26; ++i) {
    if (node->children[i] != nullptr) {
      getSuggestionsHelper(node->children[i], currentPrefix + char(i + 'a'),
                           suggestions);
    }
  }
}
