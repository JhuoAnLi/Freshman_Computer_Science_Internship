/*
 * Practice 13
 * Name: 李倬安
 * Student Number: 110403516
 * Course 2022-CE1003-A
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n, b;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> *(arr + i);
    }
    cin >> b;
    int *arr1 = new int[b];
    for (int i = 0; i < b; ++i)
    {
        cin >> *(arr1 + i);
    }
    int *arr2 = new int[n + b];
    for (int i = 0; i < n; ++i)
    {
        *(arr2 + i) = *(arr + i);
    }
    for (int i = 0; i < b; ++i)
    {
        *(arr2 + i + n) = *(arr1 + i);
    }
    for (int y = 0; y < n + b; y++)
    {
        for (int u = y + 1; u < n + b; u++)
        {
            if (*(arr2 + y) > *(arr2 + u))
            {
                int temp = *(arr2 + y);
                *(arr2 + y) = *(arr2 + u);
                *(arr2 + u) = temp;
            }
        }
    }
    for (int i = 0; i < n + b; ++i)
    {
        cout << *(arr2 + i) << " ";
    }
    cout << endl;
    return 0;
}