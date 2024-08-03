#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort的模拟实现

//void swap(char* pf1, char* pf2, size_t sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		char tmp = *pf1;
//		*pf1 = *pf2;
//		*pf2 = tmp;
//		pf1++;
//		pf2++;
//	}
//}
//
//void my_qsort(void*base,size_t num,size_t sz,int(*compare)(const void*p1,const void*p2))
//{
//	int i = 0;
//	for (i = 0; i <num-1 ; i++)
//	{
//		int j = 0;
//		for (j = 0; j <num-1-i ; j++)
//		{
//			if (compare((char*)base + j * sz, (char*)base + (j + 1) * sz) > 0)
//			{
//				//交换
//				swap((char*)base + j * sz, (char*)base + (j + 1) * sz, sz);
//			}
//		}
//	}
//}
//
//int compare(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test()//对整型数组进行排序
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), compare);
//
//	print_arr(arr, sz);
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int compare_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//int compare_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//void test1()
//{
//	struct Stu arr[] = { {"zhangsan",18},{"lisi",19},{"wangmazi",21} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), compare_age);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", (arr[i]).name, (arr[i]).age);
//	}
//
//}
//
//
//int main()
//{
//	//test();//整型数组
//	test1();//结构体数组
//	return 0;
//}

//#define bool _Bool
//#define false 0
//#define ture 1
//#include<stdbool.h>
//int main()
//{
//	_Bool flag = ture;
//
//	if (flag)
//	{
//		printf("I Iile C");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);//a是变量的名字，可以省略掉sizeof后边的() 
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(3 + 3.5));
//	return 0;
//}


//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}



// 测试：sizeof中表达式不计算
//#include <stdio.h>
//int main()
//{
//	/*short s = 2;
//	int b = 10;
//	printf("%d\n", sizeof(s = b + 1));
//	printf("s = %d\n", s);*/
//
//	signed char c;//范围为-128到127
//	unsigned char c;//范围为0到225
//
//
//	int age; //整型变量 
//	char ch; //字符变量 
//	double weight; //浮点型变量 
//
//	int age = 18;
//	char ch = 'w';
//	double weight = 48.0;
//	unsigned int height = 100;
//
//	return 0;
//}

//int a= 20;//全局变量
//
//int main()
//{
//	int a = 10;//局部变量
//	printf("%d\n", a);
//	printf("%d\n",a );
//	return 0;
//}



//int main()
//{
//	int a = 20 + 10;
//	int b = 4 + 5;
//	int c = 3 * 3;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//}


//int main()
//{
//	float x = 6 / 4;
//	int y = 6 / 4;
//	printf("%f\n", x); // 输出 1.000000 
//	printf("%d\n", y); // 输出 1 
//	return 0;
//}


//int main()
//{
//	float x = 6.0 / 4; // 或者写成 6 / 4.0 
//	printf("%f\n", x); // 输出 1.500000 
//	return 0;
//}
//


//int main()
//{
//	int x = 6 % 4; // 2
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 11 % -5); // 1
//	printf("%d\n", -11 % -5); // -1
//	printf("%d\n", -11 % 5); // -1
//	return 0;
//}


//int main()
//{
//	//int a = 3;
//	//int b = 5;
//	//int c = 0;
//	//c = b = a + 3;//连续赋值，从右向左依次赋值的。 
//
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	b = a + 3;
//	c = b;
//
//
//	int a = 10;
//	a = a + 3;
//	a = a - 2;
//
//
//	int a = 10;
//	a += 3;
//	a -= 2;
//
//
//	    //+=   -=
//		//*=   /=   %=
//		//>>=  <<=
//		//&=   |=    ^=
//
//}



//int main()
//{
//	int a = 10;
//	int b = ++a;//++的操作数是a，是放在a的前⾯的，就是前置++ 
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//
//
//	int a = 10;
//	a = a + 1;
//	b = a;
//	printf("a=%d b=%d\n", a, b);
//
//
//
//	int a = 10;
//	int b = a++;//++的操作数是a，是放在a的后⾯的，就是后置++ 
//	printf("a=%d b=%d\n", a, b);
//
//
//
//
//	int a = 10;
//	int b = a;
//	a = a + 1;
//	printf("a=%d b=%d\n", a, b);
//
//
//	int a = 10;
//	int b = -a;
//	int c = -10;
//	printf("b=%d c=%d\n", b, c);//这⾥的b和c都是-10 
//	int a = -10;
//	int b = -a;
//	printf("b=%d\n", b); //这⾥的b是10 
//
//
//	int a = (int)3.14;//意思是将3.14强制类型转换为int类型，这种强制类型转换只取整数部分 
//
//}

//int main(void)
//{
//	printf("Hello World\n");
//	return 0;
//}


//// 输出 There are 3 apples 
//#include <stdio.h>
//int main()
//{
//	/*printf("There are %d apples\n", 3);
//	return 0;*/
//
//	/*printf("%s will come tonight\n", "zhangsan");
//	return 0;*/
//
//	printf("%12f\n", 123.45);
//	return 0;
//
//
//}


// 输出为 " 0.50"
//#include <stdio.h>
//int main()
//{
//	printf("%6.2f\n", 0.5);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("%*.*f\n", 6, 2, 0.5);
//	return 0;
//}
//// 等同于printf("%6.2f\n", 0.5); 


// 输出 hello 
//#include <stdio.h>
//int main()
//{
//	printf("%.5s\n", "hello world");
//	return 0;
//}


////scanf()的使用放法
//int main()
//{
//	int a, b, c, d = 0;
//	scanf("%d%d%d%d", &a,&b,&c,&d);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char name[11];
	scanf("%10s", name);

	return 0;
}
