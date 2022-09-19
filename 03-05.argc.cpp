/*************************************************************************
	> File Name: 03-05.argc.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 19 Sep 2022 04:53:06 PM CST
 ************************************************************************/

#include<iostream>

int main(int argc, char *argv[]) {
    for(int i = 0; i < argc; ++i) {
        std::cout << i << " " << argv[i] << std::endl;
    }
    return 0;
}
