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
  std::list<int> result;
  int carry = 0;
  for (int digit : num1) {
    int prod = digit * num2.front() + carry;
    carry = prod / 10;
    result.push_back(prod % 10);
  }
  if (carry > 0) {
    result.push_back(carry);
  }
  while (result.size() > 1 && result.front() == 0) {
    result.pop_front();
  }
  return result;
}