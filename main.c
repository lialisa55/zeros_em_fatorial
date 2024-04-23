#include <stdio.h>

int main (void){
	unsigned long long int N = 0;
	int zeros = 0, i = 10;
	scanf("%llu", &N);

	/*for (cont = 1;cont <= N;cont++){
		resultado = resultado * cont;
	}

	while (1){
		if (resultado%i == 0){
			i = i * 10;
			zeros++;
		}
		else{
			break;
		}
	}*/

	for (i = 5; i <= N; i*=5){
	zeros += N / i;
	}

	printf("%d", zeros);

	return 0;
}
