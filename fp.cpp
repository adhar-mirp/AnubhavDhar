#include<iostream>
using namespace std;
int main(){
int n=50,x[5]={1,2,3,4,5};
for (int i=0;i<5;i++)
cout<<x[i]<<" ";

char name[50]="";

cout<<"enter name\n";
cin>>name;
for (int i=0;i<50;i++){
if (name[i]=='\0'){
n=i; break;}}
for (int i=0;i<=n;i++){
cout<<name[i];}
cout<<endl;
cout<<"length of name is "<<n<<" letters."<<endl;
return 0;
}

