#include <iostream>
using namespace std;
using int128 = __int128;
int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long l, r;
        cin >> l >> r;
        int128 sum_r = (int128)r * (r + 1) / 2;
        int128 sum_l = (int128)(l - 1) * l / 2;
        int128 result = sum_r - sum_l;
        cout << endl;

    }
    
    return 0;
}