#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2};//Given array
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Number of times array should be repeated: ";
    cin >> k;
    int new_size = arr_size * k; 
    int new_arr[new_size];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < arr_size; j++)
        {
            new_arr[i * arr_size + j] = arr[j];
        }
    }
    for (int i = 0; i < new_size; i++)
    {
        cout << new_arr[i] << " ";
    }
    return 0;
}
