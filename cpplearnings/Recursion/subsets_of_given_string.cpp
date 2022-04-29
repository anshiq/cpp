#include<iostream>
using namespace std;
void subseq(string s,string answer){
    if (s.length()==0){
        cout<<answer<<endl;
        return ;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,answer);
    subseq(ros,answer+ch);
}
int main(){
    subseq("abc","");  
    cout<<endl;

}