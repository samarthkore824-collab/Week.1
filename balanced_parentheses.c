#include <stdio.h>

int main() {
    char s[50], stack[50];
    int i, top = -1;

    printf("Enter expression: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if (top == -1) {
                printf("Not Balanced");
                return 0;
            }
            if ((s[i] == ')' && stack[top] != '(') ||
                (s[i] == '}' && stack[top] != '{') ||
                (s[i] == ']' && stack[top] != '[')) {
                printf("Not Balanced");
                return 0;
            }
            top--;
        }
    }

    if (top == -1)
        printf("Balanced");
    else
        printf("Not Balanced");

    return 0;
}
