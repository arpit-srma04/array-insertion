#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,key,first,middle,last;
	
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter array elements:\n");
	
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 printf("enter element to search:\n");
	 scanf("%d",&key);
	 
	 first=0;
	 last=n-1;
	 middle=(first+last)/2;
	 
	 while(first<=last)
	 {
	 	if(a[middle]<key)
	 	{
	 		first=middle+1;
		 }
		 else if(a[middle]==key)
		 {
		 	printf("element is found on location %d\n",middle);
		 	break;
		 }
		 else
		 last=middle-1;
		 middle=(first+last)/2;
	 }
	 if(first>last)
	 {printf("element not found");
	 }
	 getch();
	 return 0;
}
