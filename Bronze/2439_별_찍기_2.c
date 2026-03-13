#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}