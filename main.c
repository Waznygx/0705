#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

////创建一个整形数组，完成对数组的操作
//// 1.实现函数init（）初始化数组为全0
//// 2.实现print（）打印数组的每个元素
//// 3.实现reverse（）函数完成数组元素的逆置
////要求，自己设计以上函数的参数、返回值
//void reverse(int arr[], int length)
//{
//	int left = 0; 
//	int right = length - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//void print(int arr[], int length)
//{
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void init(int arr[], int length)
//{
//	int i = 0;
//	for ( i = 0; i < length; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, length);
//	print(arr, length);
//	reverse(arr, length);
//	printf("\n");
//	print(arr, length);
//	return 0;
//}

////交换数组a和b中的内容，数组一样大
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "hello world!";
//	char temp[] = "            ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left < right)
//	{
//		temp[left] = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = temp[left];
//		left++;
//		temp[right] = arr1[right];
//		arr1[right] = arr2[right];
//		arr2[right] = temp[right];
//		right--;
//	}
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 12,22,32,42,52 };
//	int arr2[] = { 11,21,31,41,51 };
//	int length = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < length; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//		printf("arr1=%d\n", arr1[i]);
//		printf("arr2=%d\n", arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf(" a=%d\n b=%d\n c=%d\n", a, b, c);
//	return 0;
//}

//求二进制中不同位的个数
//两个int(32位)整数m和n的二进制表达中，有多少个位(bit)不同 
//输入例子 :1999,2299
//输出例子 : 7
//int compare(int a,int b)
//{
//	int count = 0;
//	int m = a ^ b;//ab异或，求出有几个1
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0; 
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("count=%d\n", compare(a, b));
//	return 0;
//}

////求一个数字中二进制(补码)1的个数(三种方法)
////int cut(unsigned int a)
////{
////	int count = 0;
////	while (a)
////	{
////		if (a % 2 == 1)
////		{
////			count++;
////		}
////		a = a / 2;
////	}
////	return count;
////}
////int cut(int a)
////{
////	int count = 0;
////	int i = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if ( ((a >> i) & 1) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//int jingjian(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("count=%d\n", jingjian(a));
//	return 0;
//}

////获取一个二进制序列中所有的奇数和偶数位，分别打印出二进制序列
//void print_binary(int input)
//{
//	int i = 0;
//	printf("jishu:\n");
//	for (i = 30; i >= 0; i -= 2)//若是"i；i<31；i+=2"，则求出的1会放在最前面，而且计算结果有问题（缺1）
//	{
//
//		printf("%d ", (input >> i) & 1);
//	}
//	printf("\noushu:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		
//		printf("%d ", ( input >> i) & 1);
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	print_binary(input);
//	return 0;
//}

//递归实现打印一个整数的每一位
//int print_every(int a)
//{
//	if (a > 9)
//	{
//		print_every(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print_every(a);
//	return 0;
//}

//字符串逆序（递归实现）
//将字符串中的字符反向排列
//不能使用c函数库中的字符串操作函数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void print_nixu2(char arr[])//abcdefg。
//{
//	//1.将a挪开；
//	char temp = arr[0];
//	//2.g挪到a位置；
//	int len = my_strlen(arr) - 1;
//	arr[0] = arr[len];
//	//3.'\0'挪到g位置；
//	 arr[len] = '\0';
//	//4.bcdef进行交换；
//	if (my_strlen(arr + 1) >= 2)
//	{
//		print_nixu2(arr + 1);
//	}
//	//55.a挪到'\0'位置
//	arr[len] = temp;
//}
////void print_nixu1(char arr[])
////{
////	int left = 0;
////	int right = my_strlen(arr) - 1;
////	int temp = 0;
////	while (left < right)
////	{
////		temp = arr[left];
////		arr[left] = arr[right];
////		arr[right] = temp;
////		left++;
////		right--;
////	}
////}
//int main()
//{
//	char arr[] = "abcdefg";
//	//print_nixu1(arr);
//	print_nixu2(arr);
//	printf("%s ",arr);
//	return 0;
//}

//递归方式实现输入一个非负整数，返回组成ta的数字之和
//int cut(int input)
//{
//	if (input > 9)
//	{
//		return cut(input / 10) + (input % 10);
//	}
//	else
//	{
//		return input;
//	}
//}
//int main()
//{
//	unsigned int input = 0;
//	scanf("%d", &input);
//	printf("%d\n", cut(input));
//	return 0;
//}

//递归方式实现n的k次方
//double cifang(int n,int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / (cifang(n, -k)));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else{
//		return n * cifang(n,k-1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	double a = cifang(n, k);
//	printf("%lf\n", a);
//}
