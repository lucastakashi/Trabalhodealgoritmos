#include <stdio.h>
void main () {
	int qtdSalas, qtdTotalAlunos;
	
	printf("informe a quantidade de salas:  ");
	scanf("%d", &qtdSalas);
	for ( int cont=1; cont<=qtdSalas; cont++ ) {
		printf(" Quantidade de alunos na sala %d: ", cont);
		int qtdAlunosSala;
		scanf("%d", &qtdAlunosSala);
		qtdTotalAlunos += qtdAlunosSala;	
}
printf ("total de alunos na escola : %d/n", qtdTotalAlunos);

}
