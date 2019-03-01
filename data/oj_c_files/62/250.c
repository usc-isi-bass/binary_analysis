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
    char sentence[10000];
    int i, j;
    cin.getline(sentence, 10000);
    for (i = 0; i < strlen(sentence); )
    {
        if (sentence[i] != ' ')
        {
            cout << sentence[i];
            i++;
        }
        else 
        {
             do
             {
                 i++;
             } while(sentence[i] == ' ');
             cout << ' ';
        }
    }
    
    return 0;
} 
