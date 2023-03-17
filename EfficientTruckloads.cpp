#include "EfficientTruckloads.h"

#include <iostream>
#include <string>

using namespace std;

int Restrict[10000] = {0};

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
  if (numCrates == 0) {
    return 0;
  }
  if (loadSize == 0) {
    return -1;
  }

  if ((numCrates % 2) == 0) {
    if (numCrates <= loadSize) {
      return 1;
    } else {
      Restrict[numCrates] = numTrucks(numCrates / 2, loadSize) +
                          numTrucks(numCrates / 2, loadSize);
      return Restrict[numCrates];
    }
  }
  if ((numCrates % 2) != 0) {
    if (numCrates <= loadSize) {
      return 1;
    } else {
      Restrict[numCrates] = numTrucks((numCrates) / 2, loadSize) +
                          numTrucks((numCrates + 1) / 2, loadSize);
      return Restrict[numCrates];
    }
  }
  return 0;
}
