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

void main(){
	int n,i=0,j=0;
	int v[10]={5,65,6,57,3,1,12,22,33,14};
	quicksort(v,0,9);
	while(j<10){
	printf("%d\n",v[j]);
	j++;
} 
}
