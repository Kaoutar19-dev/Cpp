#include<iostream>
using namespace std;
int main() {
    int* t;
    int i,a;
    cout<<"la taille est: ";
    cin>>a; 
    t = (int*)malloc(a*sizeof(int));
    for(i=0 ; i<a; i++) {
        cout<<"t["<<i<<"] = ";
        cin>>*(t+i);
    }
    int* p = new int[a];
    for(i=0 ; i<a ;i++ )
       *(p+i) = t[i] * t[i];
    delete t;
    for(i=0 ; i<a ;i++ )
    cout<<"p["<<i<<"] = "<<*(p+i)<<endl;
    delete p ;
    return 0;
}