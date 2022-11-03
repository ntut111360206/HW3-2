#include <stdio.h>
#include <stdlib.h>
int lcm(int a, int b);
int main()
{
	int num1, num2;
	printf("块ㄢ计―程そ计:\n");
	scanf_s("%d %d", &num1, &num2);
	printf("lcm=%d",lcm(num1, num2));
	system("pause");
	return 0;
}
int lcm(int a, int b)
{
	int temp, c, d;
	c = a;
	d = b;
	while (b != 0) // 緇计ぃ0膥尿埃緇计0 
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return c * d / a;
}