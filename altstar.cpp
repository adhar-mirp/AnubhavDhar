#include<iostream>
using namespace std;
int main(){
int columns,rows;
cout<<"Enter the number of columns and rows respectively.\n";
cin>>columns;
cin>>rows;
for (int i=1;i<=rows;i++){
    for (int j=1;j<=columns;j++){
         if ((i+j)%2==0)
             cout<<"*";
         else
             cout<<" ";
          }
         cout<<""<<endl;
      }
return 0;
}
