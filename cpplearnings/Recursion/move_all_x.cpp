#include<iostream>
using namespace std;
string move_all_x(string s){   //move all x at the end of the string
    if (s.length()==0){
        return "";
    }
    char ch=s[0];
    string answer = move_all_x(s.substr(1));
    if (ch=='x'){
        return answer+ch;
    }
    return ch +answer;
}
int main(){
      cout<<move_all_x("axxxdfkjshrfxxjfdk");
}