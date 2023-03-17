#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <string>
#include <vector>

using namespace std;

class EfficientTruckloads {
  vector<int> Restrict;

 public:
  EfficientTruckloads() : Restrict(10000){};
  int numTrucks(int numCrates, int loadSize);
};
#endif