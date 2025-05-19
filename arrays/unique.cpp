#include<iostream>
using namespace std;
int getunique(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];

    }
     return ans;
}

int main(){
    int arr[9]={2,10,11,10,2,13,15,13,15};
    for(auto i:arr){
        cout<<i<<" ";
    }
    
    // int size=9;
    // int finalans= getunique(arr,size);
    // cout<<"final answer is: "<<finalans<<endl;

}