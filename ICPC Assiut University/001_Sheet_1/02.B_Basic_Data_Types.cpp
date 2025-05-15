#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int a;
    long long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << "\n" << b << "\n" << c << "\n" << fixed << setprecision(2) << d << "\n" << fixed << setprecision(1) << e << "\n";

    return 0;
}