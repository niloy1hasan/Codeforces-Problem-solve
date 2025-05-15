#include <iostream>
using namespace std;
int main(){
    char alpha;
    cin >> alpha;

    if(alpha=='z'){
        cout << "a\n";
    } else {
        cout << ++alpha << endl;
    }

    return 0;
}