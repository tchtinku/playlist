#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,a[10][10],b,c=0,p,q;
    printf("enter number of rows and columns \n");
    scanf("%d%d",&m,&n);
    printf("enter values for the array: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++);
        b=a[i][j];
        {
            for(p=0;i<m;i++)
            {
                for(q=0;j<n;j++);
                {
                    if(b==a[p][q])
                        c++;
                }
            }

            if(c==1)
                continue;
            else
                exit(0);

        }

    }
    printf("\n all the elements are distinct");

    return 0;
}

