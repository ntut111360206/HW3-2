#include <stdio.h>
#include <stdlib.h>
int power(int a, int b);
int main()
{
	int num1, num2;
	printf("�Ш̧ǿ�Ja��b����:\n");
	scanf_s("%d %d", &num1, &num2);
	printf("%d��%d����=%d", num1, num2, power(num1, num2));
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