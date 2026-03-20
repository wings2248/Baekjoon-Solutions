#include <stdio.h>
#include <string.h>
int main() {
	int n;
	char temp[21];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%s", temp);
		
		int len = strlen(temp);
		
		if (len >= 6 && len <= 9)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}