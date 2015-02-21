#include <stdio.h>
int main()
{
	int t,a,b,cases=0;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &a, &b);
		printf("Case %d: %d\n",++cases, a+b);
	}
	return 0;
}
