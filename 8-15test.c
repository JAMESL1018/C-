#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("-----------------------\n");
	printf("------ 1.��ʼ��Ϸ------\n");
	printf("------ 0.�˳���Ϸ------\n");
	printf("-----------------------\n");
}

void game()
{
	char mine[rows][cols];
	char show[rows][cols];
	//��ʼ��
	Init(mine,rows,cols,'0');
	Init(show,rows,cols,'*');
	//��ӡ����
	//Print(mine, rows, cols);
	Print(show, row, col);
	//������
	Set(mine, row, col);
	/*Print(mine, row, col);*/
	//�Ų���
	find(mine,show, row, col);
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);

		switch (input)
		{
		case play:
			game();
			break;
		case exit:
			break;
		default:
			printf("�������,��������\n");
			break;
		}
	} while (input);
	return 0;
}
