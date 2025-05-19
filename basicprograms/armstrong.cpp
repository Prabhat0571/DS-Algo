#include<iostream>
#include<math.h>
using namespace std;
bool isArmstrong(int num) {
    int x = num;
    int digits = 0;

    while (num != 0) {
        num = num/10;
        digits++;
    }

    num = x;

    int sum = 0;
    while (num != 0) {
        int rem = num % 10;
        int res = 1;

        for(int i=0 ; i<digits; i++){
            res *= rem;
        }

        sum+= res;
        
        num = num/10;
    }

    if(sum == x)
        return true;
    
   else{
    return false;
   }
}

int main(){
    int num;
 cout<<"enter the number: ";
 cin>>num;

 isArmstrong(num);
}