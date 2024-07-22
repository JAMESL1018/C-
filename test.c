#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
menu() {
	printf("----------------------\n");
	printf("----- 1. play game----\n");
	printf("----- 0. exit game----\n");
	printf("----------------------\n");
}

game()
{
	//生成随机数1-100
	int number = 0;
	int count = 5;
	int ret = rand()%100+1;
	/*printf("please guess number>:");
	scanf("%d", &number);*/
	while (count--)
	{
		printf("please guess number>:");
		scanf("%d", &number);
		if (ret > number)
		{
			printf("guess small try again\n");
		}
		else if (ret < number)
		{
			printf("guess big try again\n");
		}
		else {
			printf("Congratulations ,you are right\n");
			break;
		}

		printf("you have %d more chance\n", count);
		if (count == 0)
		{
			printf(" You don't stand a chance ,game over\n");
		}
	}
	
}
int main()
{
	int intput = 0;
	srand((unsigned int)time(NULL));//随机值的初始化
	do
	{
		menu();

		scanf("%d", &intput);

		switch (intput)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("\nTyping error try again\n\n");
		}
	} while ( intput);
	return 0;
}


//int main()
//{
//	srand((unsigned int)time(NULL));
//	return 0;
//}