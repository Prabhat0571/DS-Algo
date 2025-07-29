#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int findLength(char ch[]){
    int length= 0;

    while(ch[length]!= '\0'){
        length++;
    }
    return length;
}

void reverseArr(char ch[]){
    int i=0;
    int j= strlen(ch)-1;

    while(i<j){
        swap(ch[i], ch[j]);
        i++;
        j--;
    }

}

int main(){
    
    char ch[10];
   
    cout<<"give input for the name: ";
    cin>>ch;
     // we dont need for loops for interacting with the character arrays just like normal arrays we can appli cin cout direct
     //null character marks the termination of string 
    // cout<<"the given name is: "<<ch<<endl;
    // cout<<"the length of the ch is: "<<findLength(ch);
    reverseArr(ch);
      cout <<"reverse : "<< ch;
    //our cin only reads inputs until spaces, enter, tabs etc so we use cin.getline()
    //cin.getline(ch, 100);




}