#include<stdio.h>

void main(){
	int n, v[n],i=0,j=0;
	printf("digite o numero de elementos:");
	scanf("%d",&n);
	printf("digite os elementos agora:");
	while(i<n){
		scanf("%d",&v[i]);
		i++;
	}
	while(j<n){
	printf("%d\n",v[j]);
	j++;
} 
}
