#include<iostream>
using namespace std;
int main(){
   int arr[9]={1,2,2,3,4,4,3,5,5};
   int ans=0;
   for(int i=0;i<10;i++){
         ans=arr[i]^ans;
   }
   cout<<"Unique element is: "<<ans;
   return 0;
}