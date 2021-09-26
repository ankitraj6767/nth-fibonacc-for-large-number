#include<stdio.h>
#define N 1000
int main()
{
 int n;
 printf("Enter number n ");
 scanf("%d",&n);
 int a[N]={0};
 int b[N]={0};
 b[N-1]=1;
 int nterm[N]={0};
 for(int i=1;i<=n;i++){
  int count =0;
  for(int j=N-1;j>=0;j--){
   nterm[j]=(a[j]+b[j])%10+count;
   count=(a[j]+b[j])/10;
  }
  
  for(int k=N-1;k>=0;k--){
   a[k]=b[k];
   b[k]=nterm[k];
  }
 }
 int i=0;
 for ( i = 1; i < N; i++){
 if (a[i] != 0 || a[i - 1] != 0){
   break;
  }
  }
  printf("%dth no of fibonacci series is: ",n);
 for(int j=i;j<N;j++){
  printf("%d",a[j]);
 }
 
}