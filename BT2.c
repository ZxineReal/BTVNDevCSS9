#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int num;
	int index;
	int value;
	
	
	printf("Moi ban nhap vao vi tri can sua:\n");
	scanf("%d",&index);
	printf("Moi ban nhap vao gia tri can sua:\n");
	scanf("%d",&value);

	arr[index]=value;
	
	printf("Cac phan tu trong mang sau khi thay doi la: \n");
	
	for(int i=0; i<5; i++){
		printf("%d\t",arr[i]);
	}
	

}