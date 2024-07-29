#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//创建一个函数模拟实现strlen
//int my_strlen(char* arr, int a)
//{
//	//char* p = arr;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < a; i++)
//	{
//		
//		
//		if (*(arr+i) == '\0')
//		{
//			break;
//		}
//		count++;
//		
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefhijklmn";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*printf("%d\n", sz);*/
//	printf("%d ",my_strlen(arr,sz));
//
//}




//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}
//int main()
//{
//
//	return 0;
//}
// 
//冒泡排列
// 相邻两个元素比较，如果不满足顺序就交换
//int count = 0;
//void Bubblesort(int arr[], int sz)
//{
//	int i = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			count++;
//			if (arr[j] >arr[j+1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//Printf(int* arr,int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,9,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Bubblesort(arr,sz);
//	Printf(arr,sz); 
//	printf("\ncount = %d\n", count);
//	return 0;
//}
// 


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void Printf(int n)
//{
//	int i = 1;
//	for( i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for ( j = 1; j <= i; j++)
//		{
//			
//				printf("%d * %d = %-2d ", i, j, i * j);
//			
//			//
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int ip = 0;
//	scanf("%d", &ip);
//
//	Printf(ip);
//	return 0;
//}

//实现函数判断year是不是润年
//判断方式：能被4整除但不能被100整除
//或能被400整除

//void oryear(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//
//	oryear(year);
//	return 0;
//
//}

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
void Init(int* arr,int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
}
int count = 0;
void Reverse(int* arr,int n)
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			//int tmp = 0;
			//count++;
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void Print(int* arr,int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int i = 0;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	Init(arr,sz);
	
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);

	}
	/*for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}*/

	Reverse(arr,sz);

	Print(arr,sz);
	return 0;
}


