#include <stdio.h>
#include <stdlib.h>

int SumaDigitos(int Num){
	int Suma=0, Resto;
	
	while(Num!=0){	
		Resto=(Num%10);
		Suma=(Suma+Resto);
		Num=(Num/10);
	}
	return (Suma);
	
}
	int main(){
	int b;
		
printf("%cQuiere ver el descuento del libro?\n 1=Si\n 2=No\n", 168);
		scanf("%d", &b);
		
    while(b!=2)
    {

		if (b==2){
	
    	break;
        }
		
        else{
     
        int Num;
		//Como tal no es el año que se debe ingresar, sino que seleccionaremos que libro en la base y apartir de ahi, generara el descuento
		printf("Escribe el a%co del libro (*4 digitos*): ", 164);
		scanf("%d",&Num);
		printf("\nEl descuento a aplicar para el a%co (%d) es : %d%%\n",164, Num,SumaDigitos(Num));
        printf("%cQuieres ver otro descuento?\n 1=si\n 2=no\n", 168);
        scanf("%d", &b);
        
        }
        
    }
		
        return 0;
        
        }
