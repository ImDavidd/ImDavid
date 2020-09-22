#include <stdio.h>
int main(){
	int a[5],b[5],i,mayor=0,menor=0;
	for(i=0;i<5;i++){
		printf ("algun valor %d: ",i);
		scanf("%d",&a[i]);
		if(mayor<=a[i])
		{
			mayor=a[i];
			
		}
		if(menor<=b[i]){
			menor=b[i];
		}
	
	}
		printf("El mayor es: %d\n",mayor);
		printf("El menor es: %d",menor);
	return 0;
}
