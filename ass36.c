#include<conio.h>
#include<stdio.h>
void main()
{ int i,j;
for (i=1;i<=5;i++)
{
    for(j=5;j>=i;j--)
    {
        printf("%d",i);
    }
    printf("\n");
}
}
/*
#include<conio.h>
#include<stdio.h>
void main()
{ int i,j,k;
for (i=1;i<=5;i++)
{
    for(k=1;k<i;k++)
    printf(" ");
    for(j=5;j>=i;j--)
    {
        printf("%d",i);
    }
    printf("\n");
}
}
*/