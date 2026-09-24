//variables and data types

#include <stdio.h>

int main(){
//declare and initialize variables
char grade ; //%c
char name[18] ={"Emmanuel Githinji"}; //%s
int age =20; //%d
float marks =340; //%f
double pi =3.142; //%lf

printf ("enter your grade: \t");
scanf ("%c", &grade);

printf ("enter your name: \t");
scanf ("%s", &name);

printf ("enter your age: \t");
scanf ("%d", &age);

printf ("enter your marks: \t");
scanf ("%f", &marks);

printf ("enter the value of pi: \t");
scanf ("%lf", &pi);

printf ("the grade is %c \n" ,grade);
printf ("my name is %s \n", name);
printf ("i am %d years old \n", age);
printf ("i scored %.2f \n", marks);
printf ("the value of pi is %.3lf \n", pi);

return 0;
}







