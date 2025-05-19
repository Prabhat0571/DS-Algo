#include<iostream>
#include<string.h>
using namespace std;

char upperCase(char ch[] , int n){

    int index =0;
    while(ch[index]!='\0'){
    char current= ch[index];

    if(current>='A' && current<='Z'){
        ch[index]=current-'A'+'a';
    }
    index++;
    
    
    }


}

int main(){

    char ch[100];
    cout<<" enter the string you want to convert to uppercase: "<<endl;
    cin.getline(ch , 100);
   int n = strlen(ch);
    upperCase(ch,n);

   cout<<" the uppercase string is: "<<ch<<endl;


  




}