/*************************************************************************
	> File Name: 11-01.array-basic.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Jan 2023 02:05:08 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int arr1[4] = { 1, 2, 3, 4 };
    float arr2[5] = { 1.1, 2.2, 3.3, 4.4 }; //后面未初始化的,默认为0
    double arr3[6] = {}; //未初始化,默认都为0

    cout << "arr1[3]: " << arr1[3] << endl;
    cout << "arr2[4]: " << arr2[4] << endl;
    cout << "arr3[5]: " << arr3[5] << endl;

}
