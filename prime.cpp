#include<iostream>
using namespace std;
int main(){
int n,isprime=1;
cout<<"Enter a number"<<endl;
cin>>n;
if (n==2) cout<<"prime\n";
else if(n==1) cout<<"not prime\n";
else{
for (int i=2;i<=(n-1);i++){
     if(n%i==0)
         isprime=0;
   }
}
if (isprime==0) cout<<"not prime\n";
else cout<<"prime\n";
return 0;
}
