 #include<iostream>
 using namespace std;
   string jawaab(string s, string part) {
        int pos=s.find(part);
        while(pos!=string::npos){
            s.erase(pos,part.length());
            pos=s.find(part);
        }

        return s;
    }
 int main(){

    string s;
    string part;
  cin>>s>>part;
  cout<<"answer is: "<<jawaab(s,part);


 }