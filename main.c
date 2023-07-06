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
//两个int(32位)整数m和n的一进制表达中，有多少个位(bit)不同 
//输入例子 :1999 2299
//输出例子 : 7