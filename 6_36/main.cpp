#include <stdio.h>

// ���j�禡�G�q�᩹�e��X�r��
void stringReverse(const char* str) {
    if (*str == '\0') {
        return; // �J��r�굲���ɰ���j
    }
    stringReverse(str + 1); // ���j�B�z�U�@�Ӧr��
    putchar(*str);          // �q���j�^���ɿ�X��e�r��
}

int main() {
    char str[100];

    printf("�п�J�r��: ");
    fgets(str, sizeof(str), stdin); // ��J�r��A�]�t�Ů�
    printf("�ϦV��X: ");
    stringReverse(str);
    printf("\n");

    return 0;
}
