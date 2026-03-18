#include <stdio.h>
int main() {
	int a[8];
	int asc = 1, desc = 1;
	
	for (int i = 0 ; i < 8; i++)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < 7; i++) {
		if (a[i] < a[i+1])
			desc = 0;
		if (a[i] > a[i+1])
			asc = 0;
		}
		
	if (asc)
		printf("ascending");
	else if (desc)
		printf("descending");
	else
	printf("mixed");
	
	return 0;
}
	