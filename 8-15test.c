#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("-----------------------\n");
	printf("------ 1.开始游戏------\n");
	printf("------ 0.退出游戏------\n");
	printf("-----------------------\n");
}

void game()
{
	char mine[rows][cols];
	char show[rows][cols];
	//初始化
	Init(mine,rows,cols,'0');
	Init(show,rows,cols,'*');
	//打印棋盘
	//Print(mine, rows, cols);
	Print(show, row, col);
	//布置雷
	Set(mine, row, col);
	/*Print(mine, row, col);*/
	//排查雷
	find(mine,show, row, col);
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);

		switch (input)
		{
		case play:
			game();
			break;
		case exit:
			break;
		default:
			printf("输入错误,重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
