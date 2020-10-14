#include <stdio.h>
#include <stdlib.h>

struct itmedetails
{

    int code;
    char name[50];
    float price;
}item[3];
void store()
{
    int i;
   for(i=0;i<3;i++){
   printf("Enter the item number :");
   scanf("%d",&item[i].code);
   printf("Enter the name of item :");
   scanf(" %s",&item[i].name);
   printf("Enter the price of item :");
   scanf("%f",&item[i].price);
  }
}
void display()
{
    int count=0;
    int c;
    int i;
    printf("Enter the number of the item which you want to get details :");
    scanf("%d",&c);
    for(i=0;i<3;i++)
    {
        if(c==item[i].code)
        {
            printf("Item number : %d \n",item[i].code);

            printf("item price : %.2f \n",item[i].price);
            printf("Item name : %s \n",item[i].name);
            count=count+1;
        }

    }
    printf("count : %d \n",count);
}
int main()
{
    store();
    display();

}
