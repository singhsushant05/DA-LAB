#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int arr1[] = { 4, 2, 6, 9, 2 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    quickSort(arr1, 0, n1 - 1);
    printArray(arr1, n1);
    return 0;
}
