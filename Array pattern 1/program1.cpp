// number and word
#include<stdio.h>
int main()
{
    int i,j,n=4;
    int num=1, alpha='A';
    
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("%C",alpha);
            }
            else
            {
                printf("%d",num);
            }
        }
        printf("\n");
        if(i%2==1)
        {
            alpha++;
        }
        else
        {
            num++;
        }
        
    }
        
}
