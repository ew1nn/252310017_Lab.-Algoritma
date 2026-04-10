#include <iostream>
using namespace std;

int partisi(int arr[], int kiri, int kanan) {
    int pivot = arr[kanan]; // pivot diambil dari elemen paling kanan
    int i = kiri - 1;

    for (int j = kiri; j < kanan; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[kanan]);
    return i + 1;
}

void quickSort(int arr[], int kiri, int kanan) {
    if (kiri < kanan) {
        int posPivot = partisi(arr, kiri, kanan);
        quickSort(arr, kiri, posPivot - 1);  // urutkan bagian kiri
        quickSort(arr, posPivot + 1, kanan); // urutkan bagian kanan
    }
}

int main() {
    int data_nisn[] = {105, 102, 108, 101, 109, 104, 107};
    int n = sizeof(data_nisn) / sizeof(data_nisn[0]);

    cout << "Data NISN sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << data_nisn[i];
        if (i < n - 1) cout << ", ";
    }
    cout << endl;

    quickSort(data_nisn, 0, n - 1);

    cout << "Data NISN setelah diurutkan : ";
    for (int i = 0; i < n; i++) {
        cout << data_nisn[i];
        if (i < n - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
