#include<bits/stdc++.h>
using namespace std;

int lessorEqual(vector<int> &test,int k, int val){
    int count = 0;
    for(int i = 0; i < test.size(); i++){
        if(test[i] < val) count++;
    }
    if(count > k) return -1;
    else return val - 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> test(n);
    for (int i = 0; i < n; i++) cin >> test[i];
    sort(test.begin(), test.end());


    if (k == 0) {
        if (test[0] > 1) cout << 1 << "\n";
        else cout << -1 << "\n";
        return 0;
    }

    int val = test[k - 1];
    int ans = lessorEqual(test, k, val);

   
    if (k < n && test[k] == val) cout << -1 << "\n";
    else cout << ans << "\n";

    return 0;
}    