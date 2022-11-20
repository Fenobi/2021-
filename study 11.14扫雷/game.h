#pragma once
#include<stdio.h>
#include<time.h>
#include<Windows.h>

#define ROW 9//打印出来的棋盘大小
#define COL 9//打印出来的棋盘大小

#define ROWS ROW+2//实际棋盘大小，为了防止越界
#define COLS COL+2//实际棋盘大小，为了防止越界

#define EASY_COUNT 10//简单模式10个雷然后根据自己的需要调整大小

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char mine[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);
//找雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);