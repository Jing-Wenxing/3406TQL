#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> 

int main()
{
	int a[100];
	                                                                                                

	return 0;
}

// 1-5
// 2-2 2-4 2-5 2-6

// 1-5
//int main()
//{
//	int num = 9;
//	for (int i = -(num / 2); i < num / 2 + 1; i++)
//	{
//		for (int j = 0; j < abs(i); j++)
//		{
//			printf(" ");
//		}
//
//		for (int j = 0; j < 2 * ((num / 2) - abs(i)) + 1; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

// 2-2
//int main()
//{
//	int base[10] = { 2,3,455,3,6,112,45,95,2,6 };
//	int value[1000], value_length = 0;
//	int length[1000] = { 0 };
//	int max = 1;
//
//	// 用数组来模拟输入
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < value_length; j++)
//		{
//			if (value[j] == base[i])
//			{
//				length[j]++;
//				if (length[j] > max)
//					max = length[j];
//				continue;
//			}
//		}
//		value[value_length] = base[i];
//		length[value_length]++;
//		value_length++;
//	}
//
//	for (int i = value_length - 1; i >= 0; i--)
//	{
//		if (length[i] == max)
//			printf("%d ", value[i]);
//	}
//
//	return 0;
//}

// 2-3

// 2-4
//int main()
//{
//	char base[] = "Algorithm is so  fun and    we all love it\n";
//
//	double lastChar = 1, thisChar = 1, sum = 0, value = 0;
//	for (int i = 0; i < sizeof(base); i++)
//	{
//		if (!isalpha(base[i]))
//			thisChar = 0;
//
//		if (isalpha(base[i]))
//		{
//			sum++;
//			thisChar = 1;
//		}
//
//		if (lastChar == 0 && thisChar == 1)
//			value++;
//
//		if (base[i] == '\n')
//			value++;
//
//		lastChar = thisChar;
//	}
//
//	printf("%.2lf", sum / value);
//	return 0;
//}

// 2-5
//int main()
//{
//    char c;
//    int letter, space, num, other;
//    for (letter = 0, space = 0, num = 0, other = 0; (c = getchar()) != '\n'; ) {
//        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) letter++;
//        else if (c == ' ' || c == '\t') space++;
//        else if (c >= '0' && c <= '9') num++;
//        else other++;
//    }
//    printf("Letter = %d, Space = %d, Number = %d, Other = %d", letter, space, num, other);
//    return 0;
//}

// 2-6
//int main()
//{
//	int num = 9;
//	for (int i = -(num / 2); i < num / 2 + 1; i++)
//	{
//		for (int j = 0; j < abs(i); j++)
//		{
//			printf(" ");
//		}
//
//		if(abs(i)== (num / 2))
//			printf("*");
//		else
//		{
//			//printf("%d", );
//			printf("*");
//			for (int j = 0; j < 2 * ((num / 2) - abs(i)) - 1; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}