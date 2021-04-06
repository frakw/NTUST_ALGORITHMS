//#include <iostream>
//#include <vector>
//using namespace std;
//
//void quicksort(int a[], int, int end);
//int partition(int a[], int front, int end);
//
//
//int main()
//{
//    int data[100001];
//    int input;
//    int input_num = 0;
//    while (cin >> input)
//    {
//        data[input_num++] = input;
//    }
//    time_t start, end;
//    start = clock();
//    quicksort(data, 0, input_num);
//    end = clock() - start;
//    cout << "cost:" << end << "ms" << endl;
//}
//
//void quicksort(int list[], int begin, int end) {
//    if (begin < end) {
//        int pivot = partition(list, begin, end);
//        quicksort(list, begin, pivot - 1);
//        quicksort(list, pivot + 1, end);
//    }
//}
//int partition(int list[], int front, int end) {
//    int pivot = list[end];
//    int count = front - 1;
//    for (int j = front; j < end; j++) {
//        if (list[j] < pivot) {
//            count++;
//            swap(list[count], list[j]);
//        }
//    }
//    count++;
//    swap(list[count], list[end]);
//    return count;
//}