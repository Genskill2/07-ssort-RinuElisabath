#include<stdio.h>
#include<cs50.h>
void swap_max(int arr[], int l, int n)
{ int max=arr[n];
  int position,i;
  for(i=0;i<l;i++)
  { if(arr[i]>max)
        {max=arr[i];
         position=i;
        }
   }
  arr[position]=arr[n];
  arr[n]=max;
 } 
 
 
 void ssort(int arr[], int l)
 { for(int i=0;i<l;i++)
     { swap_max(arr,l,i);
     }
  
 }   
