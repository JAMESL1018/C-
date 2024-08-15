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
	printf("-----ɨ����Ϸ-----\n");
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
	//���
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
	//'1'-'0'= 1;'2'-'0 = 2�Դ�����'
}
void find(char mine[rows][cols],char show[rows][cols], int row, int col)
{
	
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win < row * col - easy)
	{
		printf("��������Ҫ�Ų������:");
		scanf("%d %d", &x, &y);
		if (x>0&&x <= row &&y>0&&y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("��Ϸ�������㱻ը����\n");
				Print(mine, row, col);
				break;
			}
			else
			{
				int count = getcount(mine, x, y);//��ȡ������Χ�׵���Ϣ
				show[x][y] = count + '0';
				Print(show, row, col);
				win++;
			}
		}
		else
		{
			printf("�������\n");
		}
	}
	if (win == row * col - easy)
	{
		printf("��ϲ�㣬ʤ����\n");
		Print(mine, row, col);

	}
}
