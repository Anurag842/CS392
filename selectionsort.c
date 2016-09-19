#include <stdio.h>
 
int main()
{
   int array[100], n, i, j, imin, temp,c;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
 
   printf("Enter %d integers\n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
 for(i=0;i<n-1;i++)
 {
   imin=i;
   for(j=i+1;j<n;j++)
   {
      if(array[j]<array[imin])
         imin=j;
   }
   temp=array[i];
   array[i]=array[imin];
   array[imin]=temp;
 }
 
   printf("Sorted list in ascending order:\n");
 
   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", array[c]);
 
   return 0;
}