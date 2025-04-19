#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> getFactorsBrute(int n) {
    vector<int> factors;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) factors.push_back(i);
    return factors;
}

vector<int> getFactorsOptimized(int n) {
    vector<int> factors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i)
                factors.push_back(n / i);
        }
    }
    return factors;
}
