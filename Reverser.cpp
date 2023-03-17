#include "Reverser.h"

#include <iostream>
#include <string>

int Reverser::reverseDigit(int value) {
  if (value < 0) {
    return -1;
  }

  if (value < 10) {
    return value;
  }

  int len = 0;

  for (int i = value; i; i /= 10) {
    len++;
  }

  return value % 10 * (int)pow(10, len - 1) + reverseDigit(value / 10);
}

string Reverser::reverseString(string letters) {
  size_t sizeOfChar = letters.size();
  if (letters.size() == 1) {
    return letters;
  }

  else {
    return letters[sizeOfChar - 1] +
           reverseString(letters.substr(0, sizeOfChar - 1));
  }
}