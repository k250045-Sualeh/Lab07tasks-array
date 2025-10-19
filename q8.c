#include<stdio.h>
int main(){
	char str[500];
	printf("Enter characters\n");
	scanf("%[^A-Za-z]",str); 
	printf("Your non-alphabetic input was: %s",str);
	return 0;

}
