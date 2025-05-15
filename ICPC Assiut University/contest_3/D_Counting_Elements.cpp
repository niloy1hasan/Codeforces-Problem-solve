#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> arr;
    int num;
    for(int i=0; i<n; i++){
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    int count= 0;

    for(int i=0; i<n; i++){
        if(arr[i]+1 == arr[i+1]){
            count++;
        } else if(find(arr.begin(), arr.end(), arr[i]+1)!=arr.end()){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}