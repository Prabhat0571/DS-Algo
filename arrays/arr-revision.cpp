#include<iostream>
using namespace std;
int main(){
    // int b =6;
    // cout<<"address of a is: "<<&b<<endl;
    // int arr[10]={ 10,20,30};
    // cout<<"size of arr: "<< sizeof(arr)<<endl ;
    // cout<<arr[4]<<endl;

    // int arr[12];
    // int n;

    // for(int i=0; i<n;i++){
    //     cout<<"input the number for the index: "<<i<<endl;
    //     cin>>arr[i];

        int arr[5];
        int size=5;
         int sum=0;

        for(int i=0; i<size; i++){
            cout<<"enter the value for the index: "<<i<<endl;
            cin>>arr[i];
            cout<<endl;

        }
        for(int i=0; i<size; i++){
            sum=sum+arr[i];
        }
        cout<<sum;

         


}