// learn-cpp-calculator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Dll_add.h"
#include "Dll_sub.h"
#include "Lib_mul.h"

using namespace std;

int main() {
    int add_result = add_func(3, 4);
    int sub_result = sub_func(3, 4);
    int mul_result = mul_func(3, 4);

    std::cout << "add_result: " << add_result << std::endl;
    std::cout << "sub_result: " << sub_result << std::endl;
    std::cout << "mul_result: " << mul_result << std::endl;

    return 0;
}
