#include<iostream>
#include<cmath>
#include"coordin.h"
using namespace std;
int main(){
    rect rpalce;
    polar pplace;

    cout << "enter the x and y values: ";
    while(cin >> rpalce.x >> rpalce.y){
        pplace = rect_to_polar(rpalce);
        show_polar(pplace);
        cout << "next two numbers(q to quit): ";
    }
    cout << "bye!\n";
    return 0;
}