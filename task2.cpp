#include<stdio.h>
int main(){
	int arr[10];
	int n;
	int count=0;
	for(int i=1;i<11;i++){
	printf("Entery number %d:",i);
	scanf(" %d",&arr[i]);
	}
 	printf("Which number do u want to search:");
 	scanf(" %d",&n);
 	for(int i=1;i<11;i++){
 		if(arr[i]==n){
 		count++;
		}
	}	
	if(count>=1){
 	printf("Your number %d is repeated %d times",n,count);
 	}
 	else{
 		printf("your number is not in the array");
	}
	return 0;
}

