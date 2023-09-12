#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Menu(){
    int choice;

    printf("Choice your type of operation:\n");
    printf("1. Numeric operation.\n");
    printf("2. Matrix operation.\n");
    printf("3. Exit.\n");
    scanf("%d", &choice);

    while (choice != 1 && choice != 2 && choice != 3)
    {
        printf("Please select a valide option!\n");
        scanf("%d", &choice);
    }
    if (choice == 3)
    {
        exit(0);
    }
    return choice;
}

void NumericOperation(){
    double first_number, second_number, result;
    char operand;
    printf("Select the operation: +, -, *, /:\n");
    scanf(" %c", &operand);

    while (operand != '+' && operand != '-' && operand != '/' && operand != '*')
    {
        printf("Please select a valide operation!\n");
        scanf(" %c", &operand);
    }
    printf("First Number: ");
    scanf("%lf", &first_number);
    printf("Second Number: ");
    scanf("%lf", &second_number);

    switch (operand)
    {
    case '-':
        result = first_number - second_number;
        break;
    case '+':
        result = first_number + second_number;
        break;
    case '*':
        result = first_number * second_number;
        break;
    case '/':
        if (second_number == 0){
            printf("Can't divide to 0!\n");
            exit(0);
        }
        result = first_number / second_number;
        break;
    }
    printf("%.2lf %c %.2lf = %.2lf", first_number, operand, second_number, result);
}
void MatrixOperation(){

}
int main(){
    int operation = Menu();
    if (operation == 1)
    {
        NumericOperation();
    } 
    else if (operation == 2)
    {
        MatrixOperation();
    }

    return 0;
}