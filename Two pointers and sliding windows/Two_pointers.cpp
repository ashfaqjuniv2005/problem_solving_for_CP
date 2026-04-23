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

   
    for(; i < n && j < n; ) {
        if(a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }

   
    for(; i < n; i++) c.push_back(a[i]);
    for(; j < n; j++) c.push_back(b[j]);

   
    for(auto x : c) cout << x << " ";

    return 0;
}
