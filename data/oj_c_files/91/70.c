#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main()
{
    char data[101];
    char output[101];
    gets(data);
    int len = strlen(data);
    int i;
    
    for(i = 0; i <= len - 2; i++)
          *(output + i) = *(data + i) + *(data + i + 1);
    
    *(output + len - 1) = *(data + len - 1) + *data;
    *(output + len) = '\0';
    puts(output);
      
    return 0;
}

