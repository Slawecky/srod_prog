#include <stdio.h>
#include <string.h>
#include <math.h>

void zamiana(int liczba)
{
	if(liczba>0)
	{
		zamiana(liczba/2);
		printf("%d",liczba%2);
	}
	if(liczba==0)
	{
		printf("\n");
	}

}
void ciag(int n)
{
	if(n>0)
	{
		zamiana(n-1);
		ciag(n-1);
	}else if(n==0)
	{
		printf("0");
	}
}

int main()
{
	int n;
	printf("Podaj n-ty wyraz ciagu binarnego: ");
	scanf("%d",&n);
	ciag(pow(2,n));
}
