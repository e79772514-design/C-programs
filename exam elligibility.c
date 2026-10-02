#include <stdio.h>

//function prototype
void checkEligibility(float attendance, float marks);

int main(){
    float attendance, marks;
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    printf("Enter average marks: ");
    scanf("%f", &marks);
    //function call
    checkEligibility(attendance, marks);
    return 0;
}
//function definition
void checkEligibility(float attendance, float marks){
    if(attendance >=75 && marks >=40){
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }
}
