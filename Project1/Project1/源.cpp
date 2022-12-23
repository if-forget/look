#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
int org(int x, int y, int z)
{
	if (abs(x-y)<z&&x+y>z)
	{
		if (x == y&&y == z)
			return 0;
		else
		{
			if (x == y || x == z || y == z)
				return 1;
			else
				return 2;
		}
	}
	else
		return -1;
}
int main()
{
	int a, b, c,i;
	for (i = 0; i < 2; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (org(a,b,c) == 0)
			printf("Equilateral triangle!\n");
		else if (org(a,b,c) == 1)
			printf("Isosceles triangle!\n");
		else if (org(a,b,c) == 2)
			printf("Ordinary triangle!\n");
		else if (org(a,b,c) == -1)
			printf("Not a triangle!\n");
	}
		
	return 0;
}
//#include<stdio.h>
//#include<iostream>
//int main() {
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//		if (a > 0 && b > 0 && c > 0 && (a + b) > c && (a + c) > b && (b + c) > a) {
//			//三边大于0且两边之和大于第三
//
//			if (a == b && b == c && a == c)
//				printf("Equilateral triangle!\n");
//			else if (a == b || a == c || b == c)
//				printf("Isosceles triangle!\n");
//
//			else
//				printf("Ordinary triangle!\n");
//
//		}
//		else {
//			printf("Not a triangle!\n");
//		}
//	}
//}
