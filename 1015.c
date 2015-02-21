#include <stdio.h>

int main()
{
	//freopen("input.txt", "r", stdin);
	int i, tmp, t, n, sum, cases=0;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		sum = 0;
		for(i=0;i<n;i++){
			scanf("%d", &tmp);
			sum += tmp > 0? tmp:0;
		}
		printf("Case %d: %d\n", ++cases, sum);
	}
}
