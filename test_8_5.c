#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	//输入一个数判断他是奇数还是偶数,并打印
//
//	int n = 0;
//	scanf("%d", &n);
//	if(n%2==1)
//	{
//		printf("%d是奇数\n",n);
//	}
//	else
//	{
//		printf("%d是偶数\n",n);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i >= 18)
//		printf("成年了\n");
//	
//		printf("未成年\n");
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年了\n");
//		printf("可以谈恋爱\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		print("尽量别谈\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("是0\n");
//	}
//	else if (num > 0)
//	{
//		printf("是正数\n");
//
//	}
//	else
//	{
//		printf("是负数\n");
//	}
//	return 0;
//}


//int main()
//{
	/*int num = 0;
	scanf("%d", &num);
	if (num > 0)
	{
		printf("正数\n");
		if (num % 2 == 1)
		{
			printf("奇数\n");
		}
		else
		{
			printf("偶数\n");
		}
	}
	else
	{
		printf("负数\n");
	}*/


//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age>=18 && age<= 30)
//	{
//		printf("青年\n");
//	}
//	return 0;
//}


//使⽤条件表达式实现找两个数中较⼤值。
//int main()
//{
//	int a, b = 0;
//	scanf("%d%d", &a, &b);
//	int m = a > b ? a: b;
//	printf("%d\n", m);
//	return 0;
// }

//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("do something\n");
//	}
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("春季\n");
//	}
//	return 0;
//}
// 

//

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("冬季");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*/
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//		printf("整除，余数为0\n");
//	else if (n % 3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("整除，余数为0\n");
//
//	case 1:
//		printf("余数是1\n");
//
//	case 2:
//		printf("余数是2\n");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	    case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("⼯作⽇\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息⽇\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
//例如：
//输⼊：1234，输出：4321
//输⼊：521，输出：125

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	while (i)
//	{
//		printf("%d ", i % 10);
//		i =  i / 10;
//	}
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//}

//计算1~100之间3的倍数的数字之和
//int main()
//{
//	int n = 0;
//	for (int i = 3; i <= 100; i+=3)
//	{
//		n += i;
//	}
//	printf("%d ", n);
//	return 0;
//}


//
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//当i等于5后，就执⾏break，循环就终⽌了 
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		//当i等于5后，就执⾏continue，直接跳过continue的代码，去循环的判断的地⽅ 
//		//因为这⾥跳过了i = i+1，所以i⼀直为5，程序陷⼊和死循环 
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//这⾥continue跳过了后边的打印，来到了i++的调整部分 
//		printf("%d ", i);
//	}
//	return 0;
//}
//


//找出100~200之间的素数，并打印在屏幕上。
//注：素数⼜称质数，只能被1和本⾝整除的数字。
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
// 
//}


int main()
{
	printf("hehe\n");
	goto next;
	printf("haha\n");

next:
	printf("跳过了haha的打印\n");
	return 0;
}
