#include <queue>
#include <vector>

int kth_largest(std::vector<int> values, int k) {
  std::priority_queue<int, std::vector<int>, std::greater<int>> greaterQueue;
  for (int value : values) {
    greaterQueue.push(value);
    if (greaterQueue.size() > k) {
      greaterQueue.pop();
    }
  }
  return greaterQueue.top();
}
