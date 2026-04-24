#include <stdio.h>
#include <stdlib.h>

int main()
{ int head,n,total=0;
  printf("Enter no of reqs\n");
  scanf("%d",&n);
  int req[n],var[n];
  printf("ENter the reqs\n");
  for(int i=0;i<n;i++)
  { scanf("%d",&req[i]);
    var[i]=0;}
  printf("Enter the head \n");
   scanf("%d",&head);
  printf("The sequence is :\n");
  for(int i =0;i<n;i++)
  {// as res come thats how the distance travells so like 
   total+=abs(head-req[i]);//travelling
   head=req[i];
   printf("%d->",head);
   }
   printf("\n The total movement is : %d",total);
   }
