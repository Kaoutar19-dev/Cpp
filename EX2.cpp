#include<iostream>
using namespace std;
int mdeux(int x) {
    if(x%2 == 0)
    cout<<"il est pair"<<endl;
    return 1;
}

int mtrois(int x) {
    if(x%3 == 0)
    cout<<"il est multiple de 3"<<endl;
    if(x%6 == 0)
    cout<<"il est divisible par 6"<<endl;
    return 1;
} 

int main() {
    int x;
    cin>>x;
    mdeux(x);
    mtrois(x);
    return 0;
}