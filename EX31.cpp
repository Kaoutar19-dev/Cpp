#include<iostream>
using namespace std;
int main() {
    int max, min, t[10];
    for(int i=0; i<10 ;i++){
      cout<<"t["<<i<<"] = ";
      cin>>t[i];}
      max = min = t[0];
    for(int i=0; i<10; i++) {
        if(t[i]>max)
          max = t[i];
        if(t[i]<min)
          min = t[i];
    }
    cout<<"max = "<<max<<" et min = "<<min<<endl;
    return 0;
   
    
}