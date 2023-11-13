#include<iostream>
using namespace std;
int inc(int* p) {
    *p = *p +1 ;
    return *p;
}

void per(int* p, int* s) {
    int* q;
    q=p;
    p=s;
    s=q;
    cout<<"la valeur pointée par p est "<<*p<<"et la valeur pointée par s est "<<*s<<endl;

}

int main() {
    int a=1, b=2;
    int* p;
    p=&a;
    inc(p);
    cout<<*p<<endl;
    int* s=&b;
    per(p,s);
    return 0;
}