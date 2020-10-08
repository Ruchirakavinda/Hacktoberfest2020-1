#include <stdio.h>
#include <stdlib.h>

int main()
{

   int arr[3][4],r,c,sum=0,max=0;
   float avg;
   for(r=0;r<3;r++)
   {
       for(c=0;c<4;c++)
       {
           printf("Enter a value (%d,%d) ",r,c);
           scanf("%d",&arr[r][c]);
       }
   }
    for(r=0;r<3;r++)
   {
       for(c=0;c<4;c++)
       {
           printf("%d ",arr[r][c]);

       }
       printf("\n");}
       for(r=0;r<3;r++)
   {
       for(c=0;c<4;c++)
       {
          sum=sum+arr[r][c];
       }
   }
     for(r=0;r<3;r++)
   {
       for(c=0;c<4;c++)
       {
         if(max<arr[r][c])
            max=arr[r][c];
       }
   }
   avg=sum/12;

   printf("average=%.2f",avg);
    printf("Total=%d",sum);
    printf("max=%d",max);

}
