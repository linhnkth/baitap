#include <stdio.h>
#include <stdlib.h>

int tinhnuachuvitamgiac(int a, int b, int c) {
    return (a + b + c)/2;
}
int main() {
    int tinhtongnuachuvitamgiac;
    int a, b, c;
    printf("nhap canh thu nhat: \n");
    scanf("%d", &a);
    printf("nhap canh thu hai: \n");
    scanf("%d", &b);
    printf("nhap canh thu ba: \n");
    scanf("%d", &c);
    if (a <= 0, b <= 0, c <= 0) {
        printf("khong thich hop");
        exit(1);
    }
    if ((a + b) < c, (a + c) < b, (b + c) < a) {
        printf("sai");
        exit(1);
    }printf("tong nua chi vi tam giac:", tinhnuachuvitamgiac(a, b, c));
    tinhnuachuvitamgiac(a, b, c);
    return 0;
}