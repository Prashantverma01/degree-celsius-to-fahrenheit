#include <stdio.h>

//Compiler version gcc  6.3.0

void main()
{
  float cel,fren;
  
  printf("Enter any tempture to change to Fahrenheit \n");
  scanf("%f",&cel);
  
  fren=(cel*9/5)+32;
  
  printf("The temperature in Fahrenheit is %f\n",fren);
  
  getch();
  
}
