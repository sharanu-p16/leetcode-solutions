#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function definition comes BEFORE main()
bool isValid(char* s) {
    int len = strlen(s);
    char stack[len + 1];
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            top++;
            stack[top] = c;
        } else {
            if (top == -1) {
                return false;
            }
            char topChar = stack[top];
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false;
            }
            top--;
        }
    }
    return top == -1;
}

int main() {
    bool result = isValid("()[]{}");
    printf("Result: %s\n", result ? "true" : "false");
    return 0;
}