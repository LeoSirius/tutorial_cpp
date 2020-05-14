#include <iostream>
#include <string>
#include <cstring>
using namespace std;
// 数组大小固定，且值必须是在编译时已知的，即常量表达式
// 同vector一样，不存在引用的数组

int main()
{
    char a1[] = {'c', '+', '+'};         // 末尾不会自动补0
    char a2[] = {'c', '+', '+', '\0'};   // 手动补0
    char a3[] = "c++";                   // 自动补0
    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;

    // c风格的字符串即以‘\0’结尾的字符串。字符串字面量都是c风格的字符串
    // string.c_str()可以把string类型转换为c风格的字符串
    // <cstring>头文件对应c的<string.h> 其中有strlen, strcmp, strcat, strcpy等函数
}