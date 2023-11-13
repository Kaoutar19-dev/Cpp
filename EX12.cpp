#include<iostream>
using namespace std;
static int cmpt = 0;
class test {
    public :
   static int call() {
        cmpt++;
        return cmpt;
    }
};
int main() {
    test::call();
    test::call();
    test::call();
    test::call();
    test::call();
    test::call();
    cout<<cmpt<<endl;
    return 0;
}