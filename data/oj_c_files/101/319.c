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
    int A, B, C;
    int suma, sumb, sumc;
    for (A = 0; A <= 2; A++)
    {
        for (B = 0; B <= 2; B++)
        {
            for (C = 0; C <= 2; C++)
            {
                suma = (B > A) + (C == A);
                sumb = (A > B) + (A > C);
                sumc = (C > B) + (B > A);
                if (!(A <= B && suma <= sumb || A <= C && suma <= sumc || B <= C && sumb <= sumc || 
                A >= B && suma >= sumb || A >= C && suma >= sumc || B >= C && sumb >= sumc))
                {
                     if (suma == sumb)
                     {
                              if (sumc >= suma)
                              cout << "BAC" << endl;
                              else
                              cout << "CBA" << endl;
                     }
                     if (suma > sumb)
                     {
                                  if (sumc >= suma)
                                  cout << "CAB" << endl;
                                  if (sumc <= sumb)
                                  cout << "ABC" << endl;
                                  else
                                  cout << "ACB" << endl;
                     }
                     if (suma < sumb)
                     {
                                  if (sumc >= sumb)
                                  cout << "CBA" << endl;
                                  if (sumc <= suma)
                                  cout << "BAC" << endl;
                                  else
                                  cout << "BCA" << endl;
                     } 
                }
            }
        }
    }
    return 0;
}

    
      