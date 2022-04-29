#include<iostream>
using namespace std;
bool issafe(int** arr,int x,int y,int n){  // when we will asign queen at any position we will asign there 1 boolin value indicating  presence of queen 
    for(int row=0;row<n;row++){                  
        if(arr[row][y]==1){   // checking rows if any queen already is present 
            return false;     // if present in any of row it will give value 1 at any place.
        }
    }
    int row =x; //checking the diagonals for the new future queen placed 
    int col =y; //  checking this at x , y possition
    while (row>=0 && col>=0)
    {
        if(arr[row][col]==1){  // checking diagonal at left and up both from given position.
            return false;
        }
        row--;    col--;
    }
     while (row>=0 && col<n)
    {
        if(arr[row][col]==1){  // checking diagonal at right and up both from given position.
            return false;      // https://raw.githubusercontent.com/Anshik-Singh/extra/main/images/Screenshot_20220403-193424_YouTube.jpg
        }
        row--;    col++;
    }

       return true;

}

    bool queen(int** arr, int x, int n){   // column are changing every one placement so no need to be given in function
           if(x>=n){
               return true;
           }

            for(int col=0;col<n;col++){
                if(issafe(arr,x,col,n)){
                    arr[x][col]=1;  // x, col   is the position where queen is placed.
                    if(queen(arr,x+1,n)){  // checking future steps, to build the path 
                        return true;       // connecting dots, your hardwork is visible when you see backward. 
                    }
                    arr[x][col]=0;   //backtrack   // this will exicute when above conndition did not met (no future of path is visible)
                }
            }
            return false;    // this tell the future step to be false or true

    }

int main(){
      int n;
      cin>>n;
      int** arr=new int*[n];
      for(int i=0;i<n;i++){
          arr[i]=new int[n];
          for(int j=0;j<n;j++){    // assigning everyplace 0 value
              arr[i][j]=0;
          }
      }

      if(queen(arr,0,n)){
          for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                  cout<<arr[i][j]<<" ";
              }  cout<<endl;
          }
      }
}