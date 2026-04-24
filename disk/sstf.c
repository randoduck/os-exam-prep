#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,head,total=0;
  printf("Enter number of requests\n");
  scanf("%d",&n);
  int var[n],req[n];
  printf("Enter the requests\n");
  for(int i=0;i<n;i++)
  { scanf("%d",&req[i]);
    var[i]=0;}
   printf("Enter head position \n");
   scanf("%d",&head);
   //now we have all values 
//-----------------------------------------------------------took input 
   int d=0;
  printf("Sequence :\n");
   for(int i=0;i<n;i++)
   {    int index=-1,min=1000;
      for(int j=0;j<n;j++)
        { if(!var[j])
            { int d =abs(head-req[j]);
             if(d<min)
               { min=d;
                 index=j;}}}
            var[index]=1; //mark it visited using index cos var died
            total+=abs(head-req[index]);//travel there and add this to the  
            head=req[index];
             printf("%d->",head);}
 printf("The total movement is %d",total);
}

        
               