/*************************************************************************
	> File Name: 04-01.string.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 12:03:39 PM CST
 ************************************************************************/

#include<iostream>

int main() {
    std::string string ("Hello World", 5);
    std::string string2 { "Hello World", 5 };
    std::cout << string << string2 << std::endl;
    return 0;
}
