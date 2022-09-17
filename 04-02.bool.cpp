/*************************************************************************
	> File Name: 04-02.bool.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Sep 2022 12:09:50 PM CST
 ************************************************************************/

#include<iostream>

int main() {
    bool t = true;
    bool f = false;
    std::cout << (t and f) << std::endl;
    std::cout << (t or f) << std::endl;
    std::cout << (not true) << std::endl;
    return 0;
}
