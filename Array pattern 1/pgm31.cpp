// word pattern
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
    int i,j;
    char a[50];
    printf("Enter a word ");
    scanf("%s",a);
    int n=strlen(a);
   for(i=0;i<n-1;i++){
        for(j=0;j<i;j++){
            printf("%c",a[j]);
       }
       printf("\n");
   }
   for(i=n-2;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
       }
       printf("\n");
   }
    
    
}