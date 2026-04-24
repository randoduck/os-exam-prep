#include <stdio.h>
#include <stdlib.h>
 
// first fit is like best fit without the descending order sort so les go 

int main()
{ int b[10],max[10],alloc[10] = {0},need[10];
   int n, m, pid, mem;
   printf("Enter mem block no\n");
   scanf("%d",&n);
   printf("Enter mp rocess no\n");
   scanf("%d",&m);
   
   printf("Enter mem blocks \n");
   for(int i=0;i<n;i++){scanf("%d",&b[i]);}
   printf("Enter process blocks\n");
   for(int i=0;i<m;i++){scanf("%d",&max[i]);need[i]=max[i];}
   
   // most input taking is done now lets deal with pid and stuff
   // need to take continuous input from the user 
   printf("Enter npid and mem \n");
   while(scanf("%d",&pid)&&pid!=-1)
   { scanf("%d",&mem);
     // now we took process id and mem reqs should generate a report 
     printf("P%d requests %d\n Before :",pid,mem);
     for(int i=0;i<n;i++){printf("%d ",b[i]);}
     
     int index =-1;
     //displayed the before now finally 
     for(int i=0;i<n;i++)
     {if(b[i]>=mem){index=i;break;}}
     
     //so now we have the best mem block lets allocate 
     if(index!=-1)
     {b[index]-=mem;
     alloc[pid]=mem;
     need[pid]-=mem;}
     
     printf("P%d requests %d\n After:",pid,mem);
     for(int i=0;i<n;i++){printf("%d ",b[i]);}
     }
     
        printf("\nFinal Allocation:\n");
    for(int i = 0; i < m; i++)
        printf("P%d: %d\n", i, alloc[i]);
        
        // applying the safety check here 
        int total=0;
        for(int i=0;i<n;i++)
        {total+=b[i];}
        
        int safe=1;
        for(int i=0;i<m;i++)
        {// checking the need for every process 
         if(need[i]>total)
         { safe=0; break;}}
         
         if(safe){printf(" safe");}
         else {printf("Not safe");}
         }
     
   
