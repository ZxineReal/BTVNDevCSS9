#include<stdio.h>

int main(){
	int arr[100];
	int num;
	int menu;
	int index;
	int value;
	int count = 0;
	
	do{
		printf("        MENU        \n");
		printf("1. Nhap vao mang \n");
		printf("2. Hien thi mang \n");
		printf("3. Them phan tu \n");
		printf("4. Sua phan tu \n");
		printf("5. Xoa phan tu \n");
		printf("6. Thoat \n");
		printf("Lua chon cua ban: \n");
		scanf("%d",&menu);
	
		switch(menu){
			case 1:
				printf("Moi ban nhap vao so luong phan tu: \n");
				scanf("%d",&num);
				
				for(int i=0; i<num; i++){
					printf("Moi ban nhap vao phan tu thu %d\n",i+1);
					scanf("%d",&arr[i]);
					count++;
				}
				break;
			case 2:

				
				printf("Cac phan tu trong mang la: \n");
				for(int j=0;j<num;j++){
					printf("array[%d]: %d\n",j+1,arr[j]);
				}
				
				break;
			case 3:
				printf("Moi ban nhap vao vi tri can them:\n");
				scanf("%d",&index);
				printf("Moi ban nhap vao gia tri can them:\n");
				scanf("%d",&value);
	
				if(index>num){
				for(int k=0;k<num;k++){
					arr[k]=arr[k+1];
				}
				}else{
				for(int l=num; l>index; l--){
				arr[l]=arr[l-1];
				}
	
				}
			arr[index]=value;
			num+=1;
				break;
			case 4:
				printf("Moi ban nhap vao vi tri can sua:\n");
				scanf("%d",&index);
				printf("Moi ban nhap vao gia tri can sua:\n");
				scanf("%d",&value);

				arr[index]=value;
				break;
			case 5:
				printf("Moi ban nhap vao vi tri muon xoa:\n");
				scanf("%d",&index);

				for(int m=index; m<num; m++){
				arr[m]=arr[m+1];
				num--;
				count--;
				}
				break;
			case 6:
				printf("Thoat\n");
				break;
			default:
				printf("Khong hop le!!!!");
	}
		}
	while(menu!=6);
	
}