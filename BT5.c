#include <stdio.h>

int main() {
    int arr[100];
    int num = 0;
    int menu;
    int index, value;
    int sum, num3, min, max;
    int count2;

    do {
        printf("\n        MENU        \n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu \n");
        printf("2. In ra cac phan tu dang quan li \n");
        printf("3. In ra cac phan tu chan va tinh tong \n");
        printf("4. In ra phan tu lon nhat va nho nhat trong mang \n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong \n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do \n");
        printf("7. Them mot phan tu vao vi tri chi dinh \n");
        printf("8. Thoat \n");
        printf("Lua chon cua ban: \n");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Moi ban nhap vao so luong phan tu: ");
                scanf("%d", &num);
                for (int i = 0; i < num; i++) {
                    printf("Moi ban nhap vao phan tu thu %d\n ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Cac phan tu trong mang la:\n");
                for (int i = 0; i < num; i++) {
                    printf("arr[%d]: %d\n", i, arr[i]);
                }
                break;

            case 3:
                sum = 0;
                printf("So chan la:\n");
                for (int i = 0; i < num; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d\n", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("Tong cac so chan la: %d\n", sum);
                break;

            case 4:
                if (num == 0) {
                    printf("Mang rong, moi ban chon 1 de nhap phan tu vao mang\n");
                } else {
                    min = arr[0];
                    max = arr[0];
                    for (int i = 1; i < num; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("So lon nhat la: %d\n", max);
                    printf("So nho nhat la: %d\n", min);
                }
                break;

            case 5:
                sum = 0;
                printf("So nguyen to:\n");
                for (int i = 0; i < num; i++) {
                    int prime = 1;
                    if (arr[i] <= 1) {
                        prime = 0;
                    } else {
                        for (int j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                prime = 0;
                                break;
                            }
                        }
                    }
                    if (prime) {
                        printf("%d\n", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("Tong cac so nguyen to la: %d\n", sum);
                break;

            case 6:
                printf("Moi ban nhap vao so can kiem tra: ");
                scanf("%d", &num3);
                count2 = 0;
                for (int i = 0; i < num; i++) {
                    if (arr[i] == num3) {
                        count2++;
                    }
                }
                printf("Phan tu %d lap lai %d lan\n", num3, count2);
                break;

            case 7:
                printf("Moi ban nhap vao vi tri can them: \n");
                scanf("%d", &index);
                    printf("Moi ban nhap vao gia tri can them: \n");
                    scanf("%d", &value);
                    for (int i = num; i > index; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = value;
                    num++;
                
                break;

            case 8:
                printf("Thoat\n");
                break;

            default:
                printf("Khong hop le!!!\n");
        }
    } while (menu != 8);

    return 0;
}
