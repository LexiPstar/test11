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

////  Ϊʲô����ֵ��char*
////  ��Ϊ��ʵ����ʽ����
////  strcpy�������ص���Ŀ��ռ���׵�ַ
//char* my_strcpy(char* dest, const char* source)
//{
//	//����,�ж�
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
//	const int* const p = &a;//pָ��������*p�޸ĵ�ֵ�������ܱ��޸�
//
//	int** pa = &p;
//	**pa = 20;
//
//
//	printf("%d\n", a);
//
//	return 0;
//}


//strlen���ַ�������
//int mystrlen(const char* str)
//{
//	int count = 0;
//	assert(str);//����
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



//�������ж�

//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ�
//�ж������ε�����(�ȱ������Ρ����������λ���ͨ������)

//��������:
//��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0 < a, b, c < 1000)��
//��Ϊ�����ε������ߣ��ÿո�ָ���

//������� :
//���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ������������
//"Equilateral triangle!���������������������Isosceles triangle!��
//����������������"Ordinary triangle!"����֮���"Not a triangle!��.

////�ȱ�������
//char Equilateral_triangle(int a, int b, int c)
//{
//	char e = 0;
//	if (a == b == c)
//		e="Equilateral triangle!";
//	return e;
//}
//
////����������
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
//		//�ж�
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
//	//����
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


//��Sn=a+aa+aaa+aaaa+aaaaa+.....ǰn��ĺͣ�
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
//	int sum = Sum(n, a, a);//�ݹ鷽��
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


////���0~100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
////��:153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3����153��һ����ˮ�ɻ�������

//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 100000; a++)
//	{
//		//�ж�ʵ��ˮ�ɻ���
//		int count = 1;
//		int tmp = a;
//		int sum = 0;
//		//1.�����м�λ�� ->count
//		while (tmp / 10)
//		{
//			count++;
//			tmp /= 10;
//		}
//		//2.ȡ��ÿһλ����
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
//	//�ж�ʵ��ˮ�ɻ���
//	int count = 1;
//	int tmp = a;
//	int sum = 0;
//	//1.�����м�λ�� ->count
//	while (tmp / 10)
//	{
//		count++;
//		tmp /= 10;
//	}
//	//2.ȡ��ÿһλ����
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
//		//��ӡ�ո�
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ(���ʵ��)

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	//�û�
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

//����:����С������|ʱ������:1��|�ڴ�����:32768K
//������A��������B ����С��������ָ �ܱ�A��B��������С��������ֵ��
//���һ���㷨��������A��B����С��������
//1 <= a, b <= 100000���ݷ�Χ:
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//1.
//	//int n = (a > b ? a : b);
//	//������С������
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
//	//��С������
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d", a * i);
//	return 0;
//}


//����:�����ַ���|ʱ������:1��|�ڴ�����:32768K
//��һ�仰�ĵ��ʽ��е��ã���㲻���á�
//����Iikebeiing.�����������Ϊ:beiing.likel
//��������:
//ÿ�������������1���������� : I1ikebeijing.�����������Ȳ�����100
//������� :
//�����������֮����ַ������Կո�ָ�

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
	fgets(s, 101, stdin);//fgets ��ֹ�������
	s[strcspn(s, "\n")] = '\0';//ȥ��fgets��ȡ�Ļ��з�\n
	//����
	//1.�����ַ���
	int len = strlen(s) - 1;
	reverse(s, s + len);
	//2.���򵥴�
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
	//���
	printf("%s\n", s);
	return 0;
}













//�����ַ���
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
//	fgets(s,101,stdin);//fgets ��ֹ�������
//	s[strcspn(s, "\n")] = '\0';//ȥ��fgets��ȡ�Ļ��з�\n
//	int left = 0;
//	int right = strlen(s) - 1;
//	reverse(s, left, right);
//	printf("%s\n", s);
//	return 0;
//}