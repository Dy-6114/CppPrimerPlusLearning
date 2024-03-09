#include <iostream>
inline double square(double x) { return x * x; }
int main()
{
    using namespace std;
    double a, b;
    double c = 13.0;
    const char *pch = "abcd"; // 字符串常量只能赋给常量指针
    cout << pch << endl;
    a = square(5.0);
    b = square(4.5 + 7.5);
    cout << a << endl;
    cout << b << endl;
    cout << square(c++) << endl;
    cout << c;
    return 0;
}