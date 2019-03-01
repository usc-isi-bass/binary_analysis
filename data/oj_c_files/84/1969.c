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
	int n,i=0,j=0,temp;
	cin>>n;
	cin>>i;
	cin>>j;
	n=n-2;
	while (n--) {
          cin>>temp;
		  if (temp>i) {
			  j=i;
			  i=temp;
          }
		  if (temp<i&&temp>j) {
			  j=temp;
		  }
   		

	}
	cout<<i<<endl;
	cout<<j<<endl;

}