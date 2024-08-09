#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
//strtok函数的使用
//int main()
//{
//	char arr1[] = "http://hello.world.com";
//	char arr2[] = "://..";
//	
//	char* len = NULL;
//
//	for (len = strtok(arr1,arr2);len!=NULL;  len = strtok(NULL, arr2))
//	{
//		printf("%s\n",len);
//	}
//	/*for(len;;strtok(arr1,arr2))*/
//	/*printf("%s\n", len);
//	char* le = strtok(NULL, arr2);
//	printf("%s\n", le);*/
//
//	return 0;
//}

//strerror函数的使用

//int main()
//{
//
//	int i = 0;
//	for (i = 0; i < 10; i++);
//	{
//		printf("%d: %s\n",i,strerror(i));
//	
//	}
//	return 0;
//}


//type arr_name[常量值];

//
////完全初始化 
//int arr[5] = { 1,2,3,4,5 };
////不完全初始化 
//int arr2[6] = { 1 };//第⼀个元素初始化为1，剩余的元素默认初始化为0 
////错误的初始化 - 初始化项太多 
//int arr3[3] = { 1, 2, 3, 4 };

//int arr1[10];
//int arr2[12];
//char ch[5];
//
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//
//	printf("%d\n", arr[4]);
//	printf("%d\n", arr[6]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n ", i, &arr[i]);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr[0]));//计算⼀个元素的⼤⼩，单位是字节 
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//
//	return 0;
//}



//int arr5[][5] = { 1,2,3 };
//int arr6[][5] = { 1,2,3,4,5,6,7 };
//int arr7[][5] = { {1,2}, {3,4}, {5,6} };

//int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };

//
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	printf("%d\n", arr[2][4]);
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;//遍历⾏ 
//	//输⼊ 
//	for (i = 0; i < 3; i++) //产⽣⾏号 
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++) //产⽣列号 
//		{
//			scanf("%d", &arr[i][j]); //输⼊数据 
//		}
//	}
//	//输出 
//	for (i = 0; i < 3; i++) //产⽣⾏号 
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++) //产⽣列号 
//		{
//			printf("%d ", arr[i][j]); //输出数据 
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//多个字符从两边移动，向中间汇聚

//int main()
//{
//	//创建两个字符数组
//	char arr1[] = "go to see the world";
//	char arr2[] = "*******************";
//
//	//下标
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	printf("%s\n", arr1);
//
//	while (left <= right)
//	{
//		Sleep(1000);//停顿函数，单位为毫秒，使用要包含Windows.h的头文件
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//
//		printf("%s\n", arr2);
//		
//	}
//
//
//
//	return 0;
//}


//二分查找

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	
	int k = 0;
	scanf("请输入你要查找的数据：%d", &k);

	int mid = 0;//中间元素下标
	int find = 0;
	
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (k>arr[mid])
		{
			left = mid + 1;
		}
		else if(k < arr[mid])
		{
			
			right = mid - 1;
		}
		else
		{
		   find = 1;
			break;
		}
	}

	if (find == 1)
	{
		printf("找到了下标是%d\n", mid);
	}
	else
	{
		printf("找不到");
	}

	return 0;
}