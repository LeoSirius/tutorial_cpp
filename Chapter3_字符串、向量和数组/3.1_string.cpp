#include <iostream>
#include <cctype>
using std::string;
using std::cin, std::cout, std::endl;

// 注意string是标准库类型，不同于c中的字符串字面量

// 直接初始化和拷贝初始化
// = 是拷贝初始化
string s1 = "hiya"; 
// 下面两种是直接初始化
string s2("hiya");
string s3(10, 'c');


int main()
{
    // 在返回for中改变字符，需要使用引用
    string s1 = "Hello World";
    for (auto &c : s1)
        c = toupper(c);
    cout << "s1 = " << s1 << endl;  // s1 = HELLO WORLD

    string s2 = "Hello World";
    for (auto c : s2)
        c = toupper(c);
    cout << "s2 = " << s2 << endl;  //s2 = Hello World


    // cin读取string会忽略开头的空白，并在遇到下一个空白时停止
    // 如果要读入包含空白的一行，可以用getline(istream, s)。这个函数返回istream
    string s3;
    getline(cin, s3);
    cout << "s3 = |" << s3 << "|" << endl;
    // 输入
    //           ccc     
    // 输出
    // s3 = |      ccc     |
}