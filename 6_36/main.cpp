#include <stdio.h>

// 遞迴函式：從後往前輸出字串
void stringReverse(const char* str) {
    if (*str == '\0') {
        return; // 遇到字串結尾時停止遞迴
    }
    stringReverse(str + 1); // 遞迴處理下一個字元
    putchar(*str);          // 從遞迴回溯時輸出當前字元
}

int main() {
    char str[100];

    printf("請輸入字串: ");
    fgets(str, sizeof(str), stdin); // 輸入字串，包含空格
    printf("反向輸出: ");
    stringReverse(str);
    printf("\n");

    return 0;
}
