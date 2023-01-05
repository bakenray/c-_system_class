/*************************************************************************
	> File Name: 12-01.struct-sizeof.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 05 Jan 2023 10:18:37 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
struct Student {
    string name;
    int age;
    double score;
};

int main() {
    cout << "name: " << sizeof(string) << endl;
    cout << "age: " << sizeof(int) << endl;
    cout << "score: " << sizeof(double) << endl;
    cout << "Student: " << sizeof(int) << endl;
    return 0;
}
