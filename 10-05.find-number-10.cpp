/*************************************************************************
	> File Name: 10-05.find-number-10.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Jan 2023 11:27:13 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int find_binary_10(int n) {
    cout << n << "的二进制数为:";
    for (int j = 15; j >= 0; --j) {
        std::cout << ((n >> j) & uint16_t(1));
    }
    cout << endl;
    return ((n >> 9) & uint16_t(1));
}

int main() {
    int n;
    cout << "若要退出,输入 0 以结束程序" << endl;
    while(true) {
        cin >> n;
        if (n == 0) break;
        int no_10 = find_binary_10(n);
        cout << n << "的右起第10位是:" << no_10 << endl;
    }
}
