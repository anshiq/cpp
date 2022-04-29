#include<iostream>
using namespace std;
void print(int a[],int length){
    for(int i=0;i<length;i++){
        cout<<a[i]<<" ";
    } cout<<endl;
}
void merge(int arr[],int mid,int low,int high){
    int i,j,k; int b[100];
    i = low; j=mid +1; k= low;
    while (i<=mid && j<=high)
    {
        if(arr[i]<arr[j]){
            b[k]=arr[i]; 
            i++; k++;
        }
        else{
            b[k]=arr[j];
            j++; k++;
        }
    }
    while(i<=mid){
        b[k]=arr[i]; 
        i++; k++;
    }
    while(j<=high){
        b[k]=arr[j];
        j++; k++;
    }
    for (size_t i = 0; i <=high; i++)
    {
       arr[i]=b[i];
    }
    

     }
    void mergesort(int a[],int low, int high){
        int mid;
        if(low<high){
            mid=(low+high)/2;
            mergesort(a,low,mid);
            mergesort(a,mid+1,high);
            merge(a,mid,low,high);

        }
    }
    

int main(){
      int arr[]={9,1,4,14,4,15,6};
      int n=7;
      print(arr,n);
      mergesort(arr,0,6);
      print(arr,n);
}