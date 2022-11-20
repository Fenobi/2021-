#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置雷的信息 0无雷 1有雷
	char show[ROWS][COLS] = { 0 };//展示给用户看并且存放排查出的雷的信息

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//布置雷
	SetMine(mine, ROW, COL);
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//排雷
	FindMine(mine, show, ROW, COL);
}
//游戏菜单界面
void menu()
{
	printf("************\n");
	printf("***1.开始***\n");
	printf("***0.退出***\n");
	printf("************\n");
}
//选择玩或不玩
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择->;");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			//扫雷
			game();
			break;
		case 0:
			printf("%d\n", input);
			printf("即将退出游戏\n");
			break;
		default:
			printf("输入错误,请重新输入:\n");
			break;
		}
	} while (input);
}
int main(void)
{
	test();
	return 0;
}