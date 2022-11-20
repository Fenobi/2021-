#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct Stu
//{
//	char name[20];//成员变量
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct Stu s = { "小付",19,100 };//结构体的创建和初始化
//	printf("%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//		printf("%d\n", b);
//	else
//		printf("%d\n", a);
//	
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int s = Max(a, b);
//	printf("%d\n", s);
//	return 0;
//}


//心形代码
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	printf("\n");
//	printf("\n");
//	printf("\n");
//	printf("\n");
//	printf("                       jhz,I love you!!!");
//	float y, x, z, f;
//	for (y = 1.5f; y > -1.5f; y -= 0.1f)
//	{
//		for (x = -1.5f; x < 1.5f; x += 0.05f)
//		{
//			z = x * x + y * y - 1;
//			f = z * z * z - x * x * y * y * y;
//			putchar(f <= 0.0f ? "*********"[(int)(f * -8.0f)] : ' ');
//		}
//		putchar('\n');
//	}
//
//	getchar();
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}