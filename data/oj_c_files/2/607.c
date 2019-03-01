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
    int n;
    cin >> n;
    int number[n+1];
    int writer[26] = {0};
    char book[n+1][27];
    for(int i = 1; i <= n; ++i)
    {
            cin >> number[i] >> book[i];
            for(int t = 0; t < strlen(book[i]); ++t)
            {
                    writer[book[i][t] -'A']++;
            }
    }
    int nn = 0;
    for(int i = 0; i < 26; ++i)
    {
            nn = max(nn,writer[i]);
    }
    int person1;
    for(int i = 0; i < 26; ++i)
    {
            if(writer[i] == nn)
            {
                         person1 = i;
                         break;
            }
    }
    char person = person1 + 'A';
    cout << person  << endl << nn << endl;
    for(int i = 1; i <= n; ++i)
    {
            for(int t = 0; t < strlen(book[i]); ++t)
            {
                    if(book[i][t] == person)
                    {
                                  cout << number[i] << endl;
                                  break;
                    }
            }
    }
    //while(1);
    return 0;    
}
