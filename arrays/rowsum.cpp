#include<iostream>
using namespace std;
void printsumarr(int arr[][3], int rows, int cols){
//always leave the first array size empty while passing the array size in the functions

for(int i=0; i<rows; i++){
  int sum=0;
  for(int j=0; j<cols; j++){
    sum=sum+arr[i][j];
  }
  cout<<sum<<endl;
  }
}
int main(){

    int arr[3][3];

    int rows=3;
     int cols=3;
cout<<"give rowwise input: ";
     for(int i=0; i<rows; i++){
       for(int j=0; j<cols; j++){
        cin>>arr[i][j];
       }
     }

cout<<" printing rowwise array: ";
     for(int i=0; i<rows; i++){
       for(int j=0; j<cols; j++){
        cout<<arr[i][j]<<" ";
       }

       cout<<endl;
     }



     printsumarr(arr, rows ,cols);



return 0;

}