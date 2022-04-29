#include <iostream>   // for note book practical watch right to left or vise versa in recursive tree you will see sorted array.
using namespace std;  
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int partition(int a[], int low, int high) // will divide into 2 partial sorted arrays joined by pivot element.
{
    int pivot = a[low]; // letting first element as fix position
    int i = low + 1;
    int temp;
    int j = high;
    while(i<j)
    {
        while (a[i] <= pivot)
        { // finding element greater than pivot.
            i++;
        }
        while (a[j] > pivot)
        { // finding element lesser than pivot.
            j--;
        }
        if (i < j)   // the above will reach to this if statment when there will be any voilation
        {            // voilation means swap.
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;   // j is the point at which the pivot has been settled at its original position. In future it will not change its position anymore.
}
void quicksort(int a[], int low, int high)
{
    int partitionindex;
    if (low < high)
    {

        partitionindex = partition(a, low, high);
        quicksort(a, low, partitionindex - 1);  // left subarray.
        quicksort(a, partitionindex + 1, high); // right subarray.
    }
}
int main()
{
    int a[] = {3, 2, 4, 6, 4, 93,5,8};
    int n = 8;
    printarray(a, n);
    quicksort(a, 0, n - 1);
    printarray(a, n);
}