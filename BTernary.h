
#ifndef BTERNARY_H
#define BTERNARY_H
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class BTernary {

    public:
    int decimal;
    string ternary;

    public:
    BTernary();
    BTernary(string input);
    bool isTernary(string str);
    string decimalToternary(int d);
    int ternaryTodecimal(string str);
    BTernary plus(BTernary bT);
    BTernary minus(BTernary bT);
    BTernary times(BTernary bT);
    void extract(istream &in);
    void insert(ostream &out);
    void display();

};

#endif
