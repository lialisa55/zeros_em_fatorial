#include <stdio.h>

int main (void){
	unsigned long long int N = 0, resultado = 1;
	int zeros = 0, i = 10, cont;
	scanf("%lld", &N);

	for (cont = 1;cont <= N;cont++){
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
	}

	printf("%d", zeros);

	return 0;
}
