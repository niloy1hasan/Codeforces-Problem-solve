#include <iostream>
using namespace std;

int main(){
    long long a, b, k;
    cin >> a >> b >> k;

    if(a%k==0 && b%k==0){
        cout << "Both\n";
    } else if(a%k!=0 && b%k!=0){
        cout << "No One\n";
    } else if(a%k){
        cout << "Momo\n";
    } else if(b%k){
        cout << "Memo\n";
    }

    return 0;
}