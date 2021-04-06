// q1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<vector>
#include<time.h>
#include<fstream>
using namespace std;

void InsertionSort(int* arr, int start, int end) {

    for (int i = start + 1; i < end + 1; i++) {
        int key = arr[i];
        int j = i - 1;
        while (key < arr[j] && j >= start) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int Partition(int* arr, int front, int end) {
    int pivot = arr[end];
    int i = front - 1;
    for (int j = front; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;
    return i;
}
void sort3(int* arr, int left, int right) {
    int mid = (left + right) / 2;
    if (arr[right] < arr[left]) {
        int temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
    }
    if (arr[mid] < arr[left]) {
        int temp = arr[mid];
        arr[mid] = arr[left];
        arr[left] = temp;
    }
    if (arr[right] < arr[mid]) {
        int temp = arr[right];
        arr[right] = arr[mid];
        arr[mid] = temp;
    }
}
int MEDIAN3PARTITION(int* A, int p, int r) {
    if (r - p + 1 >= 3) {
        sort3(A, p, r);
        int temp = A[(p + r) / 2];
        A[(p + r) / 2] = A[r];
        A[r] = temp;
        return Partition(A, p, r);
    }
}

void QuickSort(int a[], int p, int r, int M) {
    if (r - p + 1 >= M) {
        int q;
        q = MEDIAN3PARTITION(a, p, r);
        QuickSort(a, p, q - 1, M);
        QuickSort(a, q + 1, r, M);
    }
    else {
        InsertionSort(a, p, r);
    }
}



int main()
{
    fstream file;
    file.open("text.csv", ios::out);

    int input_num = 100000;
    int* data = new int[input_num];
    int* data1 = new int[input_num];
    for (int i = 0; i < input_num; i++)
        cin >> data[i];

    file << "M" << ',' << "Time" << endl;
    time_t start, end;
    for (int i = 5; i < 2000; i++) {
        for (int j = 0; j < 100000; j++) {
            data1[j] = data[j];
        }
        start = clock();
        QuickSort(data1, 0, 100000, i);
        end = clock() - start;
        file << i << ',' << end << endl;
    }
}

