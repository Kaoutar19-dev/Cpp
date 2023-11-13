#include<iostream>
using namespace std;
int main() {
    int a;
    int* p_a;
    int &ref_a = a;
    cout<<"a = ";
    cin>>a;
    p_a = &a;
    cout<<"valeur de a : "<<a<<endl;
    cout<<"valeur de p_a : "<<p_a<<endl;
    cout<<"valeur de ref_a : "<<ref_a<<endl;
    cout<<"adress de a: "<<&a<<endl;
    cout<<"adress de p_a: "<<&p_a<<endl;
    cout<<"adress de ref_a: "<<&ref_a<<endl;
    cout<<"la valeur pointée : "<<p_a<<endl;
    return 0;
}
