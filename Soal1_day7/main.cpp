#include <iostream>

using namespace std;
void printArray();

void selection_sort (float arr[], int length)
{
    int pos_min;
    float tmp;
        for (int i=0;i<length-1;i++) {
            pos_min=1;
                for(int j=i+1;j<length;j++) {
                    pos_min=j;
                }

            if (pos_min !=1) {
                tmp=arr[i];
                arr[i]=arr[pos_min];
                arr[pos_min]=tmp;
            }}
}
void printArray(float arr[], int length)
{
    for (int i=0; i <  length; i++)
        cout << arr[i]<<"\t";
    cout << ("\n");
}
int main()
{
    int a=5;
    float arr[]={3.8, 2.9, 3.3, 4.0, 2.4};

    cout << "IPS Mahasiswa sebelum diurutkan :";
    cout << "\n";
    printArray(arr,a);
    cout << "IPS Mahasiswa setelah diurutkan :";
    cout << "\n";
    selection_sort(arr,a);
    printArray(arr,a);

    return 0;
}
