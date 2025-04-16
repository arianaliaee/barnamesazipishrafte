#include <iostream>
#include <string>
using namespace std;

class School {
private:
    class Student {
    public:
        string name;
        int age;

        Student(string n, int a) : name(n), age(a) {}
    };

    Student students[10] = {
        Student("shirin", 18),
        Student("Sara", 20),
        Student("mahsa", 19),
        Student("kimia", 17),
        Student("nazi", 22),
        Student("melika", 21),
        Student("rojin", 19),
        Student("jamile", 18),
        Student("hosa", 20),
        Student("akram", 23)
    };

public:
    School() {}

    double getAverageAge() {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += students[i].age;
        }
        return sum / 10.0;
    }
};

int main() {
    School school;

    cout << "Miangin: " << school.getAverageAge() << endl;

    return 0;
}
