#include <stdio.h>
#include <string.h>
int main() {
	int n;
	char temp[30];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%s", temp);
		
		if (strcmp(temp, "Algorithm") == 0)
			printf("204\n");
		else if (strcmp(temp, "DataAnalysis") == 0)
			printf("207\n");
		else if (strcmp(temp, "ArtificialIntelligence") == 0)
			printf("302\n");
		else if (strcmp(temp, "CyberSecurity") == 0)
			printf("B101\n");
		else if (strcmp(temp, "Network") == 0)
			printf("303\n");
		else if (strcmp(temp, "Startup") == 0)
			printf("501\n");
		else if (strcmp(temp, "TestStrategy") == 0)
			printf("105\n");
	}
	return 0;
}