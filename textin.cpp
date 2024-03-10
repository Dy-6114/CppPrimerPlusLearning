#include<iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;
    while(cin.get(ch)){
        cout << ch;
        ++count;
    }
    cin.get();
    cout << count <<" characters read\n";
    return 0;
}