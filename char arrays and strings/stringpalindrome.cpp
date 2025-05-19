#include<iostream>
#include<cstring>
using namespace std;

bool checkpalindrome(char word[100]){
    int i=0;
    int n= strlen(word);
    int j=n-1;

    while(i<=j){
        if(word[i]!=word[j]){
            return false;
        }
        else{
           i++;
           j--;
        }
        return true;
    }
}

// void uppercase(char word[100]){
//   int n=strlen(word);
//   for(int i=0; i<n; i++){
//     word[i]=word[i]-'a'+'A';
//   }
// }

int main(){

    char word[100]="prabhat";
    cout<<"enter the string: ";
    cin.getline(word,50);
    cout<<"palindrome check: "<<checkpalindrome(word)<<endl;
  


     
}