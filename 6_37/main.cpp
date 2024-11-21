#include <stdio.h>

// 定義遞歸函數
int recursiveMaximum(int arr[], int size) {
    // 基本情況：當陣列只有一個元素時，返回該元素
    if (size == 1) {
        return arr[0];
    }
    // 遞歸計算：比較當前元素與其餘陣列的最大值
    int max_of_rest = recursiveMaximum(arr, size - 1);
    return (arr[size - 1] > max_of_rest) ? arr[size - 1] : max_of_rest;
}

int main() {
    // 測試數據
    int arr[] = { 1, 9, 3, 7, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // 呼叫遞歸函數並輸出結果
    int max = recursiveMaximum(arr, size);
    printf("陣列中的最大值是: %d\n", max);

    return 0;
}
