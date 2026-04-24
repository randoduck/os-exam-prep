#include <stdio.h>
#include <stdlib.h>

void sort( int arr[], int n)
{ for(int i=0;i<n;i++)
   {for(int j=i+1;j<n;j++)
     {if(arr[i]>arr[j])
       { int temp=arr[j];
         arr[j]=arr[i];
         arr[i]=temp;}}}}
         
 int main() {
    int n, head, total = 0;

    printf("Enter number of requests: ");
    scanf("%d", &n);

    int req[n];
    printf("Enter requests:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &req[i]);

    printf("Enter initial head position: ");
    scanf("%d", &head);
    
    sort(req,n);
    
     printf("Sequence: %d -> ", head);
    int index=0;
    while(index < n && req[index]<=head)
    {index++;}
    
    for(int i=index;i<n;i++)
    {total+=abs(head-req[i]);
     head=req[i];
      printf("%d -> ", head);}
     
   //travelled fully right now 199 part 
   
    total=abs(head-199);
    head=199;
     printf("%d -> ", head);
     
     for(int i=index-1;i>=0;i--)
     {total+=abs(head-req[i]);
      head=req[i];
      printf("%d -> ", head);}
      printf("\nTotal Head Movement = %d\n", total);
      }
