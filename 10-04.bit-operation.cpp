/*************************************************************************
	> File Name: 10-03.bit-gression.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 04 Jan 2023 11:05:25 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;


 //查看二进制
void show_binary(uint16_t n) {
    for(int j = 15; j >= 0; --j) {
        //n左移15位,然后与无符号的16位的1进行与运算
         cout << ((n >> j) & uint16_t(1));
     }
     cout << endl;
}
int main () {
    uint16_t n = 42635;
    uint16_t m = 42635;

    show_binary(n);
    show_binary(m);
    show_binary(n & m);
    show_binary(n | m);
    show_binary(~n);

}
