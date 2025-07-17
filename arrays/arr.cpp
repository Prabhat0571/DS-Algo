#include<iostream>
#include<vector>

using namespace std;

int MyX(int *E, unsigned int size) 
{ 
   int Y = 0; 
   int Z; 
   int i, j, k; 

   for(i = 0; i< size; i++) 
          Y = Y + E[i]; 
          
    for(i=0; i < size; i++){ 
        for(j = i; j < size; j++)
        {
            Z = 0; 
            for(k = i; k <= j; k++) 
               Z = Z + E[k];
            if(Z > Y) 
               Y = Z; 
        } }
   return Y;  
} 

int main(){

   int E[] ={1,2,3,4,5,6};
   unsigned int size =6;
   cout<< MyX(E,size );
   
} 