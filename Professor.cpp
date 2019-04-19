//
// Created by Aaron Hertner on 4/19/2019.
//

#include <iostream>
#include <string>
#include "Human.cpp"

using namespace std;

class Professor : public Human{
public:
    Professor(string s, int i, float x){
        name = s;
        age = i;
        salary = x;
    }
    virtual void printInfo(){
        cout<< "My name is:    " << name << ", I am " << age << " years old. "
            << "I make $" << salary << " a year!" << endl;
    }
private:
    float salary;
};