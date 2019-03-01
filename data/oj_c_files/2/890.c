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


struct book{
	int num;
	char author[26];}shu[999];

int main(int argc, char* argv[])
{
	int m,b,i,*p;
	char c;
	int writer[26];
	char max(int *p);
	scanf("%d",&m);
	for(i=0;i<m;i++){
	scanf("%d%s",&shu[i].num,shu[i].author);}
	for(c='A',writer[c-'A']=0;c<='Z';c++){
		writer[c-'A']=0;
		for(i=0;i<m;i++){
			for(b=0;shu[i].author[b]!='\0';b++){
				if(c==shu[i].author[b]){
	writer[c-'A']++;}}}}
	p=writer;
	printf("%c\n%d\n",max(p),writer[max(p)-'A']);
		for(i=0;i<m;i++){
			for(b=0;shu[i].author[b]!='\0';b++){
				if(max(p)==shu[i].author[b]){
					printf("%d\n",shu[i].num);}}}

	return 0;
}
	char max(int *p){
		int i;
		char max;
		for(i=0,max='A';i<26;i++){
			if(*(p+i)>*(p+max-'A')){
				max=i+'A';}}
		return max;}
