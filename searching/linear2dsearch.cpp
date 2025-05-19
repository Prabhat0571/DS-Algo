#include<iostream>
using namespace std;

void findkey(int arr[][3],int rows,int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key){
                cout<<"searched key element found";
            }
          }
        }
        cout<<" element you searched for was not found";
    }

int main(){

    int arr[3][3];
    int rows=3;
     int cols=3;
cout<<"give row-wise input: ";
     for(int i=0; i<rows; i++){
       for(int j=0; j<cols; j++){
        cin>>arr[i][j];
       }
     }

     cout<<"enter the element you want to search: ";
    int key;
    cin>>key;

cout<<" printing rowwise array: ";
     for(int i=0; i<rows; i++){
       for(int j=0; j<cols; j++){
        cout<<arr[i][j]<<" ";
       }

       cout<<endl;
     }

 findkey(arr,rows,cols,key);

return 0;

}