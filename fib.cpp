#include <iostream>
using namespace std;

int fib(int n) {
    cout << "calculating fib " << n << endl;

    // base case
    if (n == 0 || n == 1)
        return n;

    // recursive call
    return fib(n-1) + fib(n-2);
}


int main(void) {
    int n;
    cin >> n;
    int result = fib(n);
    cout << result << endl;
}