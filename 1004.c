#include <stdio.h>
#include <string.h>

#define MAX 105

int data[MAX][MAX];
int calc[MAX][MAX];

void print(int n)
{
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<i+1; j++)
			printf("%d ", calc[i][j]);
		printf("\n");
	}
	for(; i<2*n-1; i++){
		for(j=0; j<2*n-i-1; j++)
			printf("%d ", calc[i][j]);
		printf("\n");
	}
}

int main()
{
        //freopen("input.txt", "r", stdin);
        int i, j, k, t, cases=0, n;
        scanf("%d", &t);
        while(t--){
                scanf("%d", &n);
		for(i=0; i<n; i++){
			for(j=0; j<i+1; j++)
				scanf("%d", &data[i][j]);
		}
		for(; i<2*n-1; i++){
			for(j=0; j<2*n-i-1; j++)
				scanf("%d", &data[i][j]);
		}
		memset(calc, 0, sizeof(calc));
		
		calc[0][0] = data[0][0];
		for(i=0; i<n-1; i++){
			for(j=0; j<i+1; j++){
				//printf("%d->", data[i][j]);
				for(k=j; k<j+2; k++){
					//printf("%d ", data[i+1][k]);
					if(calc[i][j]+data[i+1][k] > calc[i+1][k])
						calc[i+1][k] = calc[i][j]+data[i+1][k];
				}
				//printf("::");
			}
			//printf("\n");
		}
		for(i++; i<2*n-1; i++){
			for(j=0; j<2*n-i-1; j++){
				//printf("%d->", data[i][j]);
				for(k=j; k<j+2; k++){
					//printf("%d ", data[i-1][k]);
					if(calc[i-1][k]+data[i][j] > calc[i][j])
						calc[i][j] = calc[i-1][k]+data[i][j];
				}
				//printf("::");
			}
			//printf("\n");
		}
		printf("Case %d: %d\n", ++cases, calc[2*n-2][0]);
        }
        return 0;
}
