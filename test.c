#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

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
int mystrlen(const char* str)
{
	int count = 0;
	assert(str);//����
	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = mystrlen(arr);
	printf("%d\n", len);
	return 0;
}

