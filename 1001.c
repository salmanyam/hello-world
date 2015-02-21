#include <stdio.h>
int main()
{
	int t,a,b,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(n>10){
			a = 10;
			b = n-10;
		}else{
			a = n;
			b = 0;
		}
		printf("%d %d\n", a, b);
	}
}
