#include <iostream>

#include "Autocomplete.h"
#include "PrefixMatcher.h"

int main() {
  // Test Autocomplete
  Autocomplete autocomplete;
  autocomplete.insert("bin");
  autocomplete.insert("ball");
  autocomplete.insert("ballet");

  std::cout << "Autocomplete suggestions for 'b':\n";
  auto suggestions = autocomplete.getSuggestions("b");
  for (const auto& suggestion : suggestions) {
    std::cout << suggestion << "\n";
  }

  std::cout << "\nAutocomplete suggestions for 'bal':\n";
  suggestions = autocomplete.getSuggestions("bal");
  for (const auto& suggestion : suggestions) {
    std::cout << suggestion << "\n";
  }

  // Test PrefixMatcher
  PrefixMatcher prefixMatcher;
  prefixMatcher.insert("110011011101", 1);
  prefixMatcher.insert("110011011", 2);
  prefixMatcher.insert("11001101", 3);

  std::cout << "\nBest matching router for '11001101110': ";
  int router = prefixMatcher.selectRouter("11001101110");
  std::cout << router << "\n";

  return 0;
}
