#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//����һ������ģ��ʵ��strlen
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
//ð������
// ��������Ԫ�رȽϣ����������˳��ͽ���
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


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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

//ʵ�ֺ����ж�year�ǲ�������
//�жϷ�ʽ���ܱ�4���������ܱ�100����
//���ܱ�400����

//void oryear(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
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

//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
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


