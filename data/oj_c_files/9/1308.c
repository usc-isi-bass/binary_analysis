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


struct patient{
	char id[10];
	int age;}pat[100];

		int over60[100];
		int below60[100];
		int m,k;
int main(int argc, char* argv[])
{
	void choose(struct patient *p,int n);
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%s%d",pat[i].id,&pat[i].age);}
	choose(pat,n);
	for(j=1;j<=m;j++){
		if(over60[m-j]!=over60[m-j-1]){
	for(i=0;i<n;i++){
		
		if(pat[i].age==over60[m-j]){
			printf("%s\n",pat[i].id);
	}}}}

	for(i=0;i<n;i++){
		if(pat[i].age<60){
			printf("%s\n",pat[i].id);}}
	return 0;
}
	void choose(struct patient *p,int n){
		void paixu(int *a,int n);
		int i;
		for(i=0,m=0,k=0;i<n;i++){
			if((p+i)->age>=60){
	over60[m]=(p+i)->age;
	m++;}}
		paixu(over60,m);}

	void paixu(int *a,int n){
		int j,i,e;
		for(j=1;j<n;j++){
		for(i=0;i<n-j;i++){
			if(*(a+i)>*(a+i+1)){
				e=*(a+i);
				*(a+i)=*(a+i+1);
				*(a+i+1)=e;}}}}
