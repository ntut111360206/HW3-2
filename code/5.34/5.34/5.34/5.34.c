#include <stdio.h>
#include <stdlib.h>
int power(int a, int b);
int main()
{
	int num1, num2;
	printf("請依序輸入a的b次方:\n");
	scanf_s("%d %d", &num1, &num2);
	printf("%d的%d次方=%d", num1, num2, power(num1, num2));
	system("pause");
	return 0;
}
int power(int a, int b)
{
	int i,r=1;
	for (i = 1; i <= b; i++)
	{
		r = r * a;
	}
	return r;
}