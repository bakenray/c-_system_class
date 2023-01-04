/*************************************************************************
	> File Name: 02-03-test01.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 14 Nov 2022 05:03:05 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int find_binary_10(int n) {
    return ((n >> 9) & unit16_t(1));
}
int main() {
    int n;
    cin >> n;
    int no_10 = find_binary_10(n);
    cout << "no_10:" << no_10 << endl;
    return 0;
}
