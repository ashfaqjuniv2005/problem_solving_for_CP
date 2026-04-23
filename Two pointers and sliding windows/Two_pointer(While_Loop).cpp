#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> c;
    int i = 0, j = 0;

    // two pointer using while loop
    while(i < n && j < n) {
        if(a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }

    // remaining elements
    while(i < n) {
        c.push_back(a[i]);
        i++;
    }

    while(j < n) {
        c.push_back(b[j]);
        j++;
    }

    for(int x : c) cout << x << " ";

    return 0;
}
