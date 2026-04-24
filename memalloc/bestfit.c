#include <stdio.h>
#include <stdlib.h>

int main()
{ //best fit algorithm need 
  int b[10],max[10],alloc[10],need[10];
  int n,m,mem,pid;
  scanf("%d",&n);
    scanf("%d",&m);
  // now take input so 
  printf("enter mems\n");
  for(int i=0;i<n;i++)
  {scanf("%d",&b[i]);}
  printf("enter process\n");
  for(int i=0;i<m;i++)
  {scanf("%d",&max[i]);
   need[i]=max[i];}
  
  // most input is done now we take the pid and mem and sort and allocate 
  
    
    printf("Enter pid and mems\n");
  while(scanf("%d",&pid)&& pid!=-1)
  { scanf("%d",&mem);
    
    printf("\nP%d request %d\nBefore: ", pid, mem);
    for(int i = 0; i < n; i++) printf("%d ", b[i]);
    for(int i=0;i<n;i++)
    { for(int j=i+1;j<n;j++)
      { if(b[i]<b[j])
         { int t=b[i];b[i]=b[j];b[j]=t;}}}
         
    //sorting of mem blocks done now find best fit 
    int index=-1;
    for(int i=0;i<n;i++)
    {if(b[i]>=mem){index=i;}} 
    // since everyhting is sorted the second the mme mblock sjust better thats our index 
    
    // now allocation 
    b[index]-=mem;
    alloc[index]+=mem;
    need[index]-+mem;}
 printf("\nAfter: "); for(int i = 0; i < n; i++) printf("%d ", b[i]);
    
    // allocation done now safety check left 
    int total =0;
     for(int i=0;i<n;i++){ total+=b[i];}
     int safe =1;
     for(int i =0;i<m;i++)
     {//for each process is the need greater than avlsbe
       if(need[i]>total)
       {safe=0;break;}}
       
       if(safe){printf("Safe");}
       else{printf("Unsafe");}}
       
    
    
    
