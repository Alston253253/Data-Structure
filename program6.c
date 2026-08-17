#include<stdio.h>
void main()
{
    int a[20],i,pos,val,n;
    printf("\n Enter Limit:");
    scsnf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Value %d:",i=1);
        scanf("%d",&a[i]);

    }
    printf("\nEnter position at which you want to insert value:");
    scanf("%d",&pos);
    pos=pos-1;
    printf("\nEnter New Value to be inserted:");
    scanf("%d",&val);

    for(i=0;i<n+1;i++)


    printf("Enter New Value to be inserted: ");
    scanf("%d", &val);


    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = val;

    n++;

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


