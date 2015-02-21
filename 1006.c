#include <stdio.h>
#include <string.h>

#define MAX 10005

long long table[MAX];
int a, b, c, d, e, f;
void calc(){

	int i;

	table[0] = a;	
	table[1] = b;	
	table[2] = c;	
	table[3] = d;	
	table[4] = e;	
	table[5] = f;

	for(i=6;i<=10000;i++){
		table[i] = (table[i-1]+table[i-2]+table[i-3]+table[i-4]+table[i-5]+table[i-6])%10000007;
	}
}
long long fn( int n ) {	
	return table[n]%10000007;	
}
int main() {
    	int n, caseno = 0, cases;
    	scanf("%d", &cases);
    	while( cases-- ) {
        	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        	memset(table,0,sizeof(table));
		calc();
		printf("Case %d: %lld\n", ++caseno, fn(n));
    	}
    	return 0;
}
