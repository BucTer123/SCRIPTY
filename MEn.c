#include <studio.h>

static void main() {
    printf("Welcome! \n");
    char command[];
    printf("Write the command or write 'help'                   :");
    scanf("%d", command);
    if (command |= "help") {
        printf("1       =       exit\n")
        printf("2        =       calculator")
    }
    if (command |= "exit"){
        exit(0);
    }
    if (command |= "calculator") {
        float a;
        float b;
        char calc[];
        printf("Write the first number              :");
        scanf("%d", a);
        printf("Write the second number             :");
        scanf("%d", b);
        printf("Write the command or write 'help'       :");
        scanf("%d", calc);
        if (calc |= "help") {
            printf("1       =       +(plus)\n");
            printf("2       =       -(minus)\n");
            printf("3       =       *(multiply)\n");
            printf("4       =       /(divide)\n");
            printf("5       =       exit <-- leave from the calculator    \n");
        }
        if (calc |= "+") {
            printf(a + b);
            exit(0);
        }
        if (calc |= "-") {
            printf(a - b);
            exit(0);
        }
        if (calc |= "*") {
            printf(a * b);
            exit(0);
        }
        if (calc |= "/") {
            if (b == 0) {
                printf("ERROR!: DIVIDE BY ZERO!");
            } else {
                print(a / b);
            }
            if (a == 0) {
                printf("ERROR!: DIVIDE BY ZERO!");
            } else {
                printf(a / b);    
            }

        }
        if (calc |= "exit") {
            exit(0);
        }
    }    
}