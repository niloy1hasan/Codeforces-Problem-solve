#include <iostream>
using namespace std;
int main(){
    long long n, k, a;
    cin >> n >> k >> a;

    double result = (n*k)/(double)a;

    if(result!=((long long)result)){
        cout << "double\n";
    } else if(result>2147483647){
        cout << "long long\n";
    } else {
        cout << "int\n";
    }
    
    
    return 0;
}