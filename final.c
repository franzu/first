#include<stdio.h>
#include <stdlib.h>

void quicksort(int v[],int inicio, int fim){
	int pivo, tmp, a, b, r;
	a=inicio;
	b=fim;
	r=rand()%fim;//DETERMINA O PIVO ATRIBUINDO UMA POSIÇÃO ALEATORIA
	pivo=v[r];
	do{
		while(v[a]<pivo)a++;//VETORES ANTES DO PIVO TEM Q SER MENORES QUE O PIVO
		while(v[b]>pivo)b--;//VETORES APOS O PIVO DEVEM SER MAIORES QUE O PIVO
		if(a<=b){//TROCA OS ELEMENTOS 
			tmp=v[a];
			v[a]=v[b];//MENOR NO COMEÇO E MAIOR NO FIM
			v[b]=tmp;
			a++;
			b--;
		}
	}
	while(b>a);
	
	if(inicio<b) quicksort(v,inicio,b);//RECURSÃO PARA ORDENAR A PRIMEIRA PARTE DO
	//VETOR
	if(a<fim) quicksort(v,a,fim);//RECURSÃO PARA ORDENAR A SEGUNDA PARTE DO VETOR
}

int pair(int v[],int n){
	int delta,i,k=0;
	delta=v[1]-v[0];//DIFERENÇA ENTRE OS PRIMEIROS ELEMENTO DO VETOR
	for(i=1;i<n;i++){
		if(v[i+1]-v[i]<delta){//COMPARA A DIFERENÇA ATÉ ACHAR A MENOR,PRINCIPIO DE SELECTION
			delta=v[i+1]-v[i];//SORT
			k=i;
		}
	} 
	return k;
}

void main(){
	int n,i,j=0,k;
	int v[100];
	int *pv;
	pv = (int *) calloc(100, sizeof (int));
	v[0]=*pv;
	printf("numero de elementos do vetor:");
	scanf("%d",&n);//LE O NUMERO DE ELEMENTOS DO VETOR
	printf("elementos:");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);//LE TODOS OS N ELEMENTOS
	}
	quicksort(v,0,n-1);	//ORDENA O VETOR EM ORDEM CRESCENTE A PARTIR DA FUNÇÃO CRIADA
	while(j<n){
	printf("%d\n",v[j]);//MOSTRA O VETOR ORDENADO
	j++;
} 
	k=pair(v,n);//ARMAZENA EM K A POSIÇÃO DO VETOR ONDE SE ENCONTRA A DUPLA DE ELEMENTOS MAIS
	printf("o par de numeros mais proximo é:%d e %d",v[k],v[k+1]);//PROXIMOS. MOSTRA ESTES
	//ELEMENTOS
	free(pv);
	getch();
}
