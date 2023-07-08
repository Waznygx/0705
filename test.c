#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//int a = 0x11223344;
//	//char* pa = &a;
//	//*pa = 0;
//	///*int* pc = &i;
//	//*pc=0;*/
//	int n = 10;
//	char* pc = &n;
//	double* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
// 	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	printf("%d\n", arr);
//	return 0;
//}

//int Strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + Strlen(str + 1);
//	}
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "asfhksrfgls";
//	int length = sizeof(arr) / sizeof(arr[0]);//包含了'\0'在内，所以不能用该方法计算字符型数组
//	printf("1.my_strlen()=%d\n", my_strlen(arr));
//	printf("2.length=%d\n", length);
//	printf("3.strlen=%d\n", strlen(arr));
//	printf("4.digui=%d\n", Strlen(arr));
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("*(p+%d)=%d\n",i ,*(p + i));
//		printf("arr[%d]=%d\n",i,arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = {&a,&b,&c};
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;

//int main()
//{
//	/*int arr[] = { (1,2),(3,4),5 };
//	printf("%d\n", sizeof(arr));*/
//	char arr[] = "world";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//void chengfabiao(int input)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 1; i <= input; i++)
//	{
//		for (j = 1; j <= i; j++) 
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	chengfabiao(input);
//	return 0;
//


