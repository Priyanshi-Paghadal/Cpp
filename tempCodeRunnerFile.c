#include<stdio.h>
int main()
{
  int a[10],i,n,max=0;
  printf("how many record do you want insert in array:");
  scanf("%d",&n);
  for(i=0; i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
     if(a[i]>max)
     {
       max=a[i];
     }
  }
   printf("%d=max of array",max);
  return 0;
}