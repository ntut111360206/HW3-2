#include <stdio.h>
#include <stdlib.h>
unsigned long long fib1(int a)
{
	unsigned long long fib[99],i;
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	for (i = 3; i <= a; i = i + 1)
		fib[i] = fib[i - 1] + fib[i - 2];
	return fib[a];
}
int main()
{
	int b;
	scanf_s("%d", &b);
	printf("%llu", fib1(b));
	system("pause");
	return 0;
}


