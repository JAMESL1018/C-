#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>//sqrt需的头文件
//double sqrt(double x);
//sqrt 是函数名 
//x 是函数的参数，表⽰调⽤sqrt函数需要传递⼀个double类型的值 
//double 是返回值类型 - 表⽰函数计算的结果是double类型的值 
//
//int main()
//{
//	double a = 16.0;
//	double s = sqrt(a);
//	printf("%lf", s);
//	return 0;
//}


// int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//	//上面三行代码可以简写为 
//	//return x+y
//}
//
//int main()
//{
//	int a = 4;
//	int b = 5;
//	//scanf("%d%d", &a, &b);
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}

//void set_arr(int arr[],int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void print_arr(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	set_arr(arr,sz);//设置的数组的内容为-1
//	print_arr(arr,sz);//打印数组
//	return 0;
//}
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int get_days_of_month(int year, int month)
//{
//	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//让下标和月数对应
//	int day = days[month];
//
//	if (is_leap_year(year) && month == 2)
//	{
//		day += 1;
//	}
//	return day;
//
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d%d", &y ,& m);
//
//	int day = get_days_of_month(y, m);
//
//	printf("%d", day);
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", strlen("abcdef"));//链式访问  
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//判断⼀年是不是闰年 
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

//int is_leap_year(int y);

//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	int r = is_leap_year(y);
//	if (r == 1)
//		printf("闰年\n");
//	else
//		printf("⾮闰年\n");
//	return 0;
//}
//
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//#include"Add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d%d", &a, &b);
//
//	int ret  = Add(a, b);
//
//	printf("%d", ret);
//	return 0;
//}


//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}


