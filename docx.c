#include<stdio.h>
int main(){
	printf("Hello World\n");
	for(int i=0;i<10;i++){
		printf("%d Hello\n",i);
	}
	int n=7;
	int* arr=(int*)malloc(n*sizeof(int));
	printf("Printing array created using malloc in C\n");
	for(int i=0;i<7;i++){
		printf("%d ",*(arr+i));
	}
}
