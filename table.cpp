#include<iostream>
using namespace std;
int main(){
int N,k=1,m=1;
cout<<"Enter a number\n";
cin>>N;
while (k<=N){
        m=1;
    while (m<=N){
        cout<<(m*k)<<" ";
        m++;
   }
   k++;
   cout<<"\n";
}
return 0;
}

