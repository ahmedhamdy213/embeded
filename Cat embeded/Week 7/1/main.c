#include <stdio.h>
#include <stdlib.h>
struct Employees{
int Salary;
int Bouns;
int deductins;
};
void main()
{
    struct Employees Mohsen ,Magdy ,Mariam;
    printf("Enter Details for Mohsen \n");
    printf("Enter Salary: ");
    scanf("%d", &Mohsen.Salary);
    printf("Enter Bouns: ");
    scanf("%d", &Mohsen.Bouns);
    printf("Enter deductins: ");
    scanf("%d", &Mohsen.deductins);
    printf("\nEnter Details for Magdy \n");
    printf("Enter Salary: ");
    scanf("%d", &Magdy.Salary);
    printf("Enter Bouns: ");
    scanf("%d", &Magdy.Bouns);
    printf("Enter deductins: ");
    scanf("%d", &Magdy.deductins);
     printf("\nEnter Details for Mariam \n");
    printf("Enter Salary: ");
    scanf("%d", &Mariam.Salary);
    printf("Enter Bouns: ");
    scanf("%d", &Mariam.Bouns);
    printf("Enter deductins: ");
    scanf("%d", &Mariam.deductins);
    printf("\nThe Total Salary of Mohsen is : %d \n ",(Mohsen.Salary + Mohsen.Bouns) - Mohsen.deductins );
    printf("\nThe Total Salary of Mohsen is : %d \n ",(Magdy.Salary + Magdy.Bouns) - Magdy.deductins );
    printf("\nThe Total Salary of Mohsen is : %d \n ",(Mariam.Salary + Mariam.Bouns) - Mariam.deductins );
    int TotalSalary = Mohsen.Salary + Magdy.Salary + Mariam.Salary;
    int TotalBouns = Mohsen.Bouns + Magdy.Bouns + Mariam.Bouns;
    int Totaldeductins = Mohsen.deductins + Magdy.deductins + Mariam.deductins;
    printf("\n The Total Salary in Finance Team = %d ",TotalSalary);
    printf("\n The Total Bouns in Finance Team = %d ",TotalBouns);
    printf("\n The Total deductins in Finance Team = %d ",Totaldeductins);
}
