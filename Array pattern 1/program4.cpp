#include <stdio.h>
int main()
{
    int i,j;
    char a[50]={'M','A','L','A','Y','A','L','A','M'};
    
    
    for(i=1;i<=9;i++)
    {
        for(j=0;j<i;j++)
        {
            
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}