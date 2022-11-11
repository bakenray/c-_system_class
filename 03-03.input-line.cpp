/*************************************************************************
	> File Name: 03-03.input-line.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 16 Sep 2022 12:03:28 PM CST
 ************************************************************************/

#include<iostream>

int main() {
    std::string x;
    std::getline(std::cin, x);
    std::cout << x << std::endl;
    return 0;
}
