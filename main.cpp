#include <iostream>

void TrimRight(char* s) {
    if (s == nullptr) {
        return;
    }
    int i = strlen(s) - 1;
    while (i >= 0 && s[i] == ' ') {
        --i;
    }
    s[i + 1] = '\0';
}

void main() {
    setlocale(LC_ALL, "ru");
    char string[] = "char array with spaces      ";
    TrimRight(string);
}
