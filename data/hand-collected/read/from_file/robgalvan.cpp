#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int read_int() {
  char buf[10];
  fgets(buf, sizeof(buf), stdin);
  return atoi(buf);
}
