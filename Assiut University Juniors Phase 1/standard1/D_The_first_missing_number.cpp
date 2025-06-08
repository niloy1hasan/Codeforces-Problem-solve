#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long n, m;
    cin >> n >> m;

    set<long> number;

    long a;

    for(int i=0; i<n; i++) {
        cin >> a;
        number.insert(a);
    }

    long start = (-1)*m;

    for(long i:number){
        if(i!=start){
        cout << start << endl;
        break;
        } 
        
        start++;
    }

    return 0;
}