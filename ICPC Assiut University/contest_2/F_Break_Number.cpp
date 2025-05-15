#include <iostream>
using namespace std;

int breakNumber(long long x){
    int count = 0;
    while(x>0 && x%2==0){
        count++;
        x/=2;
    }

    return count;
}

int main(){
    int n;
    cin >> n;
    int max = 0;

    while(n--){
        long long num;
        cin >> num;
        int div = breakNumber(num);
        if(div>max) max = div;
    }

    cout << max << endl;


    return 0;
}