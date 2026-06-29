#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        if (s.count(x))
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
