#include <iostream>
using namespace std;
int main(){
    long a, b;
    cin >> a >> b;
    if(a<=b){
        cout << "0\n";
    } else {
        cout << (a-b) << endl;
    }

    return 0;
}