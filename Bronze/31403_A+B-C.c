#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c;
	char s[30];
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d\n", a + b - c);
	sprintf(s, "%d%d", a, b);
	
	int ab = atoi(s);
	printf("%d", ab - c);
	
	return 0;
}