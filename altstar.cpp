#include<iostream>
using namespace std;
int main(){
int columns,rows;
int c,r;
cout<<"Enter the number of columns and rows respectively.\n";
cin>>columns;
cin>>rows;
c=columns/2;
r=rows/2;
if (c%1==0) {//the number is even
  if (r%1==0){
  for (int j=1;j<=r;j++){
     for (int i=1;i<=r;i++){
        cout<<"* ";
     }
     cout<<""<<endl;
      for (int i=1;i<=r;i++){
        cout<<" *";
     }
      
 cout<<""<<endl;  
    }
  }
  else{
   for (int j=1;j<=r;j++){
    for (int i=1;i<=(r+1);i++){
        cout<<"* ";
     }
     cout<<""<<endl;
      for (int i=1;i<=r;i++){
        cout<<" *";
     }
   }
   for (int j=1;j<=(r+1);j++){
  cout<<"* "
  }
return 0;
}
