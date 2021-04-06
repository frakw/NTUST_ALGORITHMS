//// q1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
////
//
//#include <iostream>
//#include<vector>
//#include<time.h>
//using namespace std;
//int HoarePartition(int a[], int p, int r) {
//    int x = a[p], i = p - 1, j = r;
//    while (1) {
//        do  j--; while (a[j] > x);
//        do  i++; while (a[i] < x);
//        if (i < j) {
//            int temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//        }
//        else
//            return j + 1;
//    }
//}
//
//void QuickSort(int a[], int start, int end) {
//    int q;
//    if (end - start < 2) return;
//    q = HoarePartition(a, start, end);
//    QuickSort(a, start, q);
//    QuickSort(a, q, end);
//}
//int main()
//{
//    int data[100000];
//    int input;
//    int input_num = 0;
//    while (cin >> input)
//    {
//        data[input_num++] = input;
//    }
//    time_t start, end;
//    start = clock();
//    QuickSort(data, 0, input_num);
//    end = clock() - start;
//    cout << "cost:" << end << "ms" << endl;
//}