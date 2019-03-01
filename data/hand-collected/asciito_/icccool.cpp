#include <stdio.h>

int isspace1(char c);
int isdigit1(char c);
double atof(char* s);

int isspace1(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

int isdigit1(char c) {
    return (c >= '0' && c <= '9');
}

double atof(char* s) {
    int i = 0, sign;
    double val, power;
    for (i = 0;isspace1(s[i]);i++);
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }
    for (val = 0.0;isdigit1(s[i]);i++) {
        val = 10.0 * val + (s[i] - '0');
    }
    if (s[i] == '.') {
        i++;
    }
    for (power = 1.0; isdigit1(s[i]);i++) {
        val = 10 * val + (s[i] - '0');
        power *= 10;
    }
    return sign * val / power;
}