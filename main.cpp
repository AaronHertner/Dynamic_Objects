#include <iostream>
#include <string>
#include <ctime>
#include "Student.cpp"
#include "Professor.cpp"

using namespace std;
int main() {

    Student     stuArr[10];     //static object array
    int         stuN = 0;
    Professor   *profArr[10]; //dynamic object array
    int         profN = 0;

    string  stuNames[10] = {"Jacob", "Tom", "Riley", "Ariel", "Sarah",
                         "Caitlin", "Scott", "Rob", "Tim", "Samantha"};
    string  profNames[10] = {"Tammy", "Ron", "David", "Scott", "Nadiya",
                             "Ray", "Mark", "Christine", "Pat", "Lukas"};

    //loop for making static student objects
    srand(time(nullptr));
    for(int i = 0; i < 10; ++i){
        Student stu;    //static objects
        int age = rand()%50;
        float gpa = rand()%50;
        stu.setAge(age);
        stu.setGPA(gpa);
        stu.setName(stuNames[i]);
        stuArr[stuN] = stu;
        stuN++;
        cout << "Student  : ";
        stu.printInfo();
    }

    //loop for making dynamic professor objects
    for(int j = 0; j < 10; ++j){
        int age = rand()%70;
        float salary = (rand()%100) * 5000;
        Professor *prof = new Professor(profNames[j], age, salary);
        profArr[profN] = prof;
        profN++;
        cout << "Professor: ";
        prof -> printInfo();
    }

    //freeing the dynamically created professor objects
    for(int l = 0; l < 10; ++l){
        delete(profArr[l]);
    }
}