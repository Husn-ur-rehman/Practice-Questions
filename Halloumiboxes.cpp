#include <bits/stdc++.h>
using namespace std;

bool HollumiBoxes(vector<int>& a, int k) {
    if (k > 1) return true;
    for (int i = 0; i + 1 < a.size(); i++) {
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}

int main(){

    int cases; // test case
    cin >> cases;
    while (cases--) {
        int n, k;
        cin >> n >> k;
        vector<int> array(n);
        for (int i = 0; i < n; i++) cin >> array[i];

        if (HollumiBoxes(array, k)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
