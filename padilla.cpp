#include <bits/stdc++.h>
#include <locale.h>

int x=0, y=0;

int vecbin[50];
int vecoct[50];
int vecmay[50];

void bin();
void oct();
void may();
void menu();

int main()
{	
	setlocale(LC_ALL, "spanish");
	int op, men=1, nu=1; 
	while (men==1)
	{
	printf("\n * MEN� *\n\n");
	printf(" Seleccione la opci�n que desee ejecutar:\n ");
	printf(" 1: Conversiones de decimal a binario, octal o maya.\n ");
	printf(" 2: Matrices de aydacencia e incidencia.\n ");
	printf(" 3: L�gica de proposiciones.\n ");
	printf(" 4: L�gica de predicados.\n ");
	printf(" 5: \n ");
	printf(" 6: \n ");
	printf(" 7: Salir\n  ");
	scanf("%d", &op);
	system("cls");
	
		switch (op)
	{
		case 1: {
			printf("\n  -Conversiones de decimal a binario, octal o maya\n\n ");
			while(nu==1){
			printf("\n Selecciona la base a la que deseas convertir tu n�mero decimal:\n ");
			printf(" 1: Binario.\n ");
			printf(" 2: Octal.\n ");
			printf(" 3: Maya.\n ");
			printf(" 4: Salir.\n ");
			scanf("%d", &y);
			switch(y){
			case 1: {
				system("cls");
				bin();
				menu();
				break;
			}
			case 2: {
				system("cls");
				oct();
				menu();
				break;
			}
			case 3: {
				system("cls");
				may();
				menu();
				break;
			}
			case 4: {
				nu++;
				system("cls");
				break;
			}
			default:{
			system("cls");
			printf(" \n Elige una opci�n v�lida.\n\n ");			
			}			
		}			
		}
		nu=1;
		break; 
		}
		
		case 2: {
			printf("\n  -Matrices de aydacencia e incidencia\n\n ");
			menu();
						
		break; 
		}
		
		case 3: {
			printf("\n  -L�gica de proposiciones\n\n ");
			menu();	
		break; 
		}
		
		case 4: {
			printf("\n  -L�gica de predicados\n\n ");				
			menu();
		break; 
		}
		
		case 5: {
			printf("\n  - \n\n ");	
			menu();
		break; 
		}
		
		case 6: {
				
			printf("\n  - \n\n ");	
			menu();			
		break; 
		}
		
		case 7:{
			printf("\n  -Salir\n\n");
			men=2;
			printf("\n Gracias, hasta pronto\n");
		break;
		}
		
		
		default: {
			printf("\n Numero incorrecto, intente nuevamente\n");
			menu();	
		break; 
		}
	}
	}
	getchar();
	getchar();
	return 0;
}


void bin() {
	int cnt=0;
	printf("\n  -Conversi�n de decimal a binario\n\n ");
	printf(" Ingresa el numero entero decimal que quieres convertir: ");
	scanf("%d", &x);
	
	while (x>=1){
		if(x%2==0){
			vecbin[cnt]=0;
			x=x/2;
			cnt++;		
		} else {
				vecbin[cnt]=x%2;
				x=x/2;
				cnt++;
			}	
	}
	for(int i=(cnt-1); i>=0; i--)
	{
		printf ("%d", vecbin[i]);	
	}

	printf ("\n");
}


void oct(){
	printf("\n  -Conversi�n de decimal a octal\n\n ");
	int cnt=0;	
	printf(" Ingresa el numero entero decimal que quieres convertir: ");
	scanf("%d", &x);
	while (x>=1){
		if(x%8==0)	{
			vecoct[cnt]=0;
			x=x/8;
			cnt++;	
		} else {
				vecoct[cnt]=x%8;
				x=x/8;
				cnt++;
			}
	}	
	for(int i=(cnt-1); i>=0; i--)
	{
		printf ("%d", vecoct[i]);	
	}
	
	printf ("\n");
}



void may(){
	int cnt=0;
	printf("\n  -Conversi�n de decimal a maya\n\n ");
	printf(" Ingresa el numero entero decimal que quieres convertir: ");
	scanf("%d", &x);
	while (x>=1){
		if(x%20==0)	{
			vecmay[cnt]=0;
			x=x/20;
			cnt++;
		} else {
				vecmay[cnt]=x%20;
				x=x/20;
				cnt++;
			}	
	}
	
	for(int i=(cnt-1); i>=0; i--)	{
		switch(vecmay[i])	{
				case 0:
					printf (" 0\n");
					printf ("\n"); 
					break;
					
				case 1:
					printf (" .\n");
					printf ("\n");
					break;
					
				case 2:
					printf (" ..\n");
					printf ("\n");
					break;
					
				case 3:
					printf ("...\n");
					printf ("\n");
					break;
					
				case 4:
					printf ("....\n");
					printf ("\n");
					break;
					
				case 5:
					printf ("____\n");
					printf ("\n");
					break;
					
				case 6:
					printf (" .\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 7:
					printf (" ..\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 8:
					printf ("...\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 9:
					printf ("....\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 10:
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 11:
					printf (" .\n");
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 12:
					printf (" ..\n");
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 13:
					printf ("...\n");
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 14:
					printf ("....\n");
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 15:
					printf ("____\n");
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 16:
					printf (" .\n");
					printf ("____\n");
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 17:
					printf (" ..\n");
					printf ("____\n");
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 18:
					printf ("...\n");
					printf ("____\n");
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
					
				case 19:
					printf ("....\n");
					printf ("____\n");
					printf ("____\n");
					printf ("____\n");
					printf ("\n");
					break;
				}	
	}
	printf ("\n");
}

void menu()
{
	printf("\n Presione cualquier tecla para regresar al menu anterior\n");
	getchar();
    getchar();
    system("cls");
}
