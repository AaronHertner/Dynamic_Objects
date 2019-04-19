//
// Created by Aaron Hertner on 4/19/2019.
//

#include <iostream>
#include <string>
#include "Human.cpp"

using namespace std;

class Student : public Human{
    public:
        virtual void printInfo(){
            cout << "My name is:    " << name <<", I am " << age << " years old, and my GPA is:  " << gpa << endl;
        }

        //setters required for static objects
        void setGPA(float x){gpa = x;}
        void setName(string s){name = s;}
        void setAge(int x){age = x;}
    private:
        float gpa;
    };