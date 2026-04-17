#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    int pos = 0;

    while (v.size() > 1) {
        pos = (pos + k - 1) % v.size();
        v.erase(v.begin() + pos);
    }

    cout << v[0];
    return 0;
}
