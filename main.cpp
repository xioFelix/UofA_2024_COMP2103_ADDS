#include <iostream>

#include "Autocomplete.h"
#include "PrefixMatcher.h"

int main() {
  Autocomplete autocomplete;
  autocomplete.insert("bin");
  autocomplete.insert("ball");
  autocomplete.insert("ballet");

  std::vector<std::string> results;

  results = autocomplete.getSuggestions("b");
  for (size_t i = 0; i < results.size(); i++) {
    std::cout << results[i] << std::endl;
  }

  results = autocomplete.getSuggestions("bal");
  for (size_t i = 0; i < results.size(); i++) {
    std::cout << results[i] << std::endl;
  }

  PrefixMatcher prefixMatcher;
  prefixMatcher.insert("110011011101", 1);
  prefixMatcher.insert("110011011", 2);
  prefixMatcher.insert("11001101", 3);

  int router = prefixMatcher.selectRouter("11001101110");
  std::cout << router << std::endl;

  return 0;
}
