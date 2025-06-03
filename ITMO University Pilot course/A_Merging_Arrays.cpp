#include <bits/stdc++.h>
using namespace std;
void inputArray(vector<long long> & arr, long size){
    for(int i=0; i<size; i++) cin >> arr[i];
}

int main(){
    long n, m;
    cin >> n >> m;

    vector<long long> arr1(n);
    vector<long long> arr2(m);

    inputArray(arr1, n);
    inputArray(arr2, m);

    int i=0, j=0;

    while(i<n || j<m){
        if(arr1[i]<arr2[j] || j==m && i<n){
            cout << arr1[i++];
        } else {
            cout << arr2[j++];
        }

        if(i+j < n+m){
            cout << " ";
        } else cout << "\n";
    }

    return 0;
}