#include<stdio.h>

int main(){
	int arr[100];
	int num;
	int index;
	
	printf("Moi ban nhap vao so phan tu trong mang:\n");
	scanf("%d",&num);
	
	for(int i=0;i<num;i++){
		printf("Moi ban nhap vao phan tu thu %d cua mang: \n",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Moi ban nhap vao vi tri muon xoa:\n");
	scanf("%d",&index);

	for(int i=index; i<num; i++){
		arr[i]=arr[i+1];
	}
	
	printf("Cac phan tu trong mang sau khi thay doi la: \n");
	
	for(int i=0; i<num-1; i++){
		printf("%d\t",arr[i]);
	}
	

}