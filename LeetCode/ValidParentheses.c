#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) {
        return false;
    }

    char stack[10001];
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                return false;
            }

            char topChar = stack[top--];

            if (c == ')' && topChar != '(') {
                return false;
            }
            if (c == ']' && topChar != '[') {
                return false;
            }
            if (c == '}' && topChar != '{') {
                return false;
            }
        }
    }

    return (top == -1);
}
