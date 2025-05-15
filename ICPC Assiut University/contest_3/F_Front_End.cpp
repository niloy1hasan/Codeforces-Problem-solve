#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<long long> arr;
    
    long long a;

    for(int i=0; i<n; i++){
        cin >> a;
        arr.push_back(a);
    }


    int i = 0, j=arr.size()-1;

    if(j%2==0){
        while(i<j){
            cout << arr[i++] << " " << arr[j--] << " ";
        }
    
        cout << arr[i] << endl;
    } else {
        while(i<j){
            cout << arr[i++] << " " << arr[j--] << " ";
        }
    }

    





    return 0;
}