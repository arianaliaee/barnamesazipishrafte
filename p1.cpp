#include <iostream>
#include <string>

struct Person {
    int id;
    int age;
    std::string name;
};

int main() {
    Person people[10] = {
        {1, 20, "adam1"},
        {2, 30, "adam2"},
        {3, 22, "adam3"},
        {4, 28, "adam4"},
        {5, 35, "adam5"},
        {6, 27, "adam6"},
        {7, 31, "adam7"},
        {8, 29, "adam8"},
        {9, 26, "adam9"},
        {10, 24, "adam10"}
    };

    int sumAge = 0;
    for (int i = 0; i < 10; i++) {
        sumAge += people[i].age;
    }
    
    double averageAge = sumAge / 10;
    
    std::cout << "Average: " << averageAge << std::endl;
    
    return 0;
}
