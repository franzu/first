#include<stdio.h>

void quicksort(int v[],int inicio, int fim){
	int pivo, tmp, a, b, r;
	a=inicio;
	b=fim;
	r=rand()%fim;
	pivo=v[r];
	do{
		while(v[a]<pivo)a++;
		while(v[b]>pivo)b--;
		if(a<=b){
			tmp=v[a];
			v[a]=v[b];
			v[b]=tmp;
			a++;
			b--;
		}
	}
	while(b>a);
	
	if(inicio<b) quicksort(v,inicio,b);
	if(a<fim) quicksort(v,a,fim);
}

int pair(int v[],int n){
	int delta,i,k=0;
	delta=v[1]-v[0];
	for(i=1;i<n;i++){
		if(v[i+1]-v[i]<delta){
			delta=v[i+1]-v[i];
			k=i;
		}
	} 
	return k;
}

void main(){
	int n,i,j=0,k;
	int v[100];
	printf("numero de elementos do vetor:");
	scanf("%d",&n);
	printf("elementos:");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	quicksort(v,0,n-1);	
	while(j<n){
	printf("%d\n",v[j]);
	j++;
} 
	k=pair(v,n);
	printf("o par de numeros mais proximo é:%d e %d",v[k],v[k+1]);
	getch();
}
