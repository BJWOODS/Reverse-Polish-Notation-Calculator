//
//  main.cpp
//  CST238Project2
//
//  Created by Brandon Woodard on 11/11/15.
//  Copyright (c) 2015 Brandon Woodard. All rights reserved.
//
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>
#include <iomanip>
#include <sstream>
#include <cmath>
using namespace std;
typedef double ElementType;
const unsigned SIZE_OF_STACK = 50;
class Calculator {
private:
    double a[SIZE_OF_STACK];
    unsigned t = 0;
    int z = 0;
public:
    void push(ElementType b);
    void pop();
    bool empty();
    void read(string txt);
    void print(string x,string i);
    void evaluate(string x);
    ElementType top();
};
class Start : Calculator {
private:
    Calculator stack;
    string txt;
    
public:
    void startcalculate();
};