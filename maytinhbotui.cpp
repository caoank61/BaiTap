#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhap (int &a, int &b)
{
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
}
void menu (int a, int b)
{
    char choose,c, k;
    do{
        printf("\n------Chon Phep Tinh------");
        printf("\n+: Cong");
        printf("\n-: Tru");
        printf("\n*: Nhan");
        printf("\n/: Chia");
        printf("\n ");
        scanf("\n%c", &choose);
        switch (choose)
        {
        case '+': 
            printf("\n%d+%d= %d", a,b,a+b);
            break;
        case '-': 
            printf("\n%d+%d= %d", a,b,a-b);
            break;
        case '*': 
            printf("\n%d*%d= %d", a,b,a*b);
            break;
        case '/': 
            printf("\n%d/%d= %d", a,b,a/b);
            break;
        }
        printf("\n~Neu khong muon tiep tuc, nhan esc de thoat khoi chuong trinh~");
        k=getch();
        c=k;
    }
    while (c!=27);

}
int main(){
	int a,b;
	nhap(a,b);
	menu(a,b);
	
	return 0;
}
