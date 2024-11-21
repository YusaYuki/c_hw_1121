#include <stdio.h>

int recursiveBinarySearch(int array[], int start, int end, int key) {
    if (start > end) {
        return -1; // �j�M�d��L�ġA��ܧ䤣��
    }

    int mid = (start + end) / 2;

    if (array[mid] == key) {
        return mid; // ���ؼЭȡA�^�ǯ���
    }
    else if (array[mid] > key) {
        return recursiveBinarySearch(array, start, mid - 1, key); // �b���b���~��j�M
    }
    else {
        return recursiveBinarySearch(array, mid + 1, end, key); // �b�k�b���~��j�M
    }
}

int main() {
    int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; // �ƧǦn����ư}�C
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    printf("��J�n�j�M����: ");
    scanf_s("%d", &key);

    int result = recursiveBinarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("��� %d�A���ެ� %d�C\n", key, result);
    }
    else {
        printf("����� %d�C\n", key);
    }

    return 0;
}
