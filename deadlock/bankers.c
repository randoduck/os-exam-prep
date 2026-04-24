#include <stdio.h>

int main()
{ int max[5][3],alloc[5,3],need[5][3];
   int avail[3];
   int n=5,m=3;
   // Input Allocation Matrix
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &alloc[i][j]);

    // Input Max Matrix
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &max[i][j]);

    // Input Available Resources
    for(int j = 0; j < m; j++)
        scanf("%d", &avail[j]);

    // Need Matrix = Max - Allocation
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
            
            int finish[5]={0};
            int work[3];
               for(int j = 0; j < m; j++)
               {work[i]=avail[i];} //essentailly create a finished matrix
               // also create a temp of avail 
        // now defined completed 
        
        int completed=0;//used to keep track if all process are complete so 
        
        while(completed==n)
        {
          itn found =0;
          //ensuring we only touch unfinished processes 
      for(int j = 0; j < m; j++)
          if(finished[i]){continue;}
          // checking if needs are greater than avails 
          int j;
          for(j=0;j<m;j++)
          if(need[i][j]>work[j])
            {break;}
            
            if(j==m)//means all needs satisfied 
            {for(int k=0;k<m;k++)
            work[k]+=alloc[i][k];
            
            printf("p%d",i);
            finish[i]=1;
            found =1;
            completed++;
            }}
            
            if(!found){printf("Unsafe");return 0;
            
      }
      printf("safe");
      }
   
   
   step 1 define 
   step 2 take input 
   step 3 compute need matrix
   step 4 define finish and work , work is temp avail and finish is initialised with zeros and completed is also 0 but  we want it to be n soon 
   step 5 is statwt with a completed loop 
   have a falg found for safe detection 
   step 6 then check if a program is finish or not and only worj with unfihsend prohgs this is i loop 
   ensure
   step 7 needs > work and then break 
   step 8 after this it jumps to alloc part when j==m then allocate all resources to temp work which bellonged to alloc for that iteration 
   step 9 then increase completed count makrk found =1 and mark finish for that process  
   
          
          
            
