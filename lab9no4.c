#include <stdio.h>

void swapValue(int *a,int *b,int *c);
void swapArray(int a[], int b[], int size);

int main(){
	int a[]={2,6};
	int b[]={4,5};
	int i;
	
	printf("Before swap function a:");
	for (i=0;i<2;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("Before swap function b:");
	for (i=0;i<2;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	swapArray(a,b,2);
	printf("After swap function a:");
	for (i=0;i<2;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("After swap function b:");
	for (i=0;i<2;i++){
		printf("%d ",b[i]);
	}
	return 0;
}

void swapArray(int a[],int b[], int size){
	int temp,i;
	for (i=0;i<size;i++){
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
