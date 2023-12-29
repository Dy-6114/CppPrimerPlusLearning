#include <iostream>
#include <cstdio>

int main(){
    using namespace std;
    double* pd = new double;
    *pd = 10000001.0;
    cout<<"double value = "<<*pd<<":location = "<< pd <<endl;
    cout<<"location of pointer pd:"<< &pd << endl;
}
