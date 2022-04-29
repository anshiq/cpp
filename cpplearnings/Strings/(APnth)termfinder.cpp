#include <bits/stdc++.h>

using namespace std;

int main()
{
      int a,b,d;
	  
	  cout<<"Input  First Term: ";
	  cin>>a;
	  cout<<"Input Commaon Difference note:  If you  have second term instead of difference press 0 ";
	  cin>>d;
	  cout<<"Input Second Term: ";
	   b=0;
	  cin>>b;
	  int n;
	  cout<<"Enter your wished nth term: ";
      cin>>n;

	  if(d==0){
		  d= b-a;
		  int k=(a+(n-1)*d);
		  cout<<"Your nth term is: "<<k;
	  }
	  else if(d!=0){
		  int k=(a+(n-1)*d);
		  cout<<"Your nth term is: "<<k;
	  }

	   
	   
	
	
}
