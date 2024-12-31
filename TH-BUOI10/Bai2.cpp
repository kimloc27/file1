#include <stdio.h>
#include <conio.h>
#include <string.h>

long tinhgiaithua(int n)
{
	if (n>0)
	{
		return n * tinhgiaithua(n-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n;
	printf("\n Nhap so nguyen duong n: ");
	scanf("%d",&n);
	printf("\n Giai thua cua %d la : %d \n", tinhgiaithua(n));
}














