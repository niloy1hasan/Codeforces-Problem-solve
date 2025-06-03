#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a<=b && b<=c){
        cout << (b-a)+(c-b) << endl;
    } else if(a>=b && a<=c){
        cout << (a-b)+(c-a) << endl;
    } else if(c>=a && c<=b){
        cout << (c-a)+(b-c) << endl;
    }
    

    return 0;
}