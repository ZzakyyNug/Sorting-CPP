#include <iostream>
#include <conio.h>

using namespace std;

void sort_ascd(char arr[], int length)
{
    bool not_sorted = true;
    int j = 0;
    char tmp;

    while (not_sorted)
    {
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

void sort_desc(char arr[], int length)
{
    int i, j;
    char tmp;

    for (i = 1; i < length; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] < arr[j])
        {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

void printArray(char arr[], int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

int main()
{
    int n;

    cout << "Input (n) = ";
    cin >> n;
    cout << endl;

    char *data = new char[n];

    for (int a = 0; a < n; a++)
    {
        cout << "Karakter ke-" << a + 1 << ": ";
        cin >> data[a];
    }

    cout << "Urutkan karakter sebelum sorting :" << endl;
    printArray(data, n);

    cout << "Urutkan karakter setelah sorting ascending sort :" << endl;
    sort_ascd(data, n);
    printArray(data, n);

    cout << "Urutkan karakter setelah sorting descending sort :" << endl;
    sort_desc(data, n);
    printArray(data, n);

    delete[] data;

    getch();
    return 0;
}
