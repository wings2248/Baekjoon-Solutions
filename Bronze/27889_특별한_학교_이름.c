#include <stdio.h>
#include <string.h>
int main() {
	char word[5];
	scanf("%s", word);
	
	if (strcmp(word, "NLCS") == 0)
		printf("North London Collegiate School");
	else if (strcmp(word, "BHA") == 0)
		printf("Branksome Hall Asia");
	else if (strcmp(word, "KIS") == 0)
		printf("Korea International School");
	else if (strcmp(word, "SJA") == 0)
		printf("St. Johnsbury Academy");
	return 0;
}