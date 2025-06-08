#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long n, t;
    cin >> n >> t;
    vector<long long> prefix(n);
    cin >> prefix[0];
    for(long i=1; i<n; i++){
        cin >> prefix[i];
        prefix[i] += prefix[i-1];
    }

    long left, right;
    while(t--){
        cin >> left >> right;

        long long sum = prefix[right-1] - ((left>1)? prefix[left-2]: 0);
        cout << sum << "\n";
    }


    return 0;
}