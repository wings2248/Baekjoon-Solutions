#include <stdio.h>
#include <ctype.h>
int main() {
	char word[100];
	scanf("%s", word);
	
	for(int i = 0; word[i] != '\0'; i++) {
		if(word[i] >= 'a' && word[i] <= 'z')
			word[i] = toupper(word[i]);
		else if(word[i] >= 'A' && word[i] <= 'Z')
			word[i] = tolower(word[i]);
	}
	printf("%s", word);
	return 0;
}