#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x, k;
            cin >> x >> k;
            v.insert(v.begin() + k, x);
        }
        else if (type == 2) {
            int k;
            cin >> k;
            v.erase(v.begin() + k);
        }
        else if (type == 3) {
            int k;
            cin >> k;
            cout << v[k] << endl;
        }
    }

    return 0;
}
