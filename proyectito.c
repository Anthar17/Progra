#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define ENTER 13
#define BACKSPACE 8
#define LONGITUD 20
#define MAX_INTENTOS 3
#define NUMERO_USUARIOS 4

//FUNCIONES
float ganancia(float n){
	float ganancianeta, ganancia1;
	int Pa;
	printf("%cQu%c porcentaje del precio original quisiera agregarle?\n", 168, 130);
	printf(" 5%% del precio original=1\n 10%% del precio original=2\n 15%% del precio original=3\n");
	scanf("%d", &Pa);
	
	float m;
	if(Pa==1){
		(m=0.05);
	}
	if(Pa==2);{
		(m=0.10);
	}
	if(Pa==3){
		(m=0.15);
	}
	
	/*float m=0.10;*/
	ganancia1=((n*m)+n);
	ganancianeta=(ganancia1-n);
	return ganancianeta;
	
}

int main(){

char usuario[LONGITUD + 1];
char clave[LONGITUD + 1];
int intento = 0;
int ingresa = 0;
char caracter;
int i = 0;
int j = 0;
    
char usuarios[NUMERO_USUARIOS][LONGITUD + 1] = {"Anthar", "Diana", "Daniel", "Astrid"};
char claves[NUMERO_USUARIOS][LONGITUD + 1] = {"anthar", "diana", "daniel", "astrid"};	
	do {
		i = 0;
		system("cls");
		printf("\n\t\t\tINICIO DE SESION\n");
		printf("\t\t\t---------------\n");
		printf("\n\tUSUARIO: ");
		gets(usuario);
		printf("\tCLAVE: ");
		while (caracter = getch()) {
			if (caracter == ENTER) {
				clave[i] = '\0';
				break;
				
			} else if (caracter == BACKSPACE) {
				if (i > 0) {
					i--;
					printf("\b \b");
				}
				
			} else {
				if (i < LONGITUD) {
					printf("*");
					clave[i] = caracter;
					i++;
				}
			}
		}
		
        for (j = 0; j < NUMERO_USUARIOS; ++j) {
            if (strcmp(usuario, usuarios[j]) == 0 && strcmp(clave, claves[j]) == 0) {
                ingresa = 1;
                break;
                
            }
        }

        if (ingresa == 0) {
            printf("\n\tUsuario y/o clave son incorrectos\n");
            intento++;
            getchar();
        }
		
	} while (intento < MAX_INTENTOS && ingresa == 0);
	
	if (ingresa == 1) {
		
	} else {
		printf("\n\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
		exit(1);
	}

int opc, respuesta, inv, it;

printf("\n-------------------Bienvenido al Menu-------------------\n");

while (opc!=6)
{
printf("\n");
printf("1. Busqueda de libro\n");
printf("2. Venta de libro\n");
printf("3. Compras de libros\n");
printf("4. Inventario\n");
printf("5. Reporte diario\n");
printf("6. Cerrar sesi%cn\n", 162);
printf("\n");
printf("Opci%cn a escoger:\n", 162);
scanf("%d", &opc);
    switch (opc)
{
case 1:
printf("Buscador de libros\n");
//Funcion de busqueda
printf("Ingresa 1 para volver al menu\n");
scanf("%d", &respuesta);
if (respuesta==0)
{
    opc=6;
}
else{
    opc=opc;
}
    break;

case 2:
printf("Venta de libro\n");
//Funcion de venta
printf("Ingresa 1 para volver al menu\n");
scanf("%d", &respuesta);
if (respuesta==0)
{
    opc=6;
}
else{
    opc=opc;
}
    break;

case 3:
float costolibro;
	int si;
	float Np;
	while (si != 2)
    {
	printf("-------------------Compra de libros-------------------\n\n");
	printf("%cDesea ver la ganancia obtenida?\n", 168);
	printf("Si=1 o no=2\n");
	scanf("%d", &si);
	    if (si==1){
		printf("Ingresa el costo del libro: ");
		scanf("%f", &costolibro);
		
		printf("Ingresa el n%cmero de productos a comprar: ", 163);
		scanf("%f", &Np);
		
		float ganancia(float n);	
		float gananciafinal;
		float precioo;
        float gasto;
		
		gananciafinal=ganancia(costolibro);
		printf("la ganancia es: %.2f\n", gananciafinal*Np);
		precioo=((costolibro+gananciafinal));
		
		printf("\n\n\nEs decir: ");
		printf("Si se compran %.0f libros a proveedores, los libros se vender%cn a %.2f y obtiene la ganancia de %.2f", Np, 160, precioo, gananciafinal*Np);
		
		int r;
		
		printf("\n%cDesea realizar la compra: ? \n Si=1  No=2\n", 168);
		scanf("%d", &r);
		if (r==1){
		printf("\nAgregando...\n\n");
        
        gasto=(gasto + costolibro*Np);
        //printf("Gasto: %f", gasto);
		
		}
		
}
}
printf("Ingresa 1 para volver al menu\n");
scanf("%d", &respuesta);
if (respuesta==0)
{
    opc=6;
}
else{
    opc=opc;
    si=0;
}
    break;

case 4:
while (inv != 1)
{
printf("\nInventario\n");
//FUncion de inventario
printf("\n");
printf("1. Menu selectivo\n");
printf("2. Alta de libros\n");
printf("3. Baja de libros\n");
printf("\n");
printf("Opci%cn a escoger:\n", 162);
scanf("%d", &inv);

switch (inv)
{
case 1:

break;
    
case 2:
    //Funcion de altas de libros
    printf("Altas\n");
    printf("Ingresa 0 para volver a inventario\n");
    scanf("%d", &it);
    if (it == 0)
    {
        inv=0;
    }
    
    break;

case 3:
    //Funcion de bajas de libros
    printf("Bajas\n");
    printf("Ingresa 0 para volver a inventario\n");
    scanf("%d", &it);
    if (it == 0)
    {
        inv=0;
    }
    break;

default:
    printf("No se encuentra esta opci%cn, intente otra\n", 162);
    break;
}
}
printf("Ingresa 1 para volver al menu\n");
scanf("%d", &respuesta);
if (respuesta==0)
{
    opc=6;
}
else{
    opc=opc;
    inv = 0;
}
    break;

case 5:
printf("Reporte diario\n");
//Funcion reporte
printf("Ingresa 1 para volver al menu\n");
scanf("%d", &respuesta);
if (respuesta==0)
{
    opc=6;
}
else{
    opc=opc;
}
    break;

case 6:

    break;  

default:
    printf("No se encontro esta opci%cn, favor de ingresar otra\n", 162);
    break;
}
}
printf("\n");
printf("Cerrando Sesi%cn, esta atendiendo %s\n", 162, usuario);   

system("pause");
return 0;

}