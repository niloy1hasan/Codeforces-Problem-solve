#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n, q;
    cin >> n >> q;

    vector<long long> arr(n);

    for(int i=0; i<n; i++) cin >> arr[i];

    long l, r;
    long long val;
    
    while(q--){
        cin >> l >> r >> val;

        for(long i=l-1; i<=r-1; i++){
            arr[i] += val;
        }
    }

    for(long i=0; i<n; i++){
        cout << arr[i];
        if(i<n-1) cout << " ";
        else cout << "\n";
    }

    return 0;
}