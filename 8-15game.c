#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Init(char map[rows][cols], int  rows, int cols, char ret)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			map[i][j] = ret;
		}
	}
}


void Print(char map[rows][cols], int row, int col)
{
	printf("-----扫雷游戏-----\n");
	int i = 0;
	for (int i = 0; i <= row; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", map[i][j]);
		}
		
		printf("\n");
	}
}


void Set(char map[rows][cols], int row, int col)
{
	//随机
	int count = easy;
	while (count)
	{
		int x = rand() % row+1;
		int y = rand() % col+1;

		if (map[x][y] == '0')
		{
			map[x][y] = '1';
			count--;
		}
	}
}

int getcount(char mine[rows][cols], int x,int y)
{
	return (mine[x][y + 1] + mine[x][y - 1] + mine[x + 1][y] + mine[x - 1][y] + mine[x + 1][y + 1] +
		mine[x - 1][y - 1] +mine[x - 1][y + 1] + mine[x + 1][y - 1] - 8 * '0');
	//'1'-'0'= 1;'2'-'0 = 2以此类推'
}
void find(char mine[rows][cols],char show[rows][cols], int row, int col)
{
	
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win < row * col - easy)
	{
		printf("请输入你要排查的坐标:");
		scanf("%d %d", &x, &y);
		if (x>0&&x <= row &&y>0&&y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("游戏结束，你被炸死了\n");
				Print(mine, row, col);
				break;
			}
			else
			{
				int count = getcount(mine, x, y);//获取坐标周围雷的信息
				show[x][y] = count + '0';
				Print(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入错误\n");
		}
	}
	if (win == row * col - easy)
	{
		printf("恭喜你，胜利了\n");
		Print(mine, row, col);

	}
}
