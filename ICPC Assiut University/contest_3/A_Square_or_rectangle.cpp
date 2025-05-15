#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        long w, h;
        cin >> w >> h;

        if(w==h){
            cout << "Square\n";
        } else {
            cout << "Rectangle\n";
        }

    }

    return 0;
}