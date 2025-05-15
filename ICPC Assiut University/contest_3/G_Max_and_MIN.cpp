#include <bits/stdc++.h>
using namespace std;

    
    void max_min(int size){
        int a;
        long long max = LLONG_MIN, min = LLONG_MAX;
        for(int i=0; i<size; i++){
        cin >> a;
        if(max<a){
            max = a;
        }
        
        if(min>a){
            min = a;
        }
     }
    
     cout << min << " " << max << endl;
    }

int main(){
    int n;
    cin >> n;

    max_min(n);

    return 0;
}