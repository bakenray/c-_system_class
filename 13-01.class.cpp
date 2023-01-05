/*************************************************************************
	> File Name: 13-01.class.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 05 Jan 2023 11:44:49 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Student {
    private:
        int age;
        double chinese;
        double math;
        double english;
    public:
        const std::string name;
    Student(const std::string &n, int a, double c, double m, double e): name(n), age(a), chinese(c), math(m), english(e) {
         Student::number++;
    }
    std::string get_name() const {
        return name;
    }
    double total() const {
        return chinese + math + english;
    }
    static int number;
};

int Student::number = 0;

int main() {
    Student ray("ray", 30, 90, 91, 92);
    cout  << Student::number << endl;
    {
        Student ray("ray", 29, 93, 94, 95);
        cout << Student::number <<endl;
    }
    cout << Student::number << endl;
}
