/*************************************************************************
	> File Name: 02-02.string.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 16 Sep 2022 11:30:15 AM CST
 ************************************************************************/

#include<iostream>

int main() {
    std::string string1("Hello World", 5);
    std::string string2 { "Hello World", 5 };
    std::cout << string1 << std::endl;
    std::cout << string2 << std::endl;
}
