#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int x = 0, y = n-1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(x==y && i==j){
                cout << "X";
            } else if(j==x){
                cout << "\\";
            } else if(j==y){
                cout << "/";
            } else {
                cout << "*";
            }
        }
        cout << "\n";
        x++;
        y--;
    }

    return 0;
}