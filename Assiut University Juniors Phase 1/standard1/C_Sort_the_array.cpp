#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> arr(n);

    for(long long i=0;i<n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());


    for(long long i=0; i<n; i++){
        cout << arr[i] << ((i<n-1)? " ": "\n");
    }

    return 0;
}