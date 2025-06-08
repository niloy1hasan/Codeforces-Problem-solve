#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n, q;
    cin >> n >> q;

    int z;
    long x;

    map<int, int> number;

    while(q--){
        cin >> z >> x;

        if(z==1){
            if(number.count(x)){
                number.at(x)++;
            } else {
                number.insert({x, 1});
            }
        } else {
            if(number.count(x)){
                cout << number.at(x) << "\n";
            } else {
                cout << "0\n";
            }
        }
    }

    return 0;
}