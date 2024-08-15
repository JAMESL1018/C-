#pragma once
#include<stdio.h>
//#define easy 10
enum
{
	exit,
	play,
	row = 9,
	col = 9,
	easy = 10,
	rows = row+2,
	cols = col+2,
};

void Init(char map[rows][cols], int rows, int cols, char ret);

void Print(char map[rows][cols],int row, int cols);

void Set(char map[rows][cols], int row,int col);

void find(char mine[rows][cols],char show[rows][cols],int row,int col);

