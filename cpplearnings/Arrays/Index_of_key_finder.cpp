#include <iostream>
#include <climits>

using namespace std;

int search(int aray[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (aray[mid] == key)
        {
            return mid;
        }
        else if (aray[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int aray[n];
    for (int i = 0; i < n; i++)
    {
        cin >> aray[i];
    }
    int key;
    cin >> key;

    cout << search(aray, n, key);
    return 0;
}