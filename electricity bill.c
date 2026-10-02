#include <stdio.h>

//function prototype 
float calculateBill(float units);

int main(){
float unitsConsumed, totalBill;
printf ("enter units consumed:");
scanf ("%f",& unitsConsumed);

//function call
totalBill=calculateBill(unitsConsumed);

printf ("\n");
printf ("Kenya Power Program \n");
printf ("================== \n");
printf ("unitsConsumed %.2f \n",unitsConsumed);
printf ("totalBill %.2f \n",totalBill);
printf ("=================== \n");

return 0;
}

//function definition 
float calculateBill(float units){
float bill;
if (units <=100){
bill=10*units;
}
else if (units>= 101 && units<=199){
bill=(100*10)+(units-100)*15;
}
else if(units>=200){
bill=(100*10)+(100*15)+(units-200)*20;
}
return bill;
}