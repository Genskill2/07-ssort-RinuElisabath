#include<stdio.h>
#include<cs50.h>
void swap_max(int arr[], int l, int n)
{ int max=arr[n],temp;
  int position=n,i;
  for(i=n;i<l;i++)
  { if(arr[i]>max)
        {max=arr[i];
         position=i;
        }
   }
  temp=arr[position];
  arr[position]=arr[n];
  arr[n]=temp;
 } 
 
 
 void ssort(int arr[], int l)
 { for(int i=0;i<l;i++)
     { swap_max(arr,l,i);
     }
  
 }   
