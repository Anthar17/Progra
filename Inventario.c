#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alta(){
	char titulo[100];
	char autor[50];
	char editorial[50];
	int anual;
	
	FILE *altalibr;
	altalibr=fopen("Librosbased.txt","a");
	if (altalibr == NULL){
		printf("error");
	}
	fflush(stdin);
	printf("Introduzca el titulo del libro: \n");
	gets(titulo);
	fflush(stdin);
	printf("Introduzca el autor del libro: \n");
	gets(autor);
	fflush(stdin);
	printf("Introduzca la editorial del libro: \n");
	gets(editorial);
	fflush(stdin);
	printf("Introduzca el a%co de lanzamiento del libro: \n", 164);
	scanf("%d", &anual);
	fflush(stdin);
	fprintf(altalibr,"\n""%s-""%s, ""%d""#%s",titulo,autor,anual,editorial);
	fclose(altalibr);

	return 0;
}

typedef struct{
	char *titulo;
	int anual;
	
}libros;

libros *lib;

void vaciar (char temp[]);
void copiar (char temp[], int i);

int main (){

	int elec;
	while (elec != 3)
	{
		printf("Elige que deseas hacer\n");
		printf("1. Ver el inventario\n");
		printf("2. Alta de libros\n");
		printf("3. Salir\n");
		printf("\nOpci%cn a escoger:\n", 162);
	scanf("%d", &elec);
	
	int i, j;
	char aux;
	char temp[100];
	int cont = 0;
	FILE *f;
	f = fopen ("Librosbased.txt","r");
	if(f == NULL){
		printf("No se ha podido abrir el fichero. \n");
		exit(1);
	}
	switch (elec)
	{
	case 1:
	printf("\nMostrar inventario:\n\n");
		while(!feof(f)){
		fgets(temp,100,f);
		cont++;
	}
	
	rewind(f);
	
	lib = (libros*)malloc(cont*sizeof(libros));
	if (lib == NULL){
		printf("No se ha podido reservar memoria");
		exit (1);
	}
	
	for ( i = 0; !feof(f); i++){
		vaciar(temp);
		aux = '0';
		for ( j = 0; aux != ','; j++){
			aux = fgetc(f);
			if ( aux != ','){
				temp[j] = aux;
			}
		}
		copiar(temp,i);
		
		fgets(temp,100,f);
		lib[i].anual = atoi(temp);
		printf("Nombre: %s A%co: %i. \n", lib[i].titulo, 164, lib[i].anual);
	}
	
	
	return 0;
		
		break;

	case 2:
	printf("\nAlta\n");
	alta();
	break;

	case 3:
	break;
	
	default:
	printf("No esta disponible, prueba otra\n");
		break;
	}
	
	}

}
	
	void vaciar (char temp[]){
		int i;
		
		for(i = 0; i < 100; i++){
			temp[i] = '\0';
			
		}
	}
		
		void copiar (char temp[], int i){
			int N = strlen(temp) + 1;
			lib [i].titulo = (char*)malloc(N*sizeof(char));
			if (lib [i].titulo == NULL){
				printf("No se ha podido reservar memoria");
				exit (1);
			}
			strcpy(lib[i].titulo, temp);
		}
