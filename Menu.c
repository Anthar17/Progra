#include <stdio.h>
#include <stdlib.h>

int main(){

int opc, respuesta;
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
printf("Compra de libro\n");
//Funcion de compra
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

case 4:
printf("Inventario\n");
//FUncion de inventario
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
    printf("No se encontro esta opci%cn, favor de ingresar otra", 162);
    break;
}
}
printf("\n");
printf("Cerrando Sesi%cn, esta atendiendo %s\n", 162, usuario);   

system("pause");
return 0;

}