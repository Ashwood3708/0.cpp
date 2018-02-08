/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul
 *
 * Created on January 31, 2018, 10:48 AM
 */

#include <iostream>
#include <stdlib.h>
#include "Stacks.h"
#include<string>
using namespace std;

/*
 * 
 */
int main(int argc, char* argv[]) {

    //argv[] is a string
    //*argv[] is a char

    string a[argc + 1];
    for (int k = 1; k < argc; k++) {
        a[k] = argv[k];
    }

    double x, y;
    //char a[] = {'1', '2', '*'};
    Stacks r;

    for (int i = 1; i < argc; i++) {

        if (a[i] == "+") {// add
            x = r.pop();
            y = r.pop();
            cout << "x + y = " << x + y << "\n";
            r.push(x + y);

        } else
            if (a[i] == "-") { // subtract
            y = r.pop();
            x = r.pop();
            r.push(x - y);
        } else
            if (a[i] == "*") { // multiply
            r.push(r.pop() * r.pop());
        } else
            if (a[i] == "/") { // divide
            y = r.pop();
            x = r.pop();
            r.push(x / y);
        } else                          //else put in integer, must go last b/c operations are read as 0
            if (atoi(a[i].c_str()) >= 0 && atoi(a[i].c_str()) <= 10000) {
            x = atoi(a[i].c_str());
            r.push(x);

        }

    }

    cout << "answer = " << r.pop() << endl;
    return 0;
}

