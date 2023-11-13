#include<iostream>
using namespace std;
int main() {
    int t[10], i, j,temp;
    for(i=0; i<10; i++){
        cout<<"t["<<i<<"] = ";
        cin>>t[i];
}
    for(i=0; i<10-1; i++){
        for(j=0; j<10-i-1; j++)
            if(t[j]>t[j+1]){
              temp = t[j];
              t[j]=t[j+1];
              temp = t[j+1];
            }

        
    }
    for(i=0; i<10; i++)
    cout<<"t["<<i<<"] = "<<t[i]<<"\t";
    }
   