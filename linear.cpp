#include<conio.h>
#include<stdio.h>
void main()
{
    int arr[100],n,x;
    printf("Enter the Array");
    for(x=0;x<5;x++)
    {
        scanf("%d",&arr[x]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&n);
    for(x=0;x<5;x++)
    {
        if(n==arr[x])
        {
            printf("The element is found at %d at %d",x,x+1);
        }
    }
   getch();
}
