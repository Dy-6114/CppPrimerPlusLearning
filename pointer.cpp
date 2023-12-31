#include <iostream>
#include <cstdio>

int main()
{
    using namespace std;
    double *pd = new double;
    *pd = 10000001.0;
    cout << "double value = " << *pd << ":location = " << pd << endl;
    cout << "location of pointer pd:" << &pd << endl;
    delete pd;
    int *psome = new int[10];
    for (int i = 0; i < 10; i++)
    {
        psome[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << psome[i] << endl;
    }
    delete[] psome;
    // 指针和字符串
    char flower[10] = "rose";
    cout << flower << "s are red";
}
