#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <switch> <n> <m>\n", argv[0]);
        return 1;
    }
    char op = argv[1][0]; 
    int n = atoi(argv[2]); 
    int m = atoi(argv[3]); 
    switch (op) {
        case '+':
            printf("%d\n", n + m);
            break;
        case '-':
            printf("%d\n", n - m);
            break;
        case '*':
            printf("%d\n", n * m);
            break;
        case '/':
            if (m == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            printf("%d\n", n / m);
            break;
        case '%':
            if (m == 0) {
                printf("Error: Modulo by zero\n");
                return 1;
            }
            printf("%d\n", n % m);
            break;
        case '<':
            printf("%s\n", n < m ? "True" : "False");
            break;
        case '>':
            printf("%s\n", n > m ? "True" : "False");
            break;
        case '=':
            printf("%s\n", n == m ? "True" : "False");
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    return 0;
}
