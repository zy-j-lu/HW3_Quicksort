#include<bits/stdc++.h>
using namespace std;

void quick_sort(int array[], int size){
    if(size <= 1)
        return;
    int pivot = array[0];
    int cursor1 = 1, cursor2 = size-1;
    while(cursor1 < cursor2){
        while(cursor2 > cursor1 && array[cursor2] > pivot)
            cursor2--;
        while(cursor1 < cursor2 && array[cursor1] < pivot)
            cursor1++;
        int temp = array[cursor1];
        array[cursor1] = array[cursor2];
        array[cursor2] = temp;
    }
    if(array[cursor1] > pivot)
        cursor1--;
    array[0] = array[cursor1];
    array[cursor1] = pivot;
    quick_sort(array, cursor1);
    quick_sort(array+cursor1+1, size-cursor1-1);
}

int main(){
    int array[15] = {33, 67, 8, 13, 54, 119, 3, 84, 25, 41};
    int n = 10;
    quick_sort(array, n);
    for(int i=0; i<n; i++)
        printf("%d ", array[i]);
    printf("\n");
}