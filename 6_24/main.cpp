#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000 // 模擬投擲次數
#define SIDES 6     // 骰子的面數

int main() {
    int sumCount[13] = { 0 }; // 用來記錄總和2到12的出現次數
    int die1, die2, sum;

    // 設定隨機數生成種子
    srand(time(0));

    // 模擬投擲兩顆骰子
    for (int i = 0; i < ROLLS; i++) {
        die1 = rand() % SIDES + 1; // 骰子1點數: 1到6
        die2 = rand() % SIDES + 1; // 骰子2點數: 1到6
        sum = die1 + die2;         // 兩骰點數總和
        sumCount[sum]++;          // 計算總和的出現次數
    }

    // 輸出結果
    printf("點數總和\t出現次數\t相對頻率(%%)\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t\t%d\t\t%.2f%%\n", i, sumCount[i], (sumCount[i] / (float)ROLLS) * 100);
    }

    return 0;
}
