#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//用函数回调模拟实现一个计算器
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void Print(int (*pf)(int, int))
//{
//	printf("请输入两个整数:>_");
//	int x = 0 ,y = 0;
//	scanf("%d %d", &x, &y);
//	int ret = pf(x, y);
//	printf("结果是:>_%d\n", ret);
//}

//void menu()
//{
//	printf("----------------------\n");
//	printf("---- 1. Add 2.Sub ----\n");
//	printf("---- 3.Mul  4.Div ----\n");
//	printf("---- 0.Exit       ----\n");
//	printf("----------------------\n");
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	int(*pfarr[4])(int ,int) = { Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请输入:>_");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Print(Add);
//			/*ret = pfarr[0](20 ,10);
//			printf("%d\n", ret);*/
//			break;
//		case 2:
//			Print(Sub);
//			break;
//		case 3:
//			Print(Mul);
//			break;
//		case 4:
//			Print(Div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误请重新输入:>_\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//用函数数组指针来实现计算器
//void menu()
//{
//	printf("----------------------\n");
//	printf("---- 1. Add 2.Sub ----\n");
//	printf("---- 3.Mul  4.Div ----\n");
//	printf("---- 0.Exit       ----\n");
//	printf("----------------------\n");
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	int x, y;
//	int(*pfarr[])(int, int) = {0, Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请输入:>_");
//		scanf("%d", &input);
//		
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个整数>:_");
//			scanf("%d %d", &x, &y);
//			ret = (*pfarr[input])(x, y);
//			printf("结果是:>_%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误请重新输入:>_\n");
//		}
//	} while (input);
//	return 0;
//}


//qsort 排列整数
//int conpare(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//int main()
//{
//	int arr[] = { 1,4,7,2,5,8,3,6,9,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), conpare);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//qsort 排列结构体


//struct Stu
//{
//	char name[20];
//	int age;
//};
////按照年龄排序
//int compare(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
////按照字符排序
//
//int compare_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//int main()
//{
//	struct Stu s[] = { {"zhangsan" ,18},{"lisi",20},{"wangwu",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), compare_name);
//
//
//	return 0;
//}


//qsort对字符进行排列
//int compare(const void* p1, const void* p2)
//{
//	return ((*(char*)p2)- (*(char*)p1));
//}
//
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f','g','h'};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), compare);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}



#include<stdio.h>

//int main()
//{
//	/*printf("%c\n",'z');
//	printf("%c\n", 122);*/
//
//	/*printf("%s\n", "Hello c");
//	printf("Hello c");*/
//	
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	char arr3[] = { 'a','b','c','\0'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//int main()
//{
//	/*printf("%s\n", "abc\ndef");*/
//
//	printf("%c\n", '\130');
//	printf("%c\n", '\x30');
//	return 0;
//}\


//int main()
//{
//	int a = 3;
//	int b = 2;
//	int c = a + b;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int ret = Add(2, 3);//函数调用语句
//	return 0;
//}

void Print(int* arr, int n)//复合语句
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(arr + i));
	}
}

int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)//复合语句
	{
		arr[i] = 10 - i;
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr,sz);
	return 0;
}