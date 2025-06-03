#include <iostream>
#include <vector>
using namespace std;

vector<long> getPrefix(vector<long> arr){
    vector<long> prefix(arr.size());

    if(arr.size()<=0) return prefix;

    prefix[0] = arr[0];

    for(int i=1; i<arr.size(); i++)
    prefix[i] = arr[i] + prefix[i-1];

    return prefix;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    int n, q;
    cin >> n >> q;

    vector<long> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    long l,r, k;

    vector<long> prefix = getPrefix(arr);

    while(q--){
        cin >> l >> r >> k;
        long sum = prefix[n-1] - (prefix[r-1] - ((l>1)? prefix[l-2]: 0)) + ((r-l + 1)*k);
        cout << ((sum%2)?"YES\n": "NO\n");
    }
}

    return 0;
}