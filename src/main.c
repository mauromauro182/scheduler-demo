#include <stdio.h>

int main() {
	int a[5];
	int n;
	int FlagNull=1;

	scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
	
	n=n+1;

	for (int i=1; i<n; i++) {
		if((i%a[0])==0){
			printf("0");
			FlagNull=0;
		}
		if((i%a[1])==0){
			printf("1");
			FlagNull=0;
		}
		if((i%a[2])==0){
			printf("2");
			FlagNull=0;
		}
		if((i%a[3])==0){
			printf("3");
			FlagNull=0;
		}	
		if((i%a[4])==0){
			printf("4");
			FlagNull=0;
		}
		if(FlagNull==1){
			printf("-");
		}
		printf("\n");
		FlagNull=1;
	}

	return 0;
}
