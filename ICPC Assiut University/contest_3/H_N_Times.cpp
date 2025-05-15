#include <iostream>
using namespace std;

void print(int n, char c){
    for(int i=1; i<n; i++){
        cout << c << " ";
    }

    cout << c << endl;
}

int main(){
    int t;
    cin >> t; 

    int n;
    char c;
    while(t--){
    cin >> n >> c;
    print(n, c);
    }

    return 0;
}