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

/*
 *???: delete blank.cpp
 *??????
 *????: 2012-12-10
 *??: ??????
 */


int main ()
{
    char sentence[1000];
    //????
    cin.getline(sentence,1000);
    for (int i = 0; i <= strlen(sentence); i++){
        if (*(sentence+i) == ' '){
            int j;
            for (j = i; ; j++)
                if (*(sentence+j+1) != ' ') break;
            for (int k = 0; k <= strlen(sentence)-i+1; k++)
                *(sentence+k+i) = *(sentence+j+k);
        }
    }
    cout << sentence;
    return 0;
}