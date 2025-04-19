#include <iostream>
using namespace std;

int iterativeSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int formulaSum(int n) {
    return n * (n + 1) / 2;
}
