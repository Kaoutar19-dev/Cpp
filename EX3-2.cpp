#include<iostream>
using namespace std;
int main(){
  int *p, max=0, min,i;
  p=(int*)malloc(10*sizeof(int));
  for(i=0;i<10;i++){
    cout<<"entrer la valeur de a["<<i+1<<"]"<<endl;
    cin>>*(p+i);
    min = *p;
    if(i>1 && *(p+i)<min)
      min = *(p+i);
    
    if(i>1 && *(p+i)>max)
      max = *(p+i);
   
    }
    cout<<"le plus grand nombre est "<<max<<" et le plus petit nombre est "<<min<<endl;
    return 0 ;
  }

