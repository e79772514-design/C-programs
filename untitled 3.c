    #include <stdio.h>

//function prototype 
float calculateTax(float grossSalary);

int main(){
float grossSalary,result,netSalary;
printf ("enter employees grossSalary: \t");
scanf("%f",&grossSalary);

//function call
result =calculateTax(grossSalary);
netSalary=grossSalary-result;

printf ("\n");
printf ("Employees Salary Program \n");
printf ("======================== \n");
printf ("grossSalary amount:ksh %.2f \n",grossSalary);
printf ("result: ksh %.2f \n",result);
printf ("net_pay: ksh %.2f \n",netSalary);
printf ("======================== \n");

return 0;
}

//function definition 
float calculateTax(float grossSalary){
float tax;
if(grossSalary<30000){
tax=0.05*grossSalary;
}
else if (grossSalary>=30000 && grossSalary<=59999){
tax=0.1*grossSalary;
}
else if (grossSalary>=60000){
tax=0.15*grossSalary;
}
return tax;
}