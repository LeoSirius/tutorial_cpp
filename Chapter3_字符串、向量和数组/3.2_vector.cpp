#include <iostream>
#include <vector>
using std::vector, std::string, std::cout, std::endl;

// vector是类模板，是模板。只有加上具体元素的类型之后，才是类型
// vector的元素必须是对象。引用不是对象，所以不存在包含引用的vector

int main()
{
    // 注意初始化时，圆括号和花括号的区别
    // 圆括号是调用构造函数
    // 花括号是初始化列表
    vector<int> v1(10, 1);   // 10个元素，每个元素都是1
    vector<int> v2{10, 1};   // 两个元素，10和1

    // 初始化时只给长度，没给值，则
    // 1. 内置类型都是0
    // 2. 类类型，由类默认初始化
    vector<int> v3(10);      // 10个0
    vector<string> v4(10);   // 10个空字符串

    for (auto i : v3) cout << i << " ";
    cout << endl;
    for (auto i : v4) cout << i << " ";
    cout << endl;

}