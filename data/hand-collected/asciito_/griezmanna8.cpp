#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int my_atoi(char* str) {
  if (str == NULL)                      // 差错处理
    return 0xfffffff;

  char* cur = str;
  while (isspace(*cur))                   // 跳过空格
    ++cur;

  int flag = 1;
  if (*cur == '-') {                    // 正负号的判断
    flag = -1;
    ++cur;
  } else if (*cur == '+') {   
    flag = 1;
    ++cur;
  }

  int sum = 0;
  while (*cur != '\0') {                // 开始判断
    if (*cur >= '0' && *cur <= '9') {
      sum = 10 * sum + *cur - '0';
      ++cur;
    } else {
      break;
    }
  }
  return flag * sum;
}
