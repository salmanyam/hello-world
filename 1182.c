#include <stdio.h>

int main()
{
	int t, cases=0, n, i, count;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		count = 0;
		while(n){
			if(1 & n)count++;
			n = n >> 1;
		}
		printf("Case %d: ", ++cases);
		if(count%2)printf("odd\n");
		else printf("even\n");
	}
	return 0;
}
