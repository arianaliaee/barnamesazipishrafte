#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
public:
    Person(const string &first, const string &last)
        : firstName(first), lastName(last) {}

    virtual string display() const {
        return firstName + " " + lastName;
    }
};

class Student : public Person {
private:
    float average;
public:
    Student(const string &first, const string &last, float averageValue)
        : Person(first, last), average(averageValue) {}

    string display() const override {
        return Person::display() + ", Average: " + to_string(average);
    }
};

class Teacher : public Person {
private:
    double salary;
public:
    Teacher(const string &first, const string &last, double salaryValue)
        : Person(first, last), salary(salaryValue) {}

    string display() const override {
        return Person::display() + ", Salary: $" + to_string(salary);
    }
};

int main() {
    Student student1("ali", "ahmadi", 15);
    Teacher teacher1("maryam", "hosseini", 30000000);

    cout << "Student Information:" << endl;
    cout << student1.display() << endl;
    cout << endl;

    cout << "Teacher Information:" << endl;
    cout << teacher1.display() << endl;
    
    return 0;
}
