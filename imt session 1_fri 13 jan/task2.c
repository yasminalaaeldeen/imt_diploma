#include<stdio.h>
void main (void)
{
int hrs,mainsal, finalsal;
printf("enter work hours\n");
scanf("%d", &hrs);
mainsal=hrs*50;
finalsal=mainsal*.9;
printf("salary before deduction= %d \n",mainsal);
hrs>30 ? printf("salary after deduction= %d \n",mainsal) : printf("salary after deduction= %d \n",finalsal);


}
