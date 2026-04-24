#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  int n,f;
   printf("Enter the pages ");
  scanf("%d",&n);
   printf("Enter the frames ");
  scanf("%d",&f);
  int page[n];
  
  printf("Enter the page seq ");
  for(int i=0;i<n;i++)
  { scanf("%d",&page[i]);}
  
  printf("Enter frames ");
  int frame[f],time[f],t=0,fault=0;
  for(int i=0;i<f;i++)
  { frame[i]=-1;}
  
  // basic stuff done now lets check init 
  // case hit 
  
  for(int i=0;i<n;i++)
  { int found=0;
     for(int j=0;j<f;j++)
     { if(frame[j]==page[i])
     {  found=1;
       time[j]=++t;
       break;}
       }
       
       if(!found)// check if empty page and also solve 
       { int pos=-1; // record position 
       
         for(int i=0;i<f;i++)
         {if(frame[i]==-1)
           pos=i; break;
           }
           
         if(pos==-1)
         { int min =time[0];
            pos=0;
          for(int i=1;i<f;i++)
          { if(time[j]<min)
             { min=time[f];
               pos=i;}}}
          // pos indicates free frame or a frame that we freed
          frame[pos]=page[i];
          time[pos]=++t;
          fault++;
          }
             printf("Page Faults = %d\n", fault);
          }
