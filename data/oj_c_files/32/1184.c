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
//*????????   **
//*?????? 1300012713 **
//*???2013.11.15  **
//********************************
int main() 
{ 
	char a[105], b[105];
	int n;
	cin >> n;
	for(int m = 1; m <= n; m++)
	{
	    cin >> a;
	    cin >> b;
		int aa[105] = {0}, bb[105] = {0};
	    int aline = strlen(a), bline = strlen(b);
		for(int i = 1; i <= aline; i++)
		{
			aa[aline-i+1] = a[i-1] - '0';
		}
	    for (int j = 1; j <= bline; j++)
		{
		    bb[bline-j+1] = b[j-1]-'0';
		}
	    for(int k = 1; k <= aline; k++)
		{
		    if(aa[k] >= bb[k]) aa[k] = aa[k] - bb[k];
		    else
			{
			    aa[k] = aa[k] - bb[k] + 10;
			    aa[k+1] = aa[k+1] - 1;
			}
		}
	    for(int l = aline;l >= 1; l--)
		{
		    if(aa[l] == 0 && l == aline)
			    continue;
		    cout << aa[l];
		}
		if(m!=n) cout << "\n";
	}
	cin.get();
	return 0;
}