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

//********************************
//*???1.cpp   **
//*?????? 1200012768 **
//*???2012.10.24  **
//*???????????  **
//********************************
int main()               
{
     int m, i, j, k;
     cin >> m;
     for (i = 3; i <= m / 2; i += 2)
     {
	  	 int root1 = sqrt(i);
	  	 for (j = 3; j <= root1; j += 2)   //???????i????? 
		 {
		  	 if (i % j == 0)
			     break;
		 }
		 if (j <= root1 )      //??i????
		     continue;         //????????????? 
		 int root2 = sqrt(m - i);  
		 for (k = 3; k <= root2; k += 2)  //??????? m - i ????? 
		 {
		  	 if((m - i) % k == 0)
                 break;
		 }
		 if (k > root2 )   //m - i ???? 
		     cout << i << " " << m - i << endl;
     }
     return 0;
}   		