#include <stdio.h>

int main(void){
	int A = 1;
	int B = 1;
	while (scanf("%d %d", &A, &B) != EOF){
		printf("%d\n", A+B);
	}
	return 0;
}
