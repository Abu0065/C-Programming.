#include <stdio.h>
int main() {
    float basic_salary, da, hra, total_salary;
    printf("Enter Basic Salary: \n");
    scanf("%f", &basic_salary);
    if (basic_salary == 30000 ) {
        da = 30000*0.20;
        hra = 10000;
    }
    else if (basic_salary==40000){
        da=40000*0.25;
        hra=150000;
    } 
    else {
        printf("Invalid basic salary entered. \n");
        return 1;
    }
    total_salary=basic_salary+da+hra;
    printf("Total Salary: %0.2f\n", total_salary);
    return 0;
}
