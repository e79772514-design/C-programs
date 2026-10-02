#include <stdio.h>
#define PI 3.14159

//function prototype
void calculateCylinder(float radius, float height);

int main(){
    float radius, height;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Enter height: ");
    scanf("%f", &height);
    //function call
    calculateCylinder(radius, height);
    return 0;
}
//function definition
void calculateCylinder(float radius, float height){
    float volume, surface;
    volume = PI * radius * radius * height;
    surface = 2 * PI * radius * (radius + height);
    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surface);
}
