#include <bits/stdc++.h>
using namespace std;

void swapRow(vector<vector<int>> &arr, int n, int x, int y){
    for(int i=0; i<n; i++){
        swap(arr[x][i], arr[y][i]);
    }
}


void swapColumn(vector<vector<int>> &arr, int n, int x, int y){
    for(int i=0; i<n; i++){
        swap(arr[i][x], arr[i][y]);
    }
}


int main(){
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;

    vector<vector<int>> arr(n, vector<int> (n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }


    swapRow(arr, n, x-1, y-1);
    
    swapColumn(arr, n, x-1, y-1);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j];
            if(j < n-1){
                cout << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}