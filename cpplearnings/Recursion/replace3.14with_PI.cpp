
#include <iostream>

using namespace std;
void replacer(string a){
    if(a.length()==0){
        return;
    }
    if(a[0]=='p' && a[1]=='i'){
        cout<<3.14;
        replacer(a.substr(2));
    }
    else{
        cout<<a[0];
        replacer(a.substr(1));
    }
}

int main ()
{
  string a = "pipppippopi";
  replacer(a);

  return 0;
}