#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;



//NUMBER PATTERN
// for(int row=0; row<n; row++){
//     for(int col=0; col<2*row+1; col++){
//         if(col%2!=0){
//             cout<<"*";
//         }
//         else{
//             cout<<row+1;
//         }
//     }
//     cout<<endl;

// }

//HOLLOW INVERTED TRIANGLE

for(int row=0; row<n; row++){

    for(int col=0; col< n-row ; col++){ //isme jo n-row likhte h wo hota h last column

        if(row==0 || row==n-1){
            cout<<"*"; 
        }

       else{
        if(col==0 || col==n-row-1){
          cout<<"*";
        }
        else{
            cout<<" ";
        }
       }
      

    }
    cout<<endl;
}





}