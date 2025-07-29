#include<iostream>
using namespace std;

int main(){

    // for(int i=0; i<3; i++){

    //     cout<<endl<<"outer loop" <<i<<endl ;

    //     for(int j=0; j<3; j++){
    //         cout<<"inner loop "<<i<<endl;


    //     }
    // }
//har outerloop execution k liye har baar poora inner loop run hoga last m jo bracket milta h loop use execute karne chla jata hai 
//   int n;
//   cout<<"enter the table you want to print: ";
//   cin>>n;

//     for(int i=1; i<=100; i++){
//         cout<<n <<"x"<<i<<"="<<n*i<<endl; 
//     }  
 

// pattern bnane k liye rules: 

//1. find number of rows
//2. har row m ky hora h ??



 //square pattern
// for(int i=0; i<=3; i++){
//     for(int j=0; j<=3; j++){
//         cout<<"*";

//     }
//     cout<<endl;
// }


//rectangle pattern
// for(int i=0; i<3; i++){

//     for(int j=0; j<5; j++){
//         cout<<" * ";
//     }
//     cout<<endl;
// }


//hollow rectangle

// for(int i=0; i<5; i++){
//     for(int j=0; j<5; j++){
//         if(i==0|| i==4){
//             cout<<" * " ;
//         }
//         else{
//             if(j==0 || j==4){
//                 cout<<" * ";
//             }
//             else{
//                 cout<<"   ";
//             }
//         }
//     }
//     cout<<endl;
// }

//half-pyramids

// for(int row =0; row<5; row++ ){
//     for(int col= 0; col< row+1 ; col++){
//         cout<<" * ";
//     }
//     cout<<endl;
// }

//inverted half pyramid

// for(int row=0; row<5; row++){
//     for(int col=0; col<5-row ;col++){
//         cout<<"*";

//     }
//     cout<<endl;
// }

//numeric half pyramid
// int n; 
// cin>>n;

// for(int i=0; i<n; i++){
//     for(int j=0; j<i+1; j++){
//         cout<<j+1<<" ";
//     }
//     cout<<endl;
// }

//inverted numeric half pyramid

// for(int i=0; i<n; i++){
//     for(int j=0; j<n-i; j++){
//         cout<<j+1<<" ";
//     }
//     cout<<endl;
// }

// full pyramid
//   for(int row=0; row<n; row++){
//           //spaces
//         for(int col=0; col< n-row-1; col++){
//            cout<<" ";
//         }
//            //stars
//         for( int col=0; col<row+1; col++){
//             cout<<"* ";
//            }

//            cout<<endl; 

//    }
  

//inverted full pyramid:


//    for(int row=0; row<n; row++){
//           //spaces
//         for(int col=0; col< row; col++){
//            cout<<" ";
//         }
//            //stars
//         for( int col=0; col<n-row-1; col++){
//             cout<<"* ";
//            }

//            cout<<endl; 

//    }
  
 //hollow pyramid

//  for(int row=0; row<n; row++){
//    for(int col=0; col< n-row-1 ; col++){
//       cout<<" ";
//    }
//    for(int star=0; star<row+1; star++){
//       if(star==0||star==row){
//          cout<<"* ";
//       }
//       else{
//          cout<<"  ";
//       }
//    }
//    cout<<endl;
//  }

//inverted hollow pyramid


//  for(int row=0; row<n; row++){
//    for(int col=0; col< row ; col++){ //for spaces
//       cout<<" ";
//    }
//    for(int star=0; star<n-row; star++){ //for stars
//       if(star==0||star==n-row-1){
//          cout<<"* ";
//       }
//       else{
//          cout<<"  ";
//       }
//    }
//    cout<<endl;
//  }



// FLIPPED SOLID DIAMOND


int num=8;

int n=num/2;

for(int row=0; row<n ; row++ ){

   //inverted pyramid 1
    for(int col=0; col< n-row; col++){
      cout<<"* ";
    }

   //full space pyramid
      for(int space =0; space<2*row+1  ; space++){
         cout<<"  ";
      }

   //inverted pyramid 2
   for(int col=0; col< n-row; col++){
      cout<<"* ";
    }

    cout<<endl;
}
  

//part2
for(int row=0; row<n ; row++ ){

   //inverted pyramid 1
    for(int col=0; col< row+1; col++){
      cout<<"* ";
    }

   //full space pyramid
      for(int space =0; space<2*n-2*row-1  ; space++){
         cout<<"  ";
      }

   //inverted pyramid 2
   for(int col=0; col< row+1 ; col++){
      cout<<"* ";
    }

    cout<<endl;
}

//THE END
   




  }



