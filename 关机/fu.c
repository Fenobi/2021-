#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 30");
again:
	printf("电脑将在60s内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", &input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;       //goto语句，如果输入内容不是"我是猪"，程序跳转到again，继续提示用户输入"我是猪"
	}
	return 0;
}