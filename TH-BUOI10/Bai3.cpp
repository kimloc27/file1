#include <stdio.h>
#include <conio.h>
#include <string.h>

int TongN(int n);
int main()
{
	int i, n, tinhtongN;
	printf("\n Nhap mot so nguyen duong: ");
	scanf("%d", &n);
	tinhtongN = TongN(n);
	printf("\n Tong cac so tu 1 toi %d la: %d",n,tinhtongN);
	return 0;
}
int TongN(int n)
{
	int tinhtong;
	if (n==1)
	{
		return (1);
	}
	else 
	{
		tinhtong = n + TongN(n-1);
	}
	return (tinhtong);
}














