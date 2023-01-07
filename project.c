#include<stdio.h>

int Result;

int main(){
    int n = 1;
    int A, B;
    int count = 0;
    while(n>0){
        printf("Enter 1 if you would like to perform addition operation\nEnter 2 if you would like to perform subtraction operation\nEnter 3 if you would like to perform multiplication operation\nEnter 4 if you would like to perform division operation\nEnter -1 if you would like to exit\n");
        scanf("%d", &n);
        if(n==1){
            if(count == 0){
                printf("Enter two integers: ");
                scanf("%d%d", &A, &B);
                printf("\n%d + %d\n", A, B);
                Result = A + B;
                count++;
            }
            else{
                printf("Enter an integer: ");
                scanf("%d", &B);
                printf("\n%d + %d\n", Result, B);
                Result = Result + B;
                count++;
            }
        }
        else if(n==2){
            if(count == 0){
                printf("Enter two integers: ");
                scanf("%d%d", &A, &B);
                printf("\n%d - %d\n", A, B);
                Result = A - B;
                count++;
            }
            else{
                printf("Enter an integer: ");
                scanf("%d", &B);
                printf("\n%d - %d\n", Result, B);
                Result = Result - B;
                count++;
            }
        }
        else if(n==3){
            if(count == 0){
                printf("Enter two integers: ");
                scanf("%d%d", &A, &B);
                printf("\n%d * %d\n", A, B);
                Result = A * B;
                count++;
            }
            else{
                printf("Enter an integer: ");
                scanf("%d", &B);
                printf("\n%d * %d\n", Result, B);
                Result = Result * B;
                count++;
            }
        }
        else if(n==4){
            if(count == 0){
                printf("Enter two integers: ");
                scanf("%d%d", &A, &B);
                printf("\n%d / %d\n", A, B);
                Result = A / B;
                count++;
            }
            else{
                printf("Enter an integer: ");
                scanf("%d", &B);
                printf("\n%d / %d\n", Result, B);
                Result = Result / B;
                count++;
            }
        }
        else if(n>4){
            printf("Invalid operation\n");
        }
        else{
            printf("Final Result is %d\n", Result);
        }

    }

}