#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Menu(){
    int choice;
    printf("Choice your type of operation:\n");
    printf("1. Numeric operation.\n");
    printf("2. Matrix operation.\n");
    scanf("%d", &choice);
    return choice;
}

int main(){
    int operation = Menu();
    printf("%d", operation);
    return 0;
}