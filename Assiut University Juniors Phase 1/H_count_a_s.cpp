#include <iostream>
#include <vector>
using namespace std;

vector<int> getPrefix(string s){
    vector<int> prefix(s.length());
    if(s.length()<=0){
        return prefix;
    }

    prefix[0] = ((s[0]=='a')? 1:0);

    for(int i=1; i<s.length(); i++){
        if(s[i]=='a'){
            prefix[i] = prefix[i-1] + 1;
        } else {
            prefix[i] = prefix[i-1];
        }
    }

    return prefix;
}


int main(){
    string s;
    cin >> s;
    long q;
    cin >> q;

    vector<int> prefix = getPrefix(s);

    while(q--){
        int l, r;
        cin >> l >> r;

        cout << prefix[r-1] - ((l>1)? prefix[l-2]: 0) << "\n";
    }

    return 0;
}