#include <iostream>

using namespace std;

int main()
{
    int *array;
    int n = 10;

    array = (int *) malloc(n * sizeof(int));

    if(array == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1;
    }

    cout << "Initial memory address: " << (void*)array << endl;
    cout << "Initial memory end address: " << (void*)(array + n * sizeof(n) - 1) << endl;

    for(int i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }

    cout << "Initial array: ";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    n = n * 2;

    array = (int *) realloc(array, n * sizeof(int));

    if(array == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1;
    }

    cout << "After realloc memory address: " << (void*)array << endl;
    cout << "After realloc memory end address: " << (void*)(array + n * sizeof(n) - 1) << endl;

    for (int i = n / 2; i < n; i++)
    {
        array[i] = i + 1;
    }

    cout << "Resized array: ";

    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    free(array);

    return 0;
}
