#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	sytstem("shutdown /s");
again:
	printf("你的电脑将在1分钟后关机，如果输入：我是xx，则取消关机\n请输入: ");
	scanf("%s", input);
	if (strcmp(input, "我是xx") == 0)
	{
		system("shutdown - a");
	}
	else
	{
		goto again;
	}
	return 0;
}
