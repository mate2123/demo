#include<stdio.h>
void main()
{
int i=0,j,k;
int arr[5];
printf("Enter the numbers\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<4;i++)
{

    for(j=0;j<4;j++)
    {
     if(arr[j]<arr[j+1])
    {

        k=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=k;

    }
    }
}
printf("Your array is...\n");
for(i=0;i<5;i++)
{
    printf("\n%d",arr[i]);
}
}


