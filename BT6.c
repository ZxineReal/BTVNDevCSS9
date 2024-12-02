#include<stdio.h>

int main(){
	int arr[100][100];
	int num;
	int num2;
	int menu;
	int row,col;
	int sum =0;
	int prod=1;
	int maxSum=0;
	int maxRow=0;
	
	do{
		printf("         MENU         \n");
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2. In cac gia tri cua mang theo ma tran\n");
		printf("3. In cac phan tu la le va tinh tong\n");
		printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("5. In ra cac phan tu nam tren duong duong cheo chinh\n");
		printf("6. In ra cac phan tu nam tren duong cheo phu\n");
		printf("7. In ra dong co tong gia tri cac phan tu lon nhat\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban: \n");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				printf("Moi ban nhap vao so hang: \n");
				scanf("%d",&row);
				printf("Moi ban nhap vao so cot: \n");
				scanf("%d",&col);
				
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						printf("Moi ban nhap vao phan tu array[%d][%d]\t",i,j);
						scanf("%d",&arr[i][j]);
					}
				}
				break;
			case 2:
				printf("Cac phan tu trong mang la: \n");
				for(int k=0;k<row;k++){
					for(int l=0;l<col;l++){
						printf("%d\t",arr[k][l]);
					}
					printf("\n");
				}
				break;
			case 3:
				printf("Cac phan tu le trong mang la: \n");
				for(int m=0;m<row;m++){
					for(int n=0;n<col;n++){
						if(arr[m][n]%2!=0){
							printf("%d\t",arr[m][n]);
							sum+=arr[m][n];
						}
					}
				}
				printf("\n Tong cac so le la: %d\n",sum);
				break;
			case 4:
				prod = 1;
                printf("Cac phan tu tren duong bien la: \n");
                for (int i=0;i<row; i++) {
                    for (int j=0;j<col;j++) {
                        if (i==0 || i==row-1 || j==0 || j==col-1) {
                            printf("%d\t", arr[i][j]);
                            prod *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien la: %d\n", prod);
                break;
			case 5:
				printf("Cac phan tu nam tren duong cheo chinh la: \n");
				for(int o=0;o<col;o++){
					printf("%d\t",arr[o][o]);
				}
				break;
			case 6:
				 printf("Cac phan tu tren duong cheo phu la: \n");
                for (int i = 0; i < row && i < col; i++) {
                    printf("%d\t", arr[i][col - 1 - i]);
                }
                printf("\n");
                break;
			case 7:
                for (int i=0;i<row;i++) {
                    int currentSum = 0;
                    for (int j=0;j<col;j++) {
                        currentSum += arr[i][j];
                    }
                    if (i==0 || currentSum > maxSum) {
                        maxSum = currentSum;
                        maxRow = i;
                    }
                }
                printf("Dong co tong gia tri lon nhat la dong %d: \n", maxRow);
                for (int j = 0; j < col; j++) {
                    printf("%d\t", arr[maxRow][j]);
                }
                printf("\nTong cua dong nay la: %d\n", maxSum);
                break;
			case 8:
				printf("Thoat\n");
				break;
			default:
				printf("Khong hop le!!!\n");
		}
	} while(menu!=8);
}