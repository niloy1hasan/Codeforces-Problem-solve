#include <bits/stdc++.h>
using namespace std;
int main(){
    long n, k;
    cin >> n >> k;

    while(n>0){
        long long min = __LONG_LONG_MAX__;
        long long value;
        for(int i=0; i<k && n>0; i++){
            cin >> value;

            if(value<min){
                min = value;
            }
        n--;
        }

        cout << min;
        
        if(n>0){
            cout << " ";
        } else {
            cout << endl;
        }

        
    }
    
    return 0;
}