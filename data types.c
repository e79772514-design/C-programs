//variables and data types 

#include <stdio.h>

int main(){
//declare and initialize variables 
float height =5; //%c
double balance =3000; //%s
char number[10] ={"0716930281"}; //%f

printf ("enter the height: \t");
scanf ("%c",height);

printf ("enter your balance: \t");
scanf ("%s",balance);
 
printf ("enter the number: \t");
scanf ("%f",number);

printf ("the height is %c \n" ,height);
printf ("the balance is %s \n",balance);
printf ("the number is %f \n",number);

return 0;
}
    