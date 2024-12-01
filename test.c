#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//void my_strcpy(char* dest, char* source)
//{
//	while (*source != '\0')
//	{
//		*dest = *source;
//		dest++;
//		source++;
//	}
//	*dest = *source;
//}

////  为什么返回值是char*
////  是为了实现链式访问
////  strcpy函数返回的是目标空间的首地址
//char* my_strcpy(char* dest, const char* source)
//{
//	//断言,判断
	//assert(source != NULL);
	//assert(dest != NULL);
//	while (*dest++ = *source++);
//}
//
//int main()
//{
//	//int i = 0;
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//	char arr1[20] = "XXXXXXXXXXXXXXX";
//	char arr2[] = "hello bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	const int a = 10;
//	//a = 20;
//	//int* p = &a;
//	//*p = 20;
//	const int* p = &a;
//	int* const p = &a;
//	const int* const p = &a;//p指向对象和用*p修改的值，都不能被修改
//
//	int** pa = &p;
//	**pa = 20;
//
//
//	printf("%d\n", a);
//
//	return 0;
//}


//strlen求字符串长度
//int mystrlen(const char* str)
//{
//	int count = 0;
//	assert(str);//断言
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//三角形判断

//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，
//判断三角形的类型(等边三角形、等腰三角形或普通三角形)

//输入描述:
//题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)，
//作为三角形的三个边，用空格分隔。

//输出描述 :
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出
//"Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”
//其余的三角形则输出"Ordinary triangle!"，反之输出"Not a triangle!”.

////等边三角形
//char Equilateral_triangle(int a, int b, int c)
//{
//	char e = 0;
//	if (a == b == c)
//		e="Equilateral triangle!";
//	return e;
//}
//
////等腰三角形
//char Isosceles_triangle(int a, int b, int c)
//{
//	char s = 0;
//	if ((a == b || b == c || a == c) && (a + b > c || a + c > b || b + c > a))
//		s = "Isosceles triangle!";
//	return s;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		//判断
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
//				printf("Isosceles triangle!\n");
//			else if (a == b && b == c)
//				printf("Equilateral triangle!\n");
//			else 
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	unsigned long pulArray [] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//int strlen(char* p)
//{
//	int count = 0;
//	int i = 0;
//	if (*(p + i) != '\0')
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	//逆序
//	int left = 0;
//	int right = strlen(arr) - 1;
//	//char* pl = arr[left];
//	//char* pr = arr[right];
//	
//	while (left <= right)
//	{
//		char p = arr[left];
//		arr[left] = arr[right];
//		arr[right] = p;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//求Sn=a+aa+aaa+aaaa+aaaaa+.....前n项的和，
//Sn=1+11+111+1111+11111+........

//int Sum(int n, int a, int k)
//{
//	if (n == 1)
//		return a;
//	else
//		return k + Sum(n - 1, a, k * 10 + a);
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = Sum(n, a, a);//递归方法
//	printf("%d", sum);
//	//int i = 0;
//	//int k = 0;
//	//int sum = 0;
//	//for (i = 0; i < n; i++)
//	//{
//	//	k = k * 10 + a;
//	//	sum += k;
//	//}
//	//printf("%d", sum);
//	return 0;
//}


////求出0~100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
////如:153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3，则153是一个“水仙花数”。

//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 100000; a++)
//	{
//		//判断实现水仙花数
//		int count = 1;
//		int tmp = a;
//		int sum = 0;
//		//1.计算有几位数 ->count
//		while (tmp / 10)
//		{
//			count++;
//			tmp /= 10;
//		}
//		//2.取得每一位数字
//		tmp = a;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == a)
//			printf("%d  ", a);
//	}
//	
//	return 0;
//}

int is_lynumber(int a)
{
	//判断实现水仙花数
	int count = 1;
	int tmp = a;
	int sum = 0;
	//1.计算有几位数 ->count
	while (tmp / 10)
	{
		count++;
		tmp /= 10;
	}
	//2.取得每一位数字
	tmp = a;
	while (tmp)
	{
		sum += pow(tmp % 10, count);
		tmp /= 10;
	}
	if (sum == a)
		return 1;
	else
		return 0;
	//return sum == a;
}

int main()
{
	int a = 0;
	for (a = 0; a <= 100000; a++)
	{
		if(is_lynumber(a))
			printf("%d  ", a);
	}
	return 0;
}

