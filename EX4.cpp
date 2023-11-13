#include<iostream>
#include<set>
using namespace std;

set<int> create() {
    set<int> a;
    for(int i=1; i<=100; i++)
    a.insert(i);
    return a;
}  
bool serch(set<int> const& s, int v) {
    return s.find(v) != s.end();
}

