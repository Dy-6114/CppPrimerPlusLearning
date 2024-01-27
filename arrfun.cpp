#include <iostream>

using namespace std;

int sum(int (*)[4], int);  // 二维数组原型1
int main()
{
    int total=0;
    int a[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    total = sum(a, 2);
    cout << "total:" << total << endl;
}

int sum(int (*arr)[4], int row)
{
    int temp = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < 4; j++)
            temp += arr[i][j];
    return temp;
}