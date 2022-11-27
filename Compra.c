
#include <stdio.h>

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


printf("Compra de libro\n");
	float costolibro;
	int si;
	float Np;
	while (si != 2)
    {
	printf("-------------------Registro compra proveedores-------------------\n\n");
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
        
        /*gasto=(gasto + costolibro*Np);
        printf("Gasto: %f", gasto);*/
		
		}
		
}
}
}