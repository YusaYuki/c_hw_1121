#include <stdio.h>

int recursiveBinarySearch(int array[], int start, int end, int key) {
    if (start > end) {
        return -1; // 搜尋範圍無效，表示找不到
    }

    int mid = (start + end) / 2;

    if (array[mid] == key) {
        return mid; // 找到目標值，回傳索引
    }
    else if (array[mid] > key) {
        return recursiveBinarySearch(array, start, mid - 1, key); // 在左半部繼續搜尋
    }
    else {
        return recursiveBinarySearch(array, mid + 1, end, key); // 在右半部繼續搜尋
    }
}

int main() {
    int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; // 排序好的整數陣列
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("輸入要搜尋的值: ");
    scanf_s("%d", &key);

    int result = recursiveBinarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("找到 %d，索引為 %d。\n", key, result);
    }
    else {
        printf("未找到 %d。\n", key);
    }

    return 0;
}
