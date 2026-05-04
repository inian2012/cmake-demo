#include <iostream>

// 定义一个加法函数，接受两个整数参数并返回它们的和
int add(int a, int b) {
    return a + b;
}

int main() {
    // 定义两个整数变量 x 和 y
    int x = 5;
    int y = 10;

    // 调用 add 函数计算 x 和 y 的和，并将结果输出到标准输出
    std::cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << std::endl;

    // 返回 0 表示程序成功结束
    return 0;
}