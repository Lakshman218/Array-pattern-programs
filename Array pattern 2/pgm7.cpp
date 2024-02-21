//print sum
#include<stdio.h>
int main(){
    int i,j,a[50],n,sum1=0,sum2=0,count1=0,count2=0,flag,avg1,avg2;

    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter values ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            if(i==n-1){
                n=n;
            }
            else if(i==n-2){
                n=n-1;
            }
            else{
                for(j=i;j<n;j++){
                    a[i+1]=a[i+3];
                    a[i+2]=a[i+4];
                }
                n-=2;
            }
        }
    }
    // for(i=0;i<n;i++){
    // printf("%d",a[i]);
    // }
    for(i=0;i<n;j++)
        {
            if(a[i]%2==0){
                sum1=sum1+a[i];
                count1++;
            }
            // else{
            //     sum2=sum2+a[i];
            //     count2++;
            // }
        }
        avg1=sum1/count1;
        avg2=sum2/count2;
        printf("even number and avg is %d %d",avg1,count1);
        printf("odd number and avg is %d %d",avg2,count2);


}

