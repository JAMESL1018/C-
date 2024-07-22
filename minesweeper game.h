#pragma once
#define ROW 9
#define COLUMN 9
#define ROWS ROW+2
#define COLUMNS COLUMN+2
#define Gamedifficulty 10
#include <stdio.h>
#include<time.h>
#include<stdlib.h>


void Initialization(char arr[ROWS][COLUMNS], int rows, int columns, char ret);

void Printmap(char arr[ROWS][COLUMNS],int row , int column);

//void menu();
void Arrangement(char arr[ROWS][COLUMNS], int rows, int columns);

void Troubleshooting(char mine[ROWS][COLUMNS], char show[ROWS][COLUMNS], int row, int column);

