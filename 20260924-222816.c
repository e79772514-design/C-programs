/*
name:EmmGithinji 
reg no:CT100/G/30693/26
date:24sep2026
desciption:promting data
*/ 

#include <stdio.h>

int main()
{
float height ; 
double bankbalance ; 
char phonenumber[10] ; 

printf ("enter the height in centimetres: ");
scanf ("%f",&height);

printf ("enter your bank_balance(ksh): ");
scanf ("%lf",&bankbalance);
 
printf ("enter the phone_number: ");
scanf ("%10s",&phonenumber);

printf ("the height is %.f \n" ,height);
printf ("the bank_balance is %.f \n",bankbalance);
printf ("the phone_number is %s \n",phonenumber);

return 0;
}
    