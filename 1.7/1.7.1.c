#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//char* eight_strcpy(char* arr1, const char* arr2)// ������  const +����//3 �������� 4
//{
//	char* ret = arr1;
//	assert(arr1 != NULL);//2//#include<arrsert.h>���� 
//	assert(arr2 != NULL);//���ʽΪ�棬��ʲô������������Ϊ�٣��򱨴�
//	{
//		while (*arr1++ = *arr2++)//�ؼ���1
//		{
//			;
//		}
//	}
//	return ret;
//}
//void seven_strcpy(char* arr1, const char* arr2)// ������  const +����
//{
//	assert(arr1 != NULL);//#include<arrsert.h>���� 
//	assert(arr2 != NULL);//���ʽΪ�棬��ʲô������������Ϊ�٣��򱨴�
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}
//void six_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1!=NULL);//#include<arrsert.h>���� 
//	assert(arr2 != NULL);//���ʽΪ�棬��ʲô������������Ϊ�٣��򱨴�
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}
//void five_strcpy(char* arr1, char* arr2)
//{
//	if (arr1 != NULL && arr2 != NULL)
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}
//void four_strcpy(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//void thr_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = *arr2;
//}
//void sec_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//			*arr1 = *arr2;
//			arr2++;
//			arr1++;
//		*arr1++ = *arr2++;
//	}
//	*arr1 = *arr2;
//}
//void one_strcpy(char* arr1, char* arr2,int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(arr2 + i) != '\0')
//			tmp = *(arr1 + i);
//			*(arr1 + i) = *(arr2 + i);
//			*(arr2 + i) = *(arr1 + i);
//
//	}
//}
//int main()
//{
//	//strcpy�ַ�������
//	char arr1[] = "************";
//	char arr2[] = "hello";
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	//one_strcpy(arr1, arr2,sz);//��arr2��\0 Ҳ��ӡ��
//	//printf("%s", arr1);
//	printf("%s\n", eight_strcpy(arr1, arr2));
//	return 0;
//}
//int main()
//{
//	
//	const int num = 10;
//	int n = 100;
//
//	int* const p = &num;
//	//const int* p = &num;
//	
//	//error const ����ָ�����*�����ʱ�����ε���*p��������ͨ��p���ı�*p��ֵ
//
//	//������*�ұ�ʱ�����ε���p����*p���Ըı�num��ֵ
//	//      const ����ָ�����*�����ʱ�����ε���ָ�����p����p�����ٱ��ˡ�
//	*p = 20;
//	p = &n;
//	printf("%d", *p);
//	return 0;
//}
//int main()
//{
//	//Debug��ѭ��
//	//Release�ó�����
//	int i = 0;
//	int arr[10] = { 1,2,4,5,6,7,8,9 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//F5��������  ��� F9-�ϵ㣨���� ʹ��//F10 �����//F11����䣨���뺯����
//shift+F11(ֱ������������
//ctrl+F5ֻ��ִ�У������� shift+F9���ټ���
//��ȷ����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//		//����arr[12]�����i��ַ��ͬ  
//		//ջ����ʹ�øߵ�ַ�Ŀռ���ʹ�õ͵�ַ�Ŀռ�
//		//���������±����ӣ���ַ�ɵ͵��߱仯��arr[0]�����棬arr[9]������
//	}
//	system("pause");
//	return 0;
//}
//�Ĵ��������
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//		//����arr[12]�����i��ַ��ͬ  
//		//ջ����ʹ�øߵ�ַ�Ŀռ���ʹ�õ͵�ַ�Ŀռ�
//		//���������±����ӣ���ַ�ɵ͵��߱仯��arr[0]�����棬arr[9]������
//	}
//	system("pause");
//	return 0;
//}
////��ȷ����
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;//ret��Ϊ2��Ϊ��ԭ��1
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//�Ĵ��������
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test()
//{
//	test2();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//int check_sys1()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//if (*p == 1)
//	//	return 1;
//	//else
//	//	return 0
//
//	return *p;
//}
//int main()
//{
//	//����1����С��
//	//����0������
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	//10000000000000000000000001
//	//11111111111111111111111110
//	//11111111111111111111111111
//	//11111111�з��� �������� ����λ����32λ
//	//��111111111111111111111111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//000000000000000000000011111111�޷��Ÿ�λ��0
//	printf("%d %d %d", a, b, c);//-1 -1 255
//	return 0;
//}
//int main()
//{
//	char a = -128;//���⣺�������Ϊ10000000
//	//1000000000000000000000010000000
//	//1111111111111111111111101111111
//	//1111111111111111111111110000000
//	//1111111111111111111111110000000-����  ����������
//	printf("%u", a);//%dʮ�����з��� %uʮ�����޷���
//	return 0;
//}