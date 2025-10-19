#include<stdio.h>
int main(){
    int id[10];
    int freq[1000]={0};
 
    for(int i=0;i<10;i++){
	    printf("Enter your number:");
		scanf(" %d",&id[i]);
	}
    for(int i=0 ;i<10;i++){
        freq[id[i]]++;
        if(freq[id[i]]>1){
            id[i]=-1;
        }
    }
    for(int i=0; i<10;i++){
    printf("\n%d", id[i]);
    }
    return 0;
}