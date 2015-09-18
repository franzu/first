#include<stdio.h>

void quicksort(int v[],int inicio, int fim){
	int pivo, tmp, i, j, r;
	i=inicio;
	j=fim;
	r=rand()%fim;
	pivo=v[r];
	do{
		while(v[i]<pivo)i++;
		while(v[j]>pivo)j--;
		if(i<=j){
			tmp=v[i];
			v[i]=v[j];
			v[j]=tmp;
			i++;
			j--;
		}
	}
	while(j>i);
	
	if(inicio<j) quicksort(v,inicio,j);
	if(i<fim) quicksort(v,i,fim);
}

void main(){
	int n, v[n],i=0,j=0;
	printf("digite o numero de elementos:");
	scanf("%d",&n);
	printf("digite os elementos agora:");
	while(i<n){
		scanf("%d",&v[i]);
		i++;
	}
	quicksort(v,0,n);
	while(j<n){
	printf("%d\n",v[j]);
	j++;
} 
}

