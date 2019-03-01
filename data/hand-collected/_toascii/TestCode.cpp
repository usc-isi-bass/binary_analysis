#include <stdio.h>
#include <stdlib.h>

char* my_itoa(int num) {
  char* str = (char*)malloc(64);

  size_t i = 0;
  while (1) {
    int tmp = num % 10;
    str[i++] = tmp + '0';
    num /= 10;
    if (num == 0)
      break;
  }

  size_t left = 0;
  size_t right = i - 1;
  while (left < right) {
    char tmp = str[left];
    str[left] = str[right];
    str[right] = tmp;
    ++left;
    --right;
  }

  return str;
}
