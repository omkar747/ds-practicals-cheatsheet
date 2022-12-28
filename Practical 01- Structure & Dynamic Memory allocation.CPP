//Structure- Practical 01 

#include<stdio.h>
struct empolyee
{
	int id;
	char name;
	float salary;
}e1;
int main()
{
	printf("Enter the information about Empolyee: ");
	printf("\nEmpolyee id Number : ");
	scanf("%d", &e1.id);
	printf("Empolyee Name : ");
	scanf("%s", &e1.name);
	printf("Empolyee Salary : ");
	scanf("%f", &e1.salary);

	printf("Employee Information :\n");
	printf("Empolyee id number : %d\n",e1.id);
	printf("Empolyee Name : %s\n", e1.name);
	printf("Empolyee Salary : %.2f",e1.salary);

getch();
return 0;

}
------------------------------------------------------------
Malloc-

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int i,sum=0,size;
	int *ptr;
	clrscr();

	printf("Enter the size of array : ");
	scanf("%d", &size);

	ptr=(int*)malloc(size*sizeof(int));

	printf("Enter the array element : ");
	for(i=0;i<size;i++)
	{
		scanf("%d", ptr+i);
	}
	for(i=0;i<size;i++)
	{
		sum+=*(ptr+i);
	}
	printf("Your entered element are : ");
	for(i=0;i<size;i++)
	{
		printf("\t%d", *(ptr+i));
	}
	printf("\nSUM = %d", sum);
	getch();
	return 0;
}
--------------------------------------------------------------
Calloc -

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,mul=1,size;
	int *ptr;
	clrscr();

	printf("Enter the size of size of array : ");
	scanf("%d", &size);

	ptr=(int*)calloc(size,sizeof(int));

	printf("Enter the elements of array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<size;i++)
	{
		mul*=*(ptr+i);
	}
	printf("Your Entered Element are : ");
	for(i=0;i<size;i++)
	{
	      printf("\t%d", *(ptr+i));
	}
	printf("\nMultiplication = %d", mul);
	getch();
	return 0;

}
-----------------------------------------------------------------
// Dynamic Memory Allocation [REALLOC() & Free()] *

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void print(int*ptr,int n)
{
	int i;
	printf("Your Entered Element are : ");
	for(i=0;i<n;i++)
	{
		printf("\t%d", *(ptr+i));
	}
	printf("\n");
}

void read(int*ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d", ptr+i);
	}
}

int main()
{
	int i,mul=1,size1,size2;
	int *ptr;
	clrscr();
	printf("Enter the size of array : ");
	scanf("%d", &size1);

	ptr=(int*)calloc(size1,sizeof(int));

	printf("Enter the array element : ");
	read(ptr,size1);
	print(ptr,size1);
	printf("Enter the size new if array : ");
	scanf("%d", &size2);

	realloc(ptr,size2);
	printf("Enter the Element new of array : ");
	read(ptr,size2);
	print(ptr,size2);

	free(ptr);
	printf("\nMemory freed !");

	getch();
	return 0;

} //End of main function
----------------------------------------------------------------
