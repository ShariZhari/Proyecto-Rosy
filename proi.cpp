#include <bits/stdc++.h>
#include <locale.h>

int i, j, x=0, x1=0, x2=0, y=10, vcla[10];
float vsal[10];

char nom [20][10]={"Pedro", "Esteban", "Hilda", "Valeria", "Bruno", "Victor", "Silvia", "Jennifer", "Mario", "Julio", "Dalia", "Alondra", "Jonathan", "Octavio", "Melissa", "Andrea", "Axel", "Gabriel", "Samantha", "Karina"};
char aPat[20][10]={"Domínguez", "Salazar", "Andrade", "Saucedo", "Quiroz", "Serna", "Gutiérrez", "Luna", "Rodríguez", "Jiménez", "Rivera", "Pacheco", "Sierra", "Medrano", "Ortega", "Anaya", "Duran", "Yañez", "Romero", "Quezada"};
char aMat[20][10]={"Santana", "Arias", "Uribe", "Esquivel", "Solís", "Escobedo", "Chavez", "Rangel", "Esparza", "Herrera", "Zaragoza", "Torres", "Hernández", "Soto", "Medina", "Varela", "Muñoz", "Ortiz", "Lozano", "Medina"};
char nomcom [10][50];
void imprimir();
void menu();
void ordenar();
void burb(int k, int l);


int main()
{	system("color 03");
	setlocale(LC_ALL, "spanish");
	srand (time(NULL));
	int op, men=1;
	
	//inicializar vectores con valores aleatorios
	for(i=0; i<10; i++)
	{		
		vcla[i]=rand()%9000+1000;
		vsal[i]=(float)rand()/10000*1000;
		x=rand()%20;
 		x1=rand()%20;
  		x2=rand()%20;
		sprintf(nomcom[i], "%s %s %s", nom[x], aPat[x1], aMat[x2]);	
	}
	

	
	while (men==1)
	{
	system("color 07");
	printf("\n * MENÚ *\n\n");
	printf(" Seleccione la opción que desee ejecutar:\n ");
	printf(" 1: Mostrar todos los contactos.\n ");
	printf(" 2: Buscar un registro por clave o nombre.\n ");
	printf(" 3: Ordenar alfabéticamente por clave, nombre o salario.\n ");
	printf(" 4: Insertar nuevos registros.\n ");
	printf(" 5: Eliminar un registro por clave o nombre.\n ");
	printf(" 6: Modificar la clave, el nombre o el salario de algún trabajador.\n ");
	printf(" 7: Salir\n  ");
	scanf("%d", &op);
	system("cls");

	switch (op)
	{
		case 1: {
			printf("\n  -Mostrar todos los contactos\n\n ");
			imprimir();
			printf("\n");			
			menu();
		break; 
		}
		
		case 2: {
			printf("\n  -Buscar un registro\n\n ");	
			printf(" Seleccione el parametro que desee otorgar para buscar un registro:\n ");
			printf(" 1: Nombre del trabajador.\n ");
			printf(" 2: Clave del trabajador.\n ");				
			menu();
		break; 
		}
		
		case 3: {
			printf("\n  -Ordenar alfabéticamente\n\n ");
			ordenar();	
		break; 
		}
		
		case 4: {
			printf("\n  -Insertar nuevos registros\n\n ");				
			menu();
		break; 
		}
		
		case 5: {
			printf("\n  -Eliminar un registro\n\n ");	
			menu();
		break; 
		}
		
		case 6: {
				
			printf("\n  -Modificar clave, nombre o salario de un trabajador\n\n ");	
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

void ordenar(){

	for (;;){		
		printf("\n Seleccione el parámetro por el que desee ordenar los registros:\n ");
		printf(" 1: Clave del trabajador.\n ");
		printf(" 2: Nombre del trabajador.\n ");
		printf(" 3: Salario del trabajador.\n ");
		printf(" 4: Regresar al menú anterior.\n ");
		scanf("%d", &y);
		system("cls");
		switch(y){
			case 1: {
				printf(" Ordenar por clave del trabajador.\n\n ");
				
				for(i=0; i<10; i++){
					for(j=0; j<10; j++){
						if(vcla[i]<vcla[j]){
						burb(i,j);				
						}0
					}		
				}	
				imprimir();
				printf("\n");	
				menu();
				break;
			}
			case 2: {
				printf(" Ordenar por nombre del trabajador.\n\n ");
				for(i=0; i<10; i++){
					for(j=0; j<10; j++){
						if(strcmp(nomcom[i], nomcom[j])<0){
						burb(i,j);
						}
					}
				}
				imprimir();			
				menu();				
				break;
			} 
			case 3: {
				printf(" Ordenar por salario del trabajador.\n\n ");
				for(i=0; i<10; i++){
					for(j=0; j<10; j++){
						if(vsal[i]<vsal[j]){
						burb(i,j);
						}
					}		
				}	
				imprimir();
				printf("\n");				
				menu();		
				break;
			} 
			case 4: {		
				return;
				break;
			}
			default:{
			printf(" \n Elija una opción válida.\n\n ");			
			}
		}
	}				
}

void burb(int k, int l){
	int clatem=0;
	float saltem=0;
	char nomtem[50];
		
	clatem=vcla[k];
	vcla[k]=vcla[l];
	vcla[l]=clatem;
	strcpy(nomtem, nomcom[k]);
	strcpy(nomcom[k], nomcom[l]);
	strcpy(nomcom[l], nomtem);
	saltem=vsal[k];
	vsal[k]=vsal[l];
	vsal[l]=saltem;	
	
	clatem=0; saltem=0; fflush(stdin);
}

void imprimir(){
			printf("\tClave \t\tNombre del trabajador\t\tSalario\n ");
			for(i=0; i<10; i++)	{
				printf("\t%d\t\t%s\t\t%.2f\n", vcla[i], nomcom[i], vsal[i]);	
			}
			printf("\n");
}

void menu()
{
	printf("\n Presione cualquier tecla para regresar al menu anterior\n");
	getchar();
    getchar();
    system("cls");
}

