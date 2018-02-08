/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stack.h
 * Author: Abdul
 *
 * Created on January 31, 2018, 10:53 AM
 */

#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

typedef double ElementType;

struct nodeS{
     ElementType data;
    nodeS * next;
};

class Stacks {
public:
    Stacks(); // Create an empty list
    bool EmptyS(); // Return true if the list is empty, otherwise return false
    void push(ElementType x); // Insert a value x at the front of the list
    ElementType pop(); // delete value on top
    void DisplayS(); // Display the data values in the list


private:
    nodeS * firstS; // Pointer
    int NS;  //number of nodes
};


#endif /* STACK_H */

