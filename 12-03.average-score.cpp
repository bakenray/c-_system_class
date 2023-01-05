/*************************************************************************
	> File Name: 12-03.average-score.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 05 Jan 2023 10:28:16 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct Student {
    std::string name;
    int age;
    double score;
};

int main() {
    int n;
    cout << "input number of students: ";
    cin >> n;
    
    double sum = 0;

    for (int i = 0; i < n; ++i) {
        Student s;
        cin >> s.name >> s.age >> s.score;
        sum += s.score;
    }
    cout << "average: " << sum/n << endl;
    return 0;
}
