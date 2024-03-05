#include<iostream>
using namespace std;
int main(){
    int ar[3] = {1,2,3};
    int *pa = ar; //数组第一个元素的地址
    int (*pb)[3] = &ar; //数组的地址
    cout<< "指向数组的指针"<<endl;
    cout << *pa << endl; //输出的数组的第一个元素
    for (int i = 0; i < 3; i++)
    {
        cout << pa[i] << endl;
    }
    cout<< "指向数组指针的指针"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout << (*pb)[i] << endl;
    }
    
}