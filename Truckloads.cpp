#include "Truckloads.h"

#include <iostream>
#include <string>

using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize) {
  //   if (numCrates == 0) {
  //     return 0;
  //   }
  //   if (loadSize == 0) {
  //     return -1;
  //   }

  if ((numCrates % 2) == 0) {
    if (numCrates <= loadSize) {
      return 1;
    } else {
      return (numTrucks(numCrates / 2, loadSize) +
              numTrucks(numCrates / 2, loadSize));
    }
  }

  if ((numCrates % 2) != 0) {
    if (numCrates <= loadSize) {
      return 1;
    } else {
      return (numTrucks((numCrates + 1) / 2, loadSize) +
              numTrucks((numCrates - 1) / 2, loadSize));
    }
  }
  return 0;
}