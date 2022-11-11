/*************************************************************************
	> File Name: 05-01.prime.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 20 Sep 2022 10:01:31 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>

bool is_prime(int n) {
    if(n < 2){
        return false;
    } else if(n == 2) {
        return true;
    } else if(n%2) {
        return false;
    }
    for(int d = 3; d*d < n; d+=2) {
        if(n%d == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<bool> pr(n + 1, true);
    pr[1] = false;

    for(int i = 2; i < n; ++i) {
        if(pr[i]) {
            for(int ij = 2*i; ij < n; ij+=i) {
                pr[ij] = false;
            }
        }    
    }
    for(int k = 2; k <= n; ++k) {
        if(pr[k]) std::cout << k << std::endl;
    }
}
