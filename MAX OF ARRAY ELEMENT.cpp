#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,max;
	int a[50];
	printf("\n\t\t--**VALUE INSERTION IN A ARRAY**--\n");
	printf("\n\tEnter the number of elements:");
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",& a[i]);
	}
	printf("\nArray elements are:");
	for(i=0;i<=n-1;i++)    // 1[a(0)],2[a(1)],3[a(2)],4[a(3)],5[a(4)] ---- n=5;i->0-4
	{
		printf("%d,",a[i]);
	}
	printf("\b ");
	max=a[0];
	for (i=0;i<=n-1;i++)//a(0)=1>max
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nMax is:%d",max);
}
