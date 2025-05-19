#include<iostream>
using namespace std;

int main(){

    int arr[3][3]={    //declartion and initialistion
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
     
     int target=70;
     int row=3;
     int col=3;

     for(int i=0; i<row; i++){  //nested for loops for printing or accessing elements
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                return true;
           }  
        }     
     }
     
    
}