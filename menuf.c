#include <stdio.h>
#include <stdlib.h>

int respuesta(){
int respuesta, opc;
printf("Ingresa 1 para volver al menu\n");
scanf("%d", &respuesta);
if (respuesta==0)
{
    opc=6;
}
else{
    opc=opc;
}
    
}

int buscador(){
    printf("\nBuscador de libros\n");
    //Funcion de busqueda
    respuesta();
}

int ventalibro(){
    printf("\nVenta de libro\n");
    //Funcion de venta}
    respuesta();
}

int compralibro(){
    printf("\nCompra de libro\n");
    //Funcion de compra
    respuesta();
}

int inventario(){
    int it, inv;
    while (inv =! 1){
    printf("\nInventario\n");
    //FUncion de inventario
    printf("\n");
printf("1. Menu selectivo\n");
printf("2. Alta de libros\n");
printf("3. Baja de libros\n");
printf("\n");
    }
}

int inv2(){
    int inv, it;
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

respuesta();
inv = 0;


int reporte(){
    printf("\nReporte diario\n");
//Funcion reporte
}



int main(){

int opc, respuesta, inv, it;
char usuario[100];
char contra[100];

printf("Buen dia, ingresa tu nombre de usuario\n");
gets(usuario);
printf("Ingresa tu contrase%ca\n",164);
gets(contra);
printf("Iniciando sesi%cn, presiona enter para continuar\n",162);
gets(contra);
printf("Bienvenido al Menu\n");

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

switch (opc){

case 1:
buscador();
break;

case 2:
ventalibro();
break;

case 3:
compralibro();
break;

case 4:
inventario();
inv2();
break;

case 5:
reporte();
break;

case 6:
break;

default:
    printf("No se encontro esta opci%cn, favor de ingresar otra", 162);
    break;


}
}


printf("\n");
printf("Cerrando Sesi%cn, esta atendiendo %s\n", 162, usuario);   

system("pause");
return 0;
}