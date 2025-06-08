#include <iostream>
using namespace std;
int main(){
    int x, n;
    cin >> x >> n;

    long long sum = 0, power = 1;
    sum = power - 1;


    for(int i=1; i<=n; i++){
        power *= x;

        if(i%2==0)
        sum += power;
    }

    
    

    cout << sum << "\n";

    return 0;
}