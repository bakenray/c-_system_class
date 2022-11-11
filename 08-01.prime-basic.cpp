/*************************************************************************
	> File Name: 08-01-prime-basic.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 10 Nov 2022 11:07:06 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    else if(n % 2) {
        return false;
    }
    for (int d = 3; d * d <=  n; d++) {
        if(n % d == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    if(n == 2) {
        std::cout << 2 << std::endl;
    }
    for (int k = 3; k <= n; k+=2) {
        if (is_prime(k)) {
            std::cout << k << std::endl;
        }
    }
}
