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
{                      // A B C????????0?1?2?a b c???????????1?2?3
	 for (int a = 1; a <= 3; a++)
     {
         for (int b = 1; b <= 3; b++)
         {
             for (int c = 1; c <= 3; c++)                                 // ?????????1?2?3?a,b,c???
             {
				 if (((b > a) + (a == c) + a == 3)
				      && ((b < a) + (a > c) + b == 3)
				      && ((c > b) + (b > a) + c == 3))            // ???????????????????????3
				 {
				     if (a > b && b > c)
                        cout << "C" << "B" << "A" << endl;
                     else if (a > c && c > b)
                          cout << "B" << "C" << "A" << endl;
                     else if (b > a && a > c)
                          cout << "C" << "A" << "B" << endl;
                     else if (b > c && c > a)
                          cout << "A" << "C" << "B" << endl;
                     else if (c > a && a > b)
                          cout << "B" << "A" << "C" << endl;
                     else if (c > b && b > a)
                          cout << "A" << "B" << "C" << endl;       // ???????????????
				 }
             }
         }
     }
     return 0;
}
