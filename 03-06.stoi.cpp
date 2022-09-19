/*************************************************************************
	> File Name: 03-06.stoi.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 19 Sep 2022 04:59:42 PM CST
 ************************************************************************/

#include<iostream>

int main(int argc, char *argv[]){
    int x = std::stoi(argv[1]);
    int y = std::stoi(argv[2]);
    std::cout << (x+y) << std::endl;
}
