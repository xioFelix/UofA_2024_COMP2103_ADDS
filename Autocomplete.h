#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <string>
#include <vector>

class TrieNode {
 public:
  TrieNode* children[26];
  bool isEndOfWord;

  TrieNode();
};

class Autocomplete {
 public:
  Autocomplete();

  std::vector<std::string> getSuggestions(std::string& partialWord);
  void insert(std::string& word);

 private:
  TrieNode* root;
  void getSuggestionsHelper(TrieNode* node, std::string currentPrefix,
                            std::vector<std::string>& suggestions);
};

#endif  // AUTOCOMPLETE_H
