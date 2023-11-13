#include<iostream>
using namespace std;
int inc(int &ref) {
    ref = ref +1 ;
    return ref;
}

void per(int &ref, int &refe) {
    int q;
    q=ref;
    ref=refe;
    refe=q;
    cout<<"la valeur pointée par p est "<<ref<<"et la valeur pointée par s est "<<refe<<endl;

}

int main() {
    int a=1, b=2;
    int &ref = a;
   
    inc(ref);
    cout<<ref<<endl;
    int &refe=b;
    per(ref,refe);
    return 0;
}