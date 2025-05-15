#include <iostream>
using namespace std;
int main(){
    long long n, m , k;
    cin >> n >> m >> k;

    long long total = 0;
    
    if(n>0 && m>0 && k>0){
        long long minimum = min(n, min(m, k));
        total += minimum;
        n -= minimum;
        m -= minimum;
        k -= minimum;
    }

    if(n>0 && k>0){
        total += min((n/2), k);
    }


    cout << total << endl;


    return 0;
}