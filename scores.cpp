#include <iostream>
#include <fstream>

int main()
{
    using namespace std;
    ofstream outFile;
    char filename[50];
    cout << "输入文件名称：";
    cin.getline(filename, 50);
    outFile.open(filename);
    char ch;
    cout << "输入文件内容：" << endl;
    while (cin.get(ch))
    {
        outFile << ch;
    }
    outFile.close();
    return 0;
}