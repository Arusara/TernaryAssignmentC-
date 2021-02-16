#include "BTernary.h"
#include <iostream>
#include <string>
#include <cmath>

 // no paramter in constructor.
    BTernary::BTernary() {

        decimal = 0;
        ternary = "0";

    }

    // parameterized constructor.
    BTernary::BTernary(string input) {
        if (!isTernary(input)) {
            cout<<input<<" The invalid ternary number\n";
            decimal = 0;
            ternary = input + " (INVALID) ";
        } else {
            decimal = ternaryTodecimal(input);
            ternary = input;
        }
    }

    bool BTernary::isTernary(string str) {

        for (int i = 0; i < str.length(); i++) {
            if (str[i]!='1' && str[i]!='0'&& str[i]!='-' ) {
                return false;
            }
        }
        return true;
    }

    string BTernary::decimalToternary(int d) {

        string ternaryResult = "";
        bool Negative = false;
        int temp = abs(d);
        int trit;
        if (d<0) {
            Negative = true;
        }
        string appending;
        while (temp>0) {
            trit =  temp % 3;

            if (trit == 0) {
                appending = "0";
               ternaryResult = appending + ternaryResult;
               //ternaryResult =   ternaryResult + appending;

                temp = temp/3;

            } else if (trit == 1) {
                if (Negative) {
                   // ternaryResult = '-1' + ternaryResult;
                   appending = "-1";
                } else  {
                    //ternaryResult = '1' + ternaryResult;
                   appending = "1";
                }
                ternaryResult = appending + ternaryResult;
                //ternaryResult = ternaryResult + appending;

                temp = temp/3;

            } else if (trit == 2) {
                if (Negative) {
                    appending = "1";
                } else  {                                        
                    appending = "-1";
                }
            ternaryResult = appending + ternaryResult;
              //ternaryResult = ternaryResult + appending;

                temp = (temp+1)/3;

            }
        }
        return ternaryResult;
    }

    int BTernary::ternaryTodecimal(string str) {
        int result = 0;
        int base = 3;
        int expo = 0;
        int N = str.length();

        for (int i = N; i>=0; i--) {

            if (str[i]== '-' || str[i]=='0') { 
                if(str[i]=='0') {
                    expo= expo + 1;
                }
                continue;
            } else if (str[i]=='1') {
                int value = pow(base, expo);
                expo = expo + 1;

                if (i!=0 && str[i-1]=='-') {
                    result = result - value;
                } else {
                    result = result + value;
                }
            } else if (str[i]=='2') {
                int value = pow(base, expo);
                expo = expo + 1;

                if (i!=0 && str[i-1]=='-') {
                    result = result - (2*value);
                } else {
                    result = result + (2*value);
                }
            } 
        }
        return result;
    } 

    BTernary BTernary::plus(BTernary bT) {
        int a = this->decimal;
        cout<<a<<"\n";
        int b = bT.decimal;
        cout<<b<<"\n";
        int c = a + b;
        string ternary = decimalToternary(c);
        cout<<ternary<<"\n";
        return BTernary(ternary);
    }

    BTernary BTernary::minus(BTernary bT) {
        int a = this->decimal;
        int b = bT.decimal;
        int c = a - b;
        string ternary = decimalToternary(c);
        return BTernary(ternary);
    }

    BTernary BTernary::times(BTernary bT) {
        int a = this->decimal;
        int b = bT.decimal;
        int c = a * b;
        string ternary = decimalToternary(c);
        return BTernary(ternary);

    }

    void BTernary::extract(istream &in) {

        string i;
        cout<<"enter the ternary number\n";
        in >> i;
        this->decimal = ternaryTodecimal(i);
        this->ternary = i;
    }

    void BTernary::insert(ostream &out) {
       
       out<<"The Decimal number "<<this->decimal<<"\n";
       out<<"The ternary number "<<this->ternary<<"\n";
    }

    void BTernary::display() {
        cout<<"The Decimal number "<<this->decimal<<"\n";
        cout<<"The ternary number "<<this->ternary<<"\n";
    }
