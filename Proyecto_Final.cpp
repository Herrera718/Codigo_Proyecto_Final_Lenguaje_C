// Proyecto final mundo 4. Lenguaje C 
/* Realizado por Oscar David Herrera Campos */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
# define TAM 10
int m=0;   
char *buscar[]={"loro","soldados","factura","plaqueta","carretera","plaza","maldad","tierra","esmeralda","petroleo","proyecto","empresa","samsung"};
int main(int argc, char *argv[]) 
	{
	while(m==0){
		char palabra[100]; 
		char adivinar[100];
		int x,c,i,n,j,p;
		bool k;
		int repetir;
		 
		srand(time(0));
		p= rand() % TAM;
		strcpy (palabra,buscar[p]);
		c=strlen(palabra);
		
		for(i=0;i<c;i++)
		{
			adivinar[i]='-';
		}

	
	printf("Hola, este es un juego de adivinar la palabra \n");
	printf("Comenzemosa, tendras que ir colocando letra por letra hasta adivinar la palabra secreta o por el contrario perder \n");
	printf("Cuentas con 5 intentos \n");
	
	n=5;
	while(n>0){
		printf("Palabra oculta: %s \n", adivinar);
		printf("Fallos restantes: %d \n",n);
		printf("Introduzca una letra: ");
		x=getchar();
		getchar();
		k=true;
		for(i=0;i<c;i++)
		{
		if(palabra[i]==x)
			{
				adivinar[i]=x; 
				k=false;
			}
		}
		
		if(k)
		{
			n--;
		}
		
		j=0;
		for(i=0;i<c;i++)
		{
			if(palabra[i]==adivinar[i])
			{
				j++;
			}
		}
		if(j==c)
		{
			n=0;
		}
		}
		
		if(j==c)
		{
			printf("Felicitaciones has ganado! \n");
		}
		else
		{
			printf("Lo siento... intentalo nuevamente has perdido \n");
		}
	
		printf("Señor usuario, si desea volver a jugar presiona el numero 1, de lo contrario presiona cualquier otra tecla \n");
		scanf("%d", &repetir);
		if(repetir==1){
		n=5;
		system("cls");
		srand(time(0));
		p= rand() %TAM;
		strcpy (palabra, buscar[p]);
		c=strlen(palabra);
		}
		else if(repetir!=1){
			return 0;
		}
	}
	return 0;
}

