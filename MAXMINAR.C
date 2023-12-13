#include<stdio.h>
#include<conio.h>
void main()
{
	int max=0,min=5000;
	int no[100],n,i;

	clrscr();

	printf("Enter no : ");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		printf("Enter value:");
		scanf("%d",&no[i]);

		if(no[i]>max)
		{
			max=no[i];
		}

		if(no[i]<min)
		{
			min=no[i];
		}
	}

	printf("\n max value = %d",max);
	printf("\n min value = %d",min);

	getch();


}