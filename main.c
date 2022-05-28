#include <stdio.h>

// なんかおかしい

int main() {
    char str[256];
    printf("Enter a formula: ");
    scanf("%[^\n]", str);

    char operator[1];
    int num1, num2;
    int result;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            i++;
            continue;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            num1 = 0;
            while (str[i] >= '0' && str[i] <= '9') {
                num1 = num1 * 10 + str[i] - '0';
                i++;
            }
        }
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            operator[0] = str[i];
            i++;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            num2 = 0;
            while (str[i] >= '0' && str[i] <= '9') {
                num2 = num2 * 10 + str[i] - '0';
                i++;
            }
        }
        switch (operator[0]) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
        }   
    }
    printf("Result: %d\n", result);
    return 0;
}
