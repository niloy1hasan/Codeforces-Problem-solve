#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x;
    long p;
    cin >> x >> p;
 
    double price = (float) p / (1.00-x/100.00);
 
    cout << fixed << setprecision(2) << price << endl;
 
    return 0;
}