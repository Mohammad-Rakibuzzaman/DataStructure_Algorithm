#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=1;
    k=(2*n)-1;
    int r=n-1;

    for(int i=1;i<=n;i++)
    { 

        for(int j=1;j<=k;j++)
        {
            printf("*");
        }

        printf("\n");
        k=k-2;
        
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        s++;  
               
        
    }


    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=s;j++)
    //     {
    //         printf(" ");
    //     }

    //     for(int j=1;j<=k;j++)
    //     {
    //         printf("*");
    //     }
        
    //     s--;
    //     k+=2;
    //     printf("\n");
        
    // }

    return 0;
}