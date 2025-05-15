#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long row = n/4;
    long long column = (row%2)? (3-(n%4)): n%4;
    
    cout << row << " " << column << endl;
    return 0;
}