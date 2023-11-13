#include<iostream>
using namespace std;
int cmpt = 0;
void display() {
    cmpt++;
    cout<<"appel numéro "<<cmpt<<endl;
}
int main() {
    display();
    display();
    display();
    display();
    display();
}