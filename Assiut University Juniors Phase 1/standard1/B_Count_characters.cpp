#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;

    map<int, int> countNum;

    for(char c: s){
        if(countNum.count(c)){
           countNum.at(c)++; 
        } else {
            countNum.insert({c, 1});
        }
    }


    for(auto i: countNum){
        cout << (char)i.first << " " << i.second << "\n";
    }

    return 0;
}