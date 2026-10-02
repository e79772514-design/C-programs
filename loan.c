#include <stdio.h>

//function prototype
void checkLoan(int age, float income);

int main(){
    int age;
    float income;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter annual income: ");
    scanf("%f", &income);
    //function call
    checkLoan(age, income);
    return 0;
}
//function definition
void checkLoan(int age, float income){
    if(age >=21 && income >=21000){
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
}
