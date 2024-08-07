#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
#include<string.h>
#include<assert.h>
//字符函数和字符串函数
// 都需要包含string.h的头文件
//strlen的使用和模拟实现

//size_t my_strlen(const char*str)
//{
//	//计数器的方式
//	size_t count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//size_t my_strlen(const char* str)
//{
//	//指针减指针的方式
//	assert(str);
//	char* str1 = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - str1;
//}

//size_t my_strlen(const char* str)
//{
//	//递归的方式
//	assert(str);
//	if (*str=='\0')
//		return;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//
//	int ret = my_strlen(arr);
//	printf("%d ", ret);
//
//	return 0;
//}


//strcpy的使用和模拟实现
//char* my_strcpy( char*dest, char*src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	/*while (*src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "******";
//	char arr2[] = "hijklm";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s ", arr1);
//	return 0;
//}

//strcat的使用和模拟实现

//size_t my_strcat(char*dest,char*src)
//{
//	char* ret = dest;
//	//找\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hijklm";
//
//	size_t len = my_strcat(arr1, arr2);
//
//	printf("%s", len);
//	return 0;
//}

//strcmp 的使用和模拟实现
//int my_strcmp(char* str1, char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "bcq";
//
//	int len = my_strcmp(arr1, arr2);
//	printf("%d\n", len);
//	if (len > 0)
//	{
//		printf("arr1 > arr2\n");
//	}
//	else if (len == 0)
//	{
//		printf("arr1=arr2\n");
//	}
//	else
//	{
//		printf("arr1<arr2\n");
//	}
//	
//	return 0;
//}

//strncpy ,strncat,strncmp的使用

//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "abcdeq";
//
//	//strncpy(arr1, arr2, 3);
//	//strncat(arr1, arr2, 4);
//	int len = strncmp(arr1, arr2, 6);
//	printf("%d", len);
//	return 0;
//}


//strstr 的使用和模拟实现
//作用在str1中找str2

//char* my_strstr(char* s1, char* s2)
//{
//	char* ret = s1;
//	char* ss1 = NULL;
//	char* ss2 = NULL;
//	assert(s1 && s2);
//
//	if (*s2 == '\0')
//	{
//		return s1;
//	}
//	while (*ret)
//	{
//		ss1 = ret;
//		ss2 = s2;
//		while (*ss1 == *ss2)
//		{
//			ss1++;
//			ss2++;
//		}
//		if (*ss2 == '\0')
//		{
//			return ret;
//		}
//		ret++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbbcdef";
//	char arr2[] = "bbc";
//
//	char* len = my_strstr(arr1, arr2);
//
//	printf("%s", len);
//	return 0;
//}
//
//#include <stdlib.h>
//int main()
//{
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}

//
//int main()
//{
//	//使⽤time函数的返回值设置种⼦ 
//	//因为srand的参数是unsigned int类型，我们将time函数的返回值强制类型转换 
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}

//猜数字游戏

#include<time.h>
#include<stdlib.h>
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("******  1 . play******\n");
	printf("******  0 . exit******\n");
	printf("**********************\n");
}

void game()
{
	//生成随机数1-100
	int ret = rand() % 100 + 1;
	//可以设置有几次机会
	int count = 6;
	while (count--)
	{
		int n = 0;
		printf("范围1到100请输入你猜的数字:>_");
		scanf("%d", &n);
		if (n > ret)
		{
			printf("猜大了再试一下\n");
		}
		else if (n < ret)
		{
			printf("猜小了再试一下\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
		printf("你还有%d次机会\n", count);

		if (count == 0)
		{
			printf("游戏结束正确的数字是%d\n",ret);
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入:>_");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
		}

	} while (input);
	return 0;
}