#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//void menu()
//{
//	printf("-------------------\n");
//	printf("----- 1. play -----\n");
//	printf("----- 2. exit -----\n");
//	printf("-------------------\n");
//}


void Initialization(char arr[ROWS][COLUMNS], int rows, int columns, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < columns; j++)
		{
			arr[i][j] = set;
		}
	}
}

void Printmap(char arr[ROWS][COLUMNS], int row, int column)
{
	printf("扫雷\n");
	int i = 1;
	for (i = 0; i <=row; i++)
	{
		printf("%d ", i);
		/*int j = 0;
		for (j = 0; j <= column; j++)
		{
			printf("%d ", j);
		}*/
		
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		
		printf("%d ",i);
		
		int j = 0;
		for (j = 1; j <= column; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	

	
}


void Arrangement(char arr[ROWS][COLUMNS], int row, int column)
{
	int count = Gamedifficulty;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % column + 1;

		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}


}


int Statistics(char mine[ROWS][COLUMNS], int x, int y)
{
	return mine[x][y - 1] + mine[x][y + 1] + mine[x - 1][y] + mine[x + 1][y]
		+ mine[x - 1][y - 1] + mine[x + 1][y + 1] + mine[y + 1][x - 1] +
		mine[y - 1][x + 1] - 8 * '0';
}

void Troubleshooting(char mine[ROWS][COLUMNS], char show[ROWS][COLUMNS], int row, int column)
{
	int x = 0;
	int y = 0;
	int cut = 0;
	/*printf("Please input coordinates\n");
	scanf("%d%d", &x, &y);*/
	while(cut<row*column- Gamedifficulty)
	{
		printf("Please input coordinates>:\n");
		scanf("%d %d", &x, &y);
		if (x > 1 && x <= row || y > 1 && y <= column)
		{
			if (mine[x][y] == '1')
			{
				printf("Sorry,you are die\n");
				Printmap(mine, ROW, COLUMN);
				break;
			}
			else
			{
				//不是雷，就统计周围雷的个数
				int n = Statistics(mine, x, y);
				show[x][y] = n + '0';//返回的是整型
				Printmap(show, ROW, COLUMN);
				cut++;
			}
		}
		else
		{
			printf("Illegal coordinates please re-enter\n");
		}
	}
	if (cut == row * column - Gamedifficulty)
	{
		printf("Congratulations on your successful mine clearance\n");
		Printmap(mine, ROW, COLUMN);

	}
}



//void game()
//{
//	char arr1[ROWS][COLUMNS];
//	/*char arr2[ROWS][COLUMNS];*/
//	int i = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		int j = 0;
//		for (j = 0; j <COLUMN; j++)
//		{
//			arr1[i][j] = '*';
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		int j = 0;
//		for (j = 0; j < COLUMN; j++)
//		{
//			printf("%c ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	
//}