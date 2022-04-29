#include<iostream>
using namespace std; //Remove all the duplicates
string removeduplicates(string s){   // https://raw.githubusercontent.com/Anshik-Singh/extra/main/images/20220327_212106.jpg
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string answer = removeduplicates(s.substr(1));
    if (ch==answer[0]){
        return answer;
    }
    return (ch +answer);
}
int main(){
      cout<<removeduplicates("aaaaaaaaabbbbbbeeeeeeeecccccccccccdddddddd");
      
}