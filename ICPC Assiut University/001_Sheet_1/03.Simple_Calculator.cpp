#include <bits/stdc++.h>
using namespace std;
#define calculate(i, j, k, l) cout << i << " " << j << " " << k << " = " << l << endl;

int main(){

    long a, b;
    cin >> a >> b;
    calculate(a, '+', b, a+b);
    calculate(a, '*', b, (long long)a*b);
    calculate(a, '-', b, a-b);

    

    return 0;
}