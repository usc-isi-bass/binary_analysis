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
 *???: seek numbers.cpp
 *??????
 *????: 2012-12-10
 *??: ????
 */


int main ()
{
    char data[31],result[31][31];
    //result???????????,data????????
    int counter = 0;
    //counter??????
    cin.getline(data,31);
    for (int i = 0; i < strlen(data); i++)
        if(*(data+i) >= '0' && *(data+i) <= '9'){
            for (int j = 0; ; j++){
                *(*(result+counter)+j) = *(data+i+j);
                if (*(data+i+j+1) < '0' || *(data+i+j+1) > '9' || i+j == 29){
                    *(*(result+counter)+j+1) = '\0';
                    counter++;
                    i += j;
                    break;
                }
            }
        }
    for (int i = 0; i < counter; i++)
        cout << *(result+i) << endl;
    return 0;
}