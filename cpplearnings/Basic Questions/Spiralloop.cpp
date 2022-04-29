#include <iostream>
using namespace std;

int main(){
	int ro,co;
	cin>>ro>>co;
	int array[ro][co];
	for(int r=0;r<ro;r++){
		for(int c=0;c<co;c++){
			cin>>array[r][c]; 
		}
	}
       int rstart=0, rend=ro -1 , cstart=0 ,cend=co -1;
	   while(rstart<=rend && cstart<=cend){
		   for(int column=cstart ;column<=cend;column++){
			   cout<<array[rstart][column] <<" ";
		   }
		   rstart++;
		   for(int row= rstart;row<=rend ;row++){
			   cout<<array[row][cend]<<" ";

		   }
		   cend-- ;

		   for(int column=cend ;column>=cstart;column--){
			   cout<<array[rend][column] <<" ";
		   }
		   rend--;
		   for(int row= rend;row>=rstart;row--){
			   cout<<array[row][cstart]<<" ";

		   }
		   cstart++;

	   }

}


