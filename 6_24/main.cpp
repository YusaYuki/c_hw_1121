#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000 // �������Y����
#define SIDES 6     // ��l������

int main() {
    int sumCount[13] = { 0 }; // �ΨӰO���`�M2��12���X�{����
    int die1, die2, sum;

    // �]�w�H���ƥͦ��ؤl
    srand(time(0));

    // �������Y������l
    for (int i = 0; i < ROLLS; i++) {
        die1 = rand() % SIDES + 1; // ��l1�I��: 1��6
        die2 = rand() % SIDES + 1; // ��l2�I��: 1��6
        sum = die1 + die2;         // ����I���`�M
        sumCount[sum]++;          // �p���`�M���X�{����
    }

    // ��X���G
    printf("�I���`�M\t�X�{����\t�۹��W�v(%%)\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t\t%d\t\t%.2f%%\n", i, sumCount[i], (sumCount[i] / (float)ROLLS) * 100);
    }

    return 0;
}
