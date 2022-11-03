#include <stdio.h>
#include <stdlib.h>
int step = 0;
//(n, from, mid, to)
void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("%c to %c\n", A, C);
		step++;
	}
	else {
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}
int main() {
	int n;
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("%d",step);
}