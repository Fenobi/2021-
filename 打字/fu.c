#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#define TIME 500 
int main()
{
    int i = 0;
    char str[] = "ÄãºÃ£¡ÖÐ¹ú¡£";
    for (i = 0; str[i]; i++) {
        printf("%c", str[i]);
        Sleep(TIME);
    }
    return 0;
}