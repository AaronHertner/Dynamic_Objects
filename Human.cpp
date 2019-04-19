//
// Created by Aaron Hertner on 4/19/2019.
//
#include <iostream>
#include <string.h>

using namespace std;

#ifndef HUMAN_CPP
#define HUMAN_CPP
//abstract class
class Human{
public:
    virtual void printInfo() = 0;
protected:
    string  name;
    int     age;
};
#endif