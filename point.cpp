#include<iostream>
#include"point.h"
using namespace std;
point::point(float a=0, float b=0) : x(a),y(b) {}
void point::deplace(float dx, float dy){
    x +=dx;
    y +=dy;
}
void point::affiche(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}