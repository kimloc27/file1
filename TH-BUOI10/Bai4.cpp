#include <stdio.h>
#include <conio.h>
#include <string.h>
void nhapmang(int a[50], int n, int i)
{
	if (i == n)
	{
		return;
	}
	printf("\n Nhap phan tu thu %d: ", i + 1);
	scanf("%d", &a[i]);
	nhapmang(a, n, i + 1);
}
void xuatmang(int a[50], int n, int i)
{
	if (i == n)
	{
		return;
	}
	printf("\t %d", a[i]);
	xuatmang(a, n, i + 1);
}
int main()
{
	int n;
	printf("\n So luong phan tu cua mang: ");
	scanf("%d",&n);
	
	int a[50];
	nhapmang(a, n, 0);
	printf("\n Mang vua nhap lai: ");
	xuatmang(a, n, 0);
	getch();
	return 0;
}



























