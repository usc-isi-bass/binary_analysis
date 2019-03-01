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

char in[1000][50]={0};
char out[1000][4000]={0};

int main ()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>*(in+i);
	int row = 0;
	for (int i=1;i<n;i++){
		if (strlen(*(out+row))+strlen(*(in+i)) <= 80){
			strcat(*(out+row),*(in+i));
			if (strlen(*(out+row))+strlen(*(in+i+1))+1 <= 80)
				strcat(*(out+row)," ");
			else row += 1;
		}
	}
	strcat(*(out+row),*(in+n));

	for (int i=0;i<=row;i++)
		cout<<*(out+i)<<endl;

	return 0;
}