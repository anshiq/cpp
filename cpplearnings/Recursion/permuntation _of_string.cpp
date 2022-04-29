#include<iostream>
using namespace std;
void permutation(string s, string ans){       // explained https://raw.githubusercontent.com/Anshik-Singh/extra/main/images/Screenshot_20220328-211036_YouTube.jpg
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    for (int i=0;i<s.length();i++){
        char ch = s[i]; //fixed charactor
        string ros = s.substr(0,i) + s.substr(i+1);
                    // 0 to i -       | // gives string remaining 
                 // -length deleted   |  // after the fixed char ch
                // gives string before-|
                    // -ch fixed char. |
        permutation(ros,ans+ch);
    }
}
int main(){
      permutation("abc","");
}