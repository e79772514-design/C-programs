#include <stdio.h>

//function prototype
float calculateWaterBill(float units);

int main(){
    float units, bill;
    printf("Enter water units consumed: ");
    scanf("%f", &units);
    //function call
    bill = calculateWaterBill(units);
    printf("Total water bill: %.2f KES\n", bill);
    return 0;
}
//function definition
float calculateWaterBill(float units){
    float bill;
    if(units <=30){
        bill = units * 20;
    }
    else if(units <=60){
        bill = (30 * 20) + (units - 30) * 25;
    }
    else{
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30;
    }
    return bill;
}
