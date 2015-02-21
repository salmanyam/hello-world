#include <stdio.h>
int abs(int n)
{
	return n<0?-n:n;
}

int main()
{
	int t, cases=0, n, m;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		printf("Case %d: %d\n", ++cases, 3*3+10+(n+abs(n-m))*4);
	}
	return 0;
}
