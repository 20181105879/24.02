#include<stdio.h>
 int main()
{
  int N,K,i,j,temp,flag;
  scanf("%d %d\n",&N,&K);
  int date[N];
  for(i=0;i<N;i++)
  {
      scanf("%d",&date[i]);
  }
  for(i=0;i<K;i++)
  {
     flag=0;
     for(j=0;j<N-1;j++)
  {
        if(date[j]>date[j+1]) 
  {
           temp=date[j+1];
           date[j+1]=date[j];
           date[j]=temp;
         
  }
  }

 }
 for(i=0;i<N;i++)
 { 
    printf("%d",date[i]);
    if(i+1!=N) 
    {
     printf(" ");
    }
 }
 printf("\n");
}
