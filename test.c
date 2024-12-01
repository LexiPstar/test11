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

//int is_lynumber(int a)
//{
//	//判断实现水仙花数
//	int count = 1;
//	int tmp = a;
//	int sum = 0;
//	//1.计算有几位数 ->count
//	while (tmp / 10)
//	{
//		count++;
//		tmp /= 10;
//	}
//	//2.取得每一位数字
//	tmp = a;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, count);
//		tmp /= 10;
//	}
//	if (sum == a)
//		return 1;
//	else
//		return 0;
//	//return sum == a;
//}
//
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 100000; a++)
//	{
//		if(is_lynumber(a))
//			printf("%d  ", a);
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水(编程实现)

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	//置换
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else 
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	fib(8);
//	printf("%d", cnt);
//	return 0;
//}

//标题:求最小公倍数|时间限制:1秒|内存限制:32768K
//正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，
//设计一个算法，求输入A和B的最小公倍数。
//1 <= a, b <= 100000数据范围:
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//1.
//	//int n = (a > b ? a : b);
//	//计算最小公倍数
//	//while (1)
//	//{
//	//	if ((n % a == 0) && (n % b == 0))
//	//	{
//	//		break;
//	//	}
//	//	n++;
//	//}
//	//printf("%d\n", n);
//	
//	//2.
//	//最小公倍数
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d", a * i);
//	return 0;
//}


//标题:倒置字符串|时间限制:1秒|内存限制:32768K
//将一句话的单词进行倒置，标点不倒置。
//比如Iikebeiing.经过函数后变为:beiing.likel
//输入描述:
//每个测试输入包含1个测试用例 : I1ikebeijing.输入用例长度不超过100
//输出描述 :
//依次输出倒置之后的字符串，以空格分割

void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left <= right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char s[101] = { 0 };
	fgets(s, 101, stdin);//fgets 防止输入溢出
	s[strcspn(s, "\n")] = '\0';//去掉fgets读取的换行符\n
	//逆置
	//1.逆序字符串
	int len = strlen(s) - 1;
	reverse(s, s + len);
	//2.逆序单词
	char* start = s;
	while (*start)
	{
		char* end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		reverse(start, end-1);
		if (*end != '\0')
			end++;
		start = end;
	}
	//输出
	printf("%s\n", s);
	return 0;
}













//逆序字符串
//void reverse(char* ss, int left, int right)
//{
//	while (left <= right)
//	{
//		char tmp = ss[left];
//		ss[left] = ss[right];
//		ss[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char s[101] = { 0 };
//	fgets(s,101,stdin);//fgets 防止输入溢出
//	s[strcspn(s, "\n")] = '\0';//去掉fgets读取的换行符\n
//	int left = 0;
//	int right = strlen(s) - 1;
//	reverse(s, left, right);
//	printf("%s\n", s);
//	return 0;
//}