#include<stdio.h>
#include <stdbool.h>

int main(){

    char operator;

    double num1;
    double num2;

    while (true){

        operator;

        num1 = 0;
        num2 = 0;

        int answer;

        printf("Write numb: ");
        scanf("%d", &num1);

        bool t = true;
        while (t){  
            scanf("%c", &operator);
            switch (operator){
                case '+':
                    printf("Write adder: ");
                    scanf("%d", &num2);
                    printf("The Soulution is: %d", num1 + num2);
                    t = false;
                    break;
                
                case '-':
                    printf("Write substracter: ");
                    scanf("%d", &num2);
                    printf("The Soulution is: %d", num1 - num2);
                    t = false;
                    break;

                case '*':
                    printf("Write multiplyer: ");
                    scanf("%d", &num2);
                    printf("The Soulution is: %d", num1 * num2);
                    t = false;
                    break;

                case '/':
                    printf("Write divider: ");
                    scanf("%d", &num2);
                    printf("The Soulution is: %d", num1 / num2);
                    t = false;
                    break;

                default:
                    printf("Type one of the operators: +, -, *,/ : ");
                    break;
            }
        }
        printf("\nExit?");
        printf("\n1 for yes 2 or for No: ");
        while (true){
            answer = 0;
            scanf("%d", &answer);
            if(answer == 1 || answer == 2){
                break;
            } else{
                printf("Only a 1 for yes 2 or for No: ");
            }
        }
    
        if(answer == 2){
            return 0;
        }
    }
}