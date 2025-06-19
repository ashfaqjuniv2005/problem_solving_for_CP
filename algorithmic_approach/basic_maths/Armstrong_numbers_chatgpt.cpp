#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(long long n) {
    long long m = n, sum = 0;
    int digits = log10(n) + 1;
    while (n > 0) {
        int d = n % 10;
        sum += pow(d, digits);
        n /= 10;
    }
    return sum == m;
}

int main() {
    long long n;
    cin >> n;
    if (isArmstrong(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
