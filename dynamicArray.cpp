#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // A Varibale pointer
    int *x = new int;       // A pointer to an int
    int *xarr = new int(6); // A pointer to an int and value is assigned 6
    cout << *xarr << "\n";
    int *xarrr = new int(); // A pointer to an int and value of assigned 0

    // 1D array
    int *arr = new int[5]; // dynamically allocate memory of size 5. And arr is pointing first element
    for (int i = 0; i < 5; i++)
        cout << *arr << " "; //Output will some random values

    cout << "\n";

    int *arrr = new int[5](); // dynamically allocate memory of size 5. And arr is pointing first element
    for (int i = 0; i < 5; i++)
        cout << *arrr << " "; //Output will 0 of all elements
    cout << "\n";
    //2D array using single pointer

    //Let size of row is m and size of col n
    int m = 4, n = 3;
    int *arrtwo = new int[m * n]; // If we write int[m*n](); then all values assign with 0
    // For input taking --->
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> *(arrtwo + i * n + j);
    }
    // For Output Printing --->
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << *(arrtwo + i * n + j) << " ";
        cout << "\n";
    }
    delete[] arrtwo; // Delete Allocated size

    // 2D Array using array of pointer
    // dynamically create array of pointers of size M
    // M is Row and N is col
    int M = 5, N = 4;
    int **Arr = new int *[M];
    for (int i = 0; i < M; i++)
        Arr[i] = new int[N]; // Allocating Dynamic memory to each Array pointers
        
    delete [] Arr;
    return 0;
}
