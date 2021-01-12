#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//char* eight_strcpy(char* arr1, const char* arr2)// 常变量  const +类型//3 函数类型 4
//{
//	char* ret = arr1;
//	assert(arr1 != NULL);//2//#include<arrsert.h>断言 
//	assert(arr2 != NULL);//表达式为真，则什么都不发生，若为假，则报错。
//	{
//		while (*arr1++ = *arr2++)//关键点1
//		{
//			;
//		}
//	}
//	return ret;
//}
//void seven_strcpy(char* arr1, const char* arr2)// 常变量  const +类型
//{
//	assert(arr1 != NULL);//#include<arrsert.h>断言 
//	assert(arr2 != NULL);//表达式为真，则什么都不发生，若为假，则报错。
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}
//void six_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1!=NULL);//#include<arrsert.h>断言 
//	assert(arr2 != NULL);//表达式为真，则什么都不发生，若为假，则报错。
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
//	//strcpy字符串拷贝
//	char arr1[] = "************";
//	char arr2[] = "hello";
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	//one_strcpy(arr1, arr2,sz);//把arr2的\0 也打印了
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
//	//error const 放在指针变量*的左边时，修饰的是*p，即不能通过p来改变*p的值
//
//	//当放在*右边时，修饰的是p，即*p可以改变num的值
//	//      const 放在指针变量*的左边时，修饰的是指针变量p本身，p不能再变了。
//	*p = 20;
//	p = &n;
//	printf("%d", *p);
//	return 0;
//}
//int main()
//{
//	//Debug死循环
//	//Release得程序结果
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
//F5启动调试  配合 F9-断点（程序） 使用//F10 逐过程//F11逐语句（进入函数）
//shift+F11(直接跳出函数）
//ctrl+F5只是执行，不调试 shift+F9快速监视
//正确程序
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//		//变量arr[12]与变量i地址相同  
//		//栈区先使用高地址的空间再使用低地址的空间
//		//随着数组下标增加，地址由低到高变化，arr[0]在下面，arr[9]在上面
//	}
//	system("pause");
//	return 0;
//}
//改错下面程序
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//		//变量arr[12]与变量i地址相同  
//		//栈区先使用高地址的空间再使用低地址的空间
//		//随着数组下标增加，地址由低到高变化，arr[0]在下面，arr[9]在上面
//	}
//	system("pause");
//	return 0;
//}
////正确程序
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
//			ret *= j;//ret还为2，为还原成1
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//改错下面程序
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
//写一段代码告诉我们当前机器的字节序是什么
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
//	//返回1代表小端
//	//返回0代表大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	//10000000000000000000000001
//	//11111111111111111111111110
//	//11111111111111111111111111
//	//11111111有符号 整型提升 符号位补至32位
//	//即111111111111111111111111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//000000000000000000000011111111无符号高位补0
//	printf("%d %d %d", a, b, c);//-1 -1 255
//	return 0;
//}
//int main()
//{
//	char a = -128;//特殊：其二进制为10000000
//	//1000000000000000000000010000000
//	//1111111111111111111111101111111
//	//1111111111111111111111110000000
//	//1111111111111111111111110000000-补码  整型提升后
//	printf("%u", a);//%d十进制有符号 %u十进制无符号
//	return 0;
//}