#include<iostream>

template<typename T>
void ShowArray(T arr[],int n);

template<typename T>
void ShowArray(T *arr[],int n);

struct debts{
    char name[50];
    double amount;
};

using namespace std;

int main(){
    
    int things[6] = {13,31,103,301,310,130};
    struct debts mr_E[3] = {
        {"ima wolfe", 2400.0},
        {"ura foxe", 1300.0},
        {"iby stout", 1800.0}
    };
    double * pd[3];
    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }
    cout << "listing Mr.E's counts of things:\n";
    ShowArray(things,6);
    cout << "listing Mr.E's debts:\n";
    ShowArray(pd, 3);
    return 0;
}

template<typename T>
void ShowArray(T arr[], int n){
    cout << "template A\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

template<typename T>
void ShowArray(T * arr[], int n){  //指针类型的数组
    cout << "template B\n";
    for (int i = 0; i < n; i++)
    {
        cout << *arr[i] << ' ';
    }
    cout << endl;
}