#include "SET.h"
#include<iostream>
using namespace std;

int main(void){
    Set<int> mySet;
    mySet.add(5);
    cout << mySet.isMember (5) << endl;

}