// iostream库包括两个基础类型
// - istream，cin是istream类的对象
// - ostream，ostream类的对象有三个：cout，cerr，clog

// 输出运算符 << : 左侧必须是ostream对象，并且返回左侧的运算对象。把右边的结果写到ostream中
// 输入运算符 >> : 左侧必须是istream对象，并且返回左侧的运算对象。从istream中把数据写到右边的变量

#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}

// leo@leodeMacBook-Pro code_c++_primer $ ./a.out 
// Enter two numbers: 
// 2 4
// The sum of 2 and 4 is 6