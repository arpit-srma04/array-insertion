#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],k,i,element,n;
printf("enter size of array:");
scanf("%d",&n);
printf("enter your elements here:");

for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter location you want to insert an element:");
scanf("%d",&k);
printf("enter element you want to insert:");
scanf("%d",&element);

for(i=n-1;i>=k;i--)
{
	a[i+1]=a[i];
	a[k]=element;
}
n=n+1;

for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
getch();
return 0;
}
