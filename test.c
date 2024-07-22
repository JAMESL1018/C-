#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("-------------------\n");
	printf("----- 1. play -----\n");
	printf("----- 2. exit -----\n");
	printf("-------------------\n");
}

void game()
{
	char mine[ROWS][COLUMNS];
	char show[ROWS][COLUMNS];
	//初始化地图
	Initialization(mine, ROWS,COLUMNS,'0');
	Initialization(show, ROWS,COLUMNS,'*');
	//打印地图
	Printmap(show, ROW, COLUMN);
	/*Printmap(mine, ROW, COLUMN);*/
	//布置雷
	Arrangement(mine, ROW, COLUMN);
	//排查雷
	Troubleshooting(mine, show, ROW, COLUMN);





}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please input>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("Typing error please try again\n");
			break;
		}

	} while (input);
		return 0;
}