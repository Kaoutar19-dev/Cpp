#include<iostream>
#include"point.h"
int main() {
    point p(2.9,1.0);
    p.affiche();
    p.deplace(1.1, 3.0);
    p.affiche();
    return 0;

}