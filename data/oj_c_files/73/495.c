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
    int a[5][5];
    int i, j, l;
    for (i = 0; i <= 4; i ++)
        for ( j = 0; j <= 4; j ++)
           cin >> a[i][j];
    for (i = 0; i <= 4; i ++)
        for (j = 0;j <= 4; j ++)
		{
          for (l = 0;l <= 4; l ++)
			  if(l != j && a[i][l] >= a[i][j] || l !=  i && a[i][j] >= a[l][j])
				  break;
              if(l <= 4 )
				  continue;
			  cout << i + 1 << " "<< j + 1 << " " << a[i][j];
              goto end;
		}
    cout << "not found";
end:
    return 0;
}