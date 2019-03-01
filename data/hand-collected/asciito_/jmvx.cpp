#include <stdio.h>

int myatoi(const char* str) {
  int i = 0;
  int value = 0;
  while (str[i] != '\0') {
    int current = str[i] - 48;
    value = 10 * value + current;
    i++;
  } return value;
}
