#include <iostream>
using namespace std;
int main(){
    double x, y;
    cin >> x >> y;

    if(x<0){x = 360 - x;}
    if(y<0){y = 360 -y;}

    int xi = (int) x;
    int yi = (int) y;



    xi %= 360;
    yi %= 360;

    if(xi + (x-xi)>0 && yi + (y-yi)>0 && xi + (x-xi)<90 && yi + (y-yi)<90) cout << "Q1";
    else if(xi + (x-xi)>90 && yi + (y-yi)>90 && xi + (x-xi)<180 && yi + (y-yi)<180) cout << "Q2";
    else if(xi + (x-xi)>180 && yi + (y-yi)>180 && xi + (x-xi)<270 && yi + (y-yi)<270) cout << "Q3";
    else if(xi + (x-xi)>270 && yi + (y-yi)>270 && xi + (x-xi)<360 && yi + (y-yi)<360) cout << "Q4";
 



    return 0;
}