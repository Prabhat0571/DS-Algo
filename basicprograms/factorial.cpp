#include<iostream>
using namespace std;
int factorial(int number){
    int num=1;
    for(int i=1; i<=number; i++){
      num=num*i;  
    }
    return num;


}
int main(){
    int number;
    cin>>number;
    int answer= factorial(number);
    cout<<"the factorial for the number is: "<<answer;
}