#include<iostream>
using namespace std;
int main()
{
// int arr[7];
// cout<<arr<<endl;
// cout<<&arr<<endl;
// int arr[53];
// char arr[106];
// bool arr[23];

// int arr[]={1,2,3,4,5};

// char brr[10]={'a','b','c'};  //always use single inverted commas while using characters in arrays



int arr[10];
cout<<"enter the values for array:  ";                               //taking input in array
for(int i=0; i<10; i++){                                
    cin>>arr[i];
}
//printing
for(int i=0; i<10; i++){

cout<<arr[i]<<" ";
}
}
