#include<stdio.h>
int main(){
	int arr[5];
	int n=5;
	int last;
	
	for(int i=0;i<n;i++){
		printf("Enter your number:");
		scanf(" %d",&arr[i]);
	}
	last=arr[4];
	
	for(int i=4;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=last;
	
	printf("Ouput-->");
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}

