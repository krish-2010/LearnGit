#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
	int val;
	struct TreeNode *right,*left;
};
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
	printf("\nHi, There\n");
}
