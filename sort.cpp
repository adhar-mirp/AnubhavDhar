#include<iostream>
using namespace std;
int main(){
int N,k;
cout<<"Enter how many numbers do you want to sort."<<endl;
cin>>N;
int arr[N],temp;
for (int i=0;i<=(N-1);i++){
   cout<<"Give your entry number "<<(i+1)<<endl;
   cin>>arr[i];
   }
cout<<"sorted !"<<endl;
 for (int j=0;j<=(N-1);j++){
   for (int k=0;k<=(N-1);k++){
     if ((j<k)&&(arr[k]<arr[j])){
      temp=arr[j];
      arr[j]=arr[k];
      arr[k]=temp;
      }
     }
   }
for (int m=0;m<=(N-1);m++){
  cout<<arr[m]<<endl;
  }
return 0;
}
