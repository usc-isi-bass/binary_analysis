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

int n,m,i,j,ans,f[510];
char ss[510],s[510][510];
int main() 
{
	cin >> n >> ss;
	m=strlen(ss)-n+1;
	for (i=0;i<m;i++)
		strncpy(s[i],ss+i,n);
	for (i=0;i<m;i++) 
	{
		for (j=i;j<m;j++)
			if (strcmp(s[i],s[j])==0) 
				f[i]++;
		if (ans<f[i]) ans=f[i];
	}
	if (ans>1) {
		cout << ans << endl << endl;
		for (i=0;i<m;i++)
			if (f[i]==ans) 
				cout << s[i] << endl << endl;
	} else cout << "NO" << endl;
	return 0;
}
