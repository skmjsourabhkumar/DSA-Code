#include<iostream>
#include<vector>
using namespace std;
int main(){
    // This approach will take O(n) space complexity;
    // And O(n) Time complexity
    int arr[5]={1,2,3,4,5};
    int brr[5]={6,7,8,9,10};
       vector<int>ans;
       for(int i=0;i<5;i++){
        ans.push_back(arr[i]);
       }
       for(int i=0;i<5;i++){
        ans.push_back(brr[i]);
       }
       cout<<"Printing array After union"<<endl;
       for(auto val:ans){
        cout<<val<<" ";
       }

}