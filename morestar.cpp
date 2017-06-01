#include<iostream>
using namespace std;
int main(){
int N,k=0,m=0;
cout<<"Enter a Number"<<endl;
cin>>N;
while (k<=N) {
     for (int l=k;l<=(2*N-1);l++){
       cout<<"  ";
       }
     for (m=1;m<=(2*k-1);m++)
     { 
       cout<<"* ";
      }
     cout<<""<<endl;
     k++; 
}
return 0;
}
