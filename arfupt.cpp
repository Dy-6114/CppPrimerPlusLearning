#include <iostream>
const double *f1(const double ar[], int n);
const double *f2(const double[], int);
const double *f3(const double *, int);

int main()
{
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};
    // pointer to a function
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;
    cout << "using pointers to functions:" << endl;
    cout << "address value:" << endl;
    cout << (*p1)(av, 3) << ":" << *(*p1)(av, 3) << endl;
    cout << p1(av, 3) << ":" << *p1(av, 3) << endl;
    cout << p2(av, 3) << ":" << *p2(av, 3) << endl;

    // pa an array of pointers
    // auto doesn's work with list initationlization
    const double *(*pa[3])(const double *, int) = {f1, f2, f3}; // pa[0],pa[1],pa[2]都是指针，pa[3]就是指针数组，pa数组名
    // but it does work for initalizing to a single value
    // pb a pointer to first element of pa
    auto pb = pa;
    // or using the following code instead
    // const double *(**pb)(const double *,int) = pa;
    cout << "\nusing an array of pointers to functions:" << endl;
    cout << "address value:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << pa[i](av, 3) << ":" << *pa[i](av, 3) << endl;
    }
    cout << "\nusing a pointer to a pointer to a function:" << endl;
    cout << "address value:" << endl;
    cout << (*pb)(av, 3) << ":" << *(*pb)(av, 3) << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << pb[i](av, 3) << ":" << *pb[i](av, 3) << endl;
    }

    // using a pointer to an array of function pointers
    // auto pc = &pa;
    const double *(*(*pc)[3])(const double *, int) = &pa; // 指向数组指针的指针（非指针数组）
    cout << "\nusing pointers to an array of pointers:" << endl;
    cout << "address value:" << endl;
    cout << (*pc)[0](av, 3) << ":" << *(*pc)[0](av, 3) << endl;

    //使用typedef进行简化
    typedef const double * (*p_fun)(const double *,int);
    p_fun  p1 = f1;
    p_fun pa[3] = {f1, f2, f3};
    p_fun (*pd)[3] = &pa;
    return 0;
}
const double *f1(const double ar[], int n)
{
    return ar;
}
const double *f2(const double ar[], int n)
{
    return ar + 1;
}
const double *f3(const double *ar, int n)
{
    return ar + 2;
}
