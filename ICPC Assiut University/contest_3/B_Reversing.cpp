#include <iostream>
using namespace std;

void reverse(int arr[], int index){
    int i=0;
    while(i<index){
        swap(arr[i], arr[index-1]);
        index--;
        i++;
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            reverse(arr, i);
        }
    }

    for(int i=0; i<n-1; i++){
        cout << arr[i] << " ";
    }

    cout << arr[n-1] << "\n";

    return 0;
}