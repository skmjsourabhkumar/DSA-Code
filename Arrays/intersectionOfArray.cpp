#include<iostream>
#include<vector>
using namespace std;
int main(){
    // T.C=O(n^2)
    // S.C=O(n)
    int arr[5]={2,3,4,5,4};
    int brr[4]={7,3,4,9};
    vector<int>ans;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[i]==brr[j]){
                ans.push_back(arr[i]);
                brr[j]=-1;
            }
        }
    }
    for(auto val:ans){
        cout<<val<<" ";
    }
}