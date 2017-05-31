#include<iostream>
using namespace std;
int main(){
int N,m=0,M,k=0;
cout<<"Enter a number\n";
cin>>N;
M=N;
while (k<N){
   for(int i=M;i<=k;M--){
       cout<<"*";
       }
    for(int j=1;j<=k;j++){
       cout<<j;
       }
    cout<<""<<endl;
    k++;
 }
return 0;
}
     

