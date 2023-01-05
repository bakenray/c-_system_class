/*************************************************************************
	> File Name: 12-02.struct-use.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 05 Jan 2023 10:23:19 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct Student {
    std::string name;
    int age;
    double score;
};

int main() {
    Student s {"ray", 29, 100};
    s.name = "lpq";
    s.age = 30;
    s.score = 99.9;
    cout << s.name << "\t" << s.age << "\t" << s.score << "\t" << endl;
    return 0;
}
