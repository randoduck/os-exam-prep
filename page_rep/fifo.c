#include <stdio.h>

int main()
{ int n,f;
  printf("Enter no of pages");
  scanf("%d",&n);
  printf("Enter number of frames");
  scanf("%d",&f);
  int page[n];
  // take the page string references 
  printf("Enter page string references ");
  for(int i=0;i<n;i++)
  { scanf("%d",&page[i]);}
  
  int frame[f],fault=0,front=0; // very imp line 
  
  for(int i=0;i<f;i++)
  { frame[i]=-1;}
  
  for(int j=0;j<n;j++)
  { int found =0 ;
    for(int i=0;i<f;i++){
     if(page[j]==frame[i])
     { found=1;break;}}
     
     if(!found)
     { frame[front]=page[j];
       front=(front+1)%f;
       fault++;}
       }
       printf("Page Faults = %d\n", fault); }
