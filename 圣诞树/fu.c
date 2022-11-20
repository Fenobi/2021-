#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    int i, j, x;
    int n = 0;
    // a是间隔填充物，这里用空白填充；b是雪花，这里用*表示；c是圣诞树的填充，用'0'表示 
    char a = ' ', b = '*', c = '0';
    // 第一部分，输出树叶
    for (x = 0; x < 3; x++) {
        // 想让圣诞树变高可以将4这个值调高 
        for (i = 0; i < x + 4; i++) {
            for (j = 0; j < 80; j++) {
                if ((j <= 25 + n) && (j >= 25 - n)) {
                    printf("%c", c);
                }
                else if ((j % (n + 6) == n) && ((j > 25 + n) || (j < 25 - n))) {
                    printf("%c", b);
                }
                else {
                    printf("%c", a);
                }
            }
            printf("\n");
            n = n + 2;
        }
        n = n - 2 * (x + 2);
    }
    // 第二部分，输出树干，高度为5 
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 80; j++) {
            if (j >= 22 && j <= 28) {
                printf("%c", c);
            }
            else if ((j % (n + 6) == n) && ((j > 25 + n) || (j < 25 - n))) {
                printf("%c", b);
            }
            else {
                printf("%c", a);
            }
        }
        n = n + 2;
        printf("\n");
    }
    // 第三部分，输出地面，高度为3 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 80; j++) {
            if (j % 2 == 0) {
                printf("%c", b);
            }
            else {
                printf("%c", a);
            }

        }
        printf("小付\n");
    }
    return 0;
}
