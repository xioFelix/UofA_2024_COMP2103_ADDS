#include "BigNumCalc.h"

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
  std::list<int> result;
  for (char c : numString) {
    result.push_back(c - '0');
  }
  return result;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
  std::list<int> result;
  int carry = 0;
  while (!num1.empty() || !num2.empty() || carry) {
    int sum = carry;
    if (!num1.empty()) {
      sum += num1.back();
      num1.pop_back();
    }
    if (!num2.empty()) {
      sum += num2.back();
      num2.pop_back();
    }
    carry = sum / 10;
    result.push_front(sum % 10);
  }
  return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
  std::list<int> result;
  int borrow = 0;
  while (!num1.empty() || !num2.empty()) {
    int diff = borrow;
    if (!num1.empty()) {
      diff += num1.back();
      num1.pop_back();
    }
    if (!num2.empty()) {
      diff -= num2.back();
      num2.pop_back();
    }
    if (diff < 0) {
      diff += 10;
      borrow = -1;
    } else {
      borrow = 0;
    }
    result.push_front(diff);
  }
  while (result.size() > 1 && result.front() == 0) {
    result.pop_front();
  }
  return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
  int factor = num2.back();
  num2.pop_back();
  std::list<int> result = add(std::list<int>(), std::list<int>());
  while (!num1.empty()) {
    int product = num1.back() * factor;
    num1.pop_back();
    std::list<int> partialResult;
    int carry = 0;
    while (product || carry) {
      int digit = carry + product % 10;
      product /= 10;
      carry = digit / 10;
      digit %= 10;
      partialResult.push_front(digit);
    }
    while (partialResult.front() == 0 && partialResult.size() > 1) {
      partialResult.pop_front();
    }
    for (int i = 0; i < num1.size(); i++) {
      partialResult.push_back(0);
    }
    result = add(result, partialResult);
  }
  return result;
}