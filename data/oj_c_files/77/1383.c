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



int n,vis[510];
char s[510];

void dfs(int p,int q)
{
	for(;vis[p];p++);
	if (p>=n) return;
	if (s[p]!=s[0])
		cout<<q<<' '<<p<<endl,vis[p]=vis[q]=1;
	else
		for(;!vis[p];) dfs(p+1,p);
}

int main()
{
	cin>>s;
	n=strlen(s);
	dfs(0,-1);
	return 0;
}
