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
    int number;
    cin >> number;
    char article[40]; 
    int i = 0,k = 0;
    cin >> article;
    i = strlen(article);
    cout << article;
    while(k < number-1)
    {
         cin >> article;
         char *p = article;
         i = i + strlen(article) + 1; 
         if(i <= 80)
         {
              //cout << " " << article;
              cout << " ";
              for(;*p != '\0'; p++) cout << *p;
         }
         else
         {
              cout << endl << article;
              i = strlen(article);
         }
         ++k;
    }
    return 0;
}
