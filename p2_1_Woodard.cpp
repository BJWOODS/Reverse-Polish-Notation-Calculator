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
#include "p2_1_Woodard.h"
using namespace std;
void Start::startcalculate()
{
    
    
    cout<<"RPN Caclulator"<<endl;
    std::cout <<"Final Answer will be on the last line/step" <<endl;
    cout<<endl;
    cout<<"Enter a RPN operation: ";
    
    while(true)
    {
        
        cin>>txt;
        stack.read(txt);
    }
    
    
}

void Calculator::evaluate(string x)
{
    string i;
    
    double tmp1,tmp2;
    
    tmp2 = top();
    pop();
    tmp1= top();
    pop();
    
    if(x=="+")
    {
        double result;
        result=tmp1+tmp2;
        push(result);
        i="Addition";
    }
    if(x=="-")
    {
        
        double resultmin;
        resultmin = tmp1 - tmp2;
        push(resultmin);
        i="Subtraction";
    }
    if(x=="*")
    {
        double resultmul;
        resultmul = tmp1*tmp2;
        push(resultmul);
        i="Multiplication";
        
    }
    if(x=="/")
    {
        double resultdiv;
        resultdiv = tmp1/tmp2;
        push(resultdiv);
        i="Division";
    }
    if(x=="^")
    {
        double resultsquare;
        resultsquare = pow(tmp1,tmp2);
        push(resultsquare);
        i="Power";
    }
    
    
    print(x, i);
    
    
}
void Calculator::print(string x, string i)
{
    
    Calculator b;
    if(t == 1)
    {
        
        z++;
        cout<<endl;
        cout<<"Step:"<<z<<' '<<i<<" operator"<<" used "<<':'<< top() << endl;
        cout<<endl;
    }
    else{
        while(t!=1)
        {
            z++;
            cout<<"Step:"<<z<<' '<<i<<" operator"<<" used "<<':'<< top() << endl;
            b.push(top());
            pop();
        }
        while(!b.empty())
        {
            push(b.top());
            b.pop();
        }
    }
    
}
void Calculator::read(string txt)
{
    double num;
    char op;
    
    
    if(istringstream(txt)>>num)
    {
        
        push(num);
        
    }
    else if(istringstream(txt)>>op)
    {
        evaluate(txt);
        
    }
    else
    {
        
        cerr<<"invalid operation";
        return;
    }
    
    
    
}
void Calculator::push(ElementType b) {
    if (t >= SIZE_OF_STACK) {
        std::cerr << "No space on stack!";
        return;
    }
    
    a[t]=b;
    
    t++;
    
}
void Calculator::pop() {
    if (t == 0) {
        std::cerr << "There is nothing on the stack to pop!";
        return;
    }
    t--;
}

bool Calculator::empty(){
    return (t == 0);
}

ElementType Calculator::top(){
    return a[t-1];
}

