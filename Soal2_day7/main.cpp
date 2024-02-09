#include <iostream>

using namespace std;

void printArray(string arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sort(string arr[], int length) {
    bool not_sorted = true;
    int j = 0;
    string tmp;

    while (not_sorted) {
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }
        }
    }
}

int main() {
    int a = 10;
    string arr[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    cout << "Nama sebelum di sorting :" << endl;
    printArray(arr, a);

    cout << "Nama setelah di sorting :" << endl;
    bubble_sort(arr, a);
    printArray(arr, a);

    return 0;
}
