#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int s = Max(a, b);
		printf("%d\n", s);
	return 0;
}

//int main()
//{
//	int age;
//	printf("请输入年龄：");
//	scanf("%d", &age);
//	if (age < 16)
//		printf("少年\n");
//	else if (16 <= age && age < 30)
//		printf("青年\n");
//	else if (30 <= age && age < 40)
//		printf("中年\n");
//	else if (40 <= age && age < 60)
//		printf("壮年\n");
//	else
//		printf("老年\n");
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//for (num = 1;num <= 100;num++)
//	while(num<=100)
//	{
//
//		if (num % 2 == 1)
//			printf("%d\n", num);
//		num++;
//
//	}
//	
//	return 0;
//}