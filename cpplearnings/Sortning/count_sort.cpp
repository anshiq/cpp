#include<iostream>
using namespace std;
void printarray(int arr[],int n){
      for (int i=0;i<n;i++){
            cout<<arr[i]<<" ";
      }
}
int maxi(int arr[],int n){
      int p=0;
      for(int i=0;i<n;i++){
            if(arr[i]>p){
                  p=arr[i];
            }
      }
      return p;
}
void countsort(int arr[],int n){
    int maxa = maxi(arr,n);
    int temp[maxa];
    for(int i=0 ;i<=maxa;i++){
          temp[i]=0;   // asigning every element of temp array = 0;
    }
    for(int i=0;i<n;i++){
         ++temp[arr[i]];
    } 
    int i=0; int j=0;
    while(i<=maxa){
          if(temp[i]>0){   // means if any element is present on the index or not.
                arr[j]=i;  // assing the index of temp array to the real ones.
                temp[i]=temp[i]-1;  // means one value is assigned and increase the position of j by one 
                j++;                // and decrease the value of that index by one ( value of index means total no. of elements present)
          }    
          else{
                i++;
          }

    }
    
}

int main(){
      int arr[]= {1,9,4,6,2,8,1,9,9,0,2,2,2};
      int n = 13;
     
     countsort(arr,n);
     for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
     }
   
      
}