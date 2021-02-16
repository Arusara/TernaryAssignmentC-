#include <iostream>
#include <string>
#include <cmath>
#include "BTernary.h"

using namespace std;

int main() {
    cout<<"\n";
    cout<<"CPSC 2620 Assignment 2\n\n";
   
    string s1 = "10-1-1";
    string s2 = "41-10";
    cout<<"creating object Bternary object (BTernary a)\n";
    BTernary a;
    cout<<"Display of (BTernary a)\n";
    a.display();

    cout<<"\n\n";

    cout<<"creating object Bternary object (BTernary b(s1))\n";
    BTernary b(s1);
    cout<<"Display of (BTernary b(s1))\n";
    b.display();

    cout<<"\n\n";

    cout<<"creating object Bternary object (BTernary c(s2))\n";
    BTernary c(s2);
    cout<<"Display of (BTernary c(s2))\n";
    c.display();

    cout<<"\n\n";

    cout<<"plus\n";
    cout<<"creating object Bternary object (BTernary d(s1))\n";
    BTernary d(s1);
    cout<<"creating object Bternary object (BTernary e(s1))\n";
    BTernary e(s1);
    cout<<"doing plus operation d+e\n";
    BTernary f = d.plus(e);
    cout<<"Result of plus\n";
    f.display();

    cout<<"\n\n";

    cout<<"minus\n";
    cout<<"creating object Bternary object (BTernary g(-11011))\n";
    BTernary g("-11011");
    cout<<"creating object Bternary object (BTernary h(s1))\n";
    BTernary h(s1);
    cout<<"doing minus operation g-h\n";
    BTernary i = g.minus(h);
    cout<<"Result of minus\n";
    i.display();

    cout<<"\n\n";

    cout<<"times\n";
    cout<<"creating object Bternary object (BTernary j(s1))\n";
    BTernary j(s1);
    cout<<"creating object Bternary object (BTernary k(s1))\n";
    BTernary k(s1);
    cout<<"doing times operation j*k\n";
    BTernary l = j.times(k);
    cout<<"Result of times\n";
    l.display();

    cout<<"\n\n";

    cout<<"insert\n";
    cout<<"creating object Bternary object (BTernary m(s1))\n";
    BTernary m(s1);
    m.insert(cout);

    cout<<"\n\n";
    
    cout<<"extract\n";
    cout<<"creating object Bternary object (BTernary n)\n";
    BTernary n;
    n.extract(cin);
    n.display();
    
    return 0;
}