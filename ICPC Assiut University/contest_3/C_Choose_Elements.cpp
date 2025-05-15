#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    long long a;
    vector<long long> arr;
    for(int i=0; i<n; i++){
       cin >> a;
       arr.push_back(a);
    }

    sort(arr.begin(), arr.end(), greater<long long>());

    long long sum = 0;
    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    cout << sum << endl;


    return 0;
}