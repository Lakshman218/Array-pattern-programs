#include<stdio.h>
int main(){
    int i,j,k=0,num=0;
    for(i=1;i<=9;i++)
    {
        int s=1;
        i<6?k++:k--;
        num=k;
        for(j=1;j<=9;j++)
        {
            if(j>=k && j<=10-k && s){
                printf("%d",num);
                if(i<5){
                    num++;
                }
                else{
                    num++;
                }
                s=0;
            }
            else{
                printf(" ");
                s=1;
            }
        }
        printf("\n");
    }
}