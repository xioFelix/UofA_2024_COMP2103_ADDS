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

  size_t router = prefixMatcher.selectRouter("11001101110");
  std::cout << "11001101110: " << router << std::endl;
  router = prefixMatcher.selectRouter("110011011");
  std::cout << "110011011: " << router << std::endl;
  router = prefixMatcher.selectRouter("11001101");
  std::cout << "11001101: " << router << std::endl;
  router = prefixMatcher.selectRouter("1100110");
  std::cout << "1100110: " << router << std::endl;

  return 0;
}
