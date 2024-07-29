#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d", a);
	return 0;
}

//折半查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int n = 0;
//	scanf("%d", &n);
//	int left = 0;
//	int sz  = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//		int k = (left + right) / 2;
//		if (arr[k] == n)
//		{
//			printf("找到了下标是：%d", k);
//			flag = 1;
//			break;
//		}
//		else if (arr[k] < n)
//		{
//			left = k + 1;
//		}
//		else
//		{
//			right = k - 1;
//		}
//		
//	}
//	if (flag == 0)
//		printf("找不到\n");
//
//	/*printf("%d %d", left, right);*/
//	return 0;
//}

//int main()
//{
//	char arr[] = "welcome to my home !!!!";
//	char arr1[] = "#######################";
//
//	int left = 0;
//	int right = strlen(arr)-1;
//	
//	while (left <= right)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		left++;
//		right--;
//		
//		//int i = 0;
//		//for (i = 0; i <=right; i++)
//		//{
//		//	
//		//	printf("%c", arr1[i]);
//		//	
//		//}
//		printf("%s\n",arr1);
//		//printf("\n");
//		Sleep(1000);
//		
//	}
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "welcome to my home!!!";
//	char arr1[] = "*********************";
//	/*int a = sizeof(arr) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		printf("%c", arr1[i]);
//	}
//	printf("\n");*/
//	int left = sizeof(arr[0])-1;
//	int right = sizeof(arr);/*sizeof(arr) / sizeof(arr[0]);*//*(unsigned int )strlen(arr)-1;*/
//	while (left <= right)
//	{
//		for (int i = 0; i <= right; i++)
//		{
//			arr1[i] = arr[left];
//			
//			left++;
//		}
//		/*right--;*/
//		arr1[right] = arr[right];
//		int i = 0;
//		for (i = 0; i <= right; i++)
//		{
//			printf("%c", arr1[i]);
//			
//		}
//		printf("\n");
//	}
//	printf("\n");
	//while (left <= right)
	//{
	//	arr1[0] = arr[0];
	//	printf("%c", arr1[0]);
	//	/*for (int i = 0; i <=right; i++)
	//	{
	//		arr1[i] = arr[i];
	//		printf("%c", arr[i]);
	//		left++;
	//		Sleep(1000);*/

	//		//}

	//}
	/*return 0;*/
//}

//int Add(int x ,int y)
//{
//	int n = 0;
//	n = x + y;
//	return n;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int z = Add(a, b);
//	
//	printf("%d\n", z);
//	return 0;
//}