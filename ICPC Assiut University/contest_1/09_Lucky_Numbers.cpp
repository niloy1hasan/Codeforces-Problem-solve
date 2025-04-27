#include <iostream>
using namespace std;

void isLucky(){
    short n;
    cin >> n;

    if((n%10)%((n/10)%10)==0 || (((n/10)%10)%(n%10)==0))
    cout << "YES\n";
    else
    cout << "NO\n";

}


int main(){
    isLucky();
    return 0;
}