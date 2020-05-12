// 这个程序读入不定数的值，并输出其和

// >> 运算反符返回左侧的运算对象，这里是cin。
// istream类的对象作为检测条件，用的是其流的状态。
// 流正常时，值是true。遇到EOF或无效输入时，值是false

#include <iostream>

int main()
{
    int sum = 0, value = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}