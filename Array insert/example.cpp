#include<stdio.h>
int main(){
  int i,large,n=5,a[50]={1,4,2,8,6};
  large=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>large){
      large=a[i];
    }
  }
  printf("%d",large);
}