#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a;
	printf("英文大小寫轉換:\n");
	scanf_s("%c", &a);
	if (a >= 'A' && a <= 'Z')
	{
		a += 32;
		printf("%c", a);
	}
	else
	{
		a -= 32;
		printf("%c", a);
	}
	system("pause");
	return 0;
}