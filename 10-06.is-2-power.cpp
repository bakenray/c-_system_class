/*************************************************************************
	> File Name: 10-06.is-2-power.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Jan 2023 11:35:59 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int is_2_power(int n) {
    return ((n & (n - 1)) == 0);
}

int main() {
    int n;
    cout << "若要退出,输入 0 以结束程序" <<endl;
    while(true) {
        cin >> n;
        if(n == 0) break;
        cout << n << (is_2_power(n) ? "是" : "不是") << "2的幂" << endl;
    }
}
