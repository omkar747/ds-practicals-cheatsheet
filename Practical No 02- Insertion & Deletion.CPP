//Practical No 02- Insertion/ Deletion 

#include<stdio.h>
int main()
{
	int i,j,count,temp,n[25];
	printf("Enter the number of element : ");
	scanf("%d", &count);
	
	printf("Enter the %d integer : ", count);
	for(i=0;i<count;i++)
	{
		scanf("%d", &n[i]);
	}
	for(i=0;i<count;i++)
	{
		temp=n[i];
		j=j-1;
		while((temp<n[j]) && (j>=0))
		{
			n[j+1]=n[j];
			j=j-1;
		}
	}
	n[j+1]=temp;
	printf("Sorted Elements : ");
	for(i=0;i<count;i++)
	{
		printf("\t%d", n[i]);
	}
	return 0;
}
-------------------------------------------------
Deletion-

#include<stdio.h> 
#include<conio.h>
int main()
int a[20],i,n, loc;
clrscr(); 
printf("Enter the number of array element : ");
scanf("%d", &n);

printf("Enter the array element : ");
for (i=0; i<n; i++)
{
	scanf("%d", &a[i]);
}
printf("Enter the location for deletion : ");
scanf("%d", &loc); 
for(i=loc-1; i<n-1; i++)
{
	a[i]=a[i+1];
}
n--;
printf("Your Array elements are: "); 
for(i=0;i<n;i++)
{
	printf("\t%d", a[i]);
}
getch();
return 0;
} //End of Main function
--------------------------------------------------------