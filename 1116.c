#include <stdio.h>

int main()
{
	int t, cases=0;
	long long n, m, w, i;
	scanf("%d", &t);
	while(t--){
		scanf("%lld", &w);
		if(w & 1)printf("Case %d: Impossible\n", ++cases);
		else{
			for(i=2; i<=w/2; i+=2){
				if(w%i==0 && (w/i)%2==1){
					m = i;
					n = w/m;
					break;
				}
			}
			printf("Case %d: %lld %lld\n", ++cases, n, m);
		}
	}
	return 0;
}
