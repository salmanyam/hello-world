#include <stdio.h>

int abs(int n)
{
	return (n < 0 ? -n : n);
}
int number_of_one(unsigned int n)
{
	int i, result = 0;
	for(i=1; i<=n; i<<=1){
		result += (n & i ? 1 : 0);
	}
	return result;
}

unsigned int solve(unsigned int n)
{
	unsigned int i, d, result;
	for(i=1; i<=n; i<<=1){
		if(n & i){
			result = n + i;
			break;
		}
	}
	printf("%u\n", result);	
	d = abs(number_of_one(result) - number_of_one(n));
	for(i=0; i<d; i++){
		result += 1<<i;
	}
	return result;
}

int main()
{
	int t, cases=0;
	unsigned int n, result;

	scanf("%d", &t);
	while(t--){
		scanf("%u", &n);
		
		result = solve(n);
			
		printf("Case %d: %u\n", ++cases, result);
	}
	return 0;
}
