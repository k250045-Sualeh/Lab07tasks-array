#include<stdio.h>
int main(){
	char str[500];
	printf("Enter characters\n");
	scanf("%[^A-Za-z]",str); //any alphabet or characters entered after an alphabet would not be stored
	printf("Your non-alphabetic input was: %s",str);
	return 0;
}