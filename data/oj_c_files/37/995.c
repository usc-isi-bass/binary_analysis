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

int main ()
{
     int t, i, j, len, flag2 = 0, temp, flag[26] = {0};
     char get[100001];
     cin >> t;
	 cin.get();
     for (i = 0; i < t; i++)
    {
          cin.getline(get, 100001);
          len = strlen(get);
          for (j = 0; j < len; j++)
              {
                  temp = get[j] - 'a';
                  flag[temp]++;
              }
          for (j = 0; j < len; j++)
              {
                    temp = get[j] - 'a';

                    if (flag[temp] == 1)
                    {
                        cout << get[j]<<endl;
                        flag2 = 1;
						break;
                    }
              }
          if (!flag2)
              cout <<"no"<<endl;
          flag2 = 0;
		  memset(flag,0,sizeof(flag));

     }
     return 0;
}