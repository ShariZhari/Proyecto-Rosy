#include <bits/stdc++.h>
#include <locale.h>

using namespace std;
vector<int> vcla(10);
vector<float> vsal(10);
int i, x=0, x1=0, x2=0, y=10,j;

//float vsal[10];

char nom [20][10]={"Pedro", "Esteban", "Hilda", "Valeria", "Bruno", "Victor", "Silvia", "Jennifer", "Mario", "Julio", "Dalia", "Alondra", "Jonathan", "Octavio", "Melissa", "Andrea", "Axel", "Gabriel", "Samantha", "Karina"};
char aPat[20][10]={"Domínguez", "Salazar", "Andrade", "Saucedo", "Quiroz", "Serna", "Gutiérrez", "Luna", "Rodríguez", "Jiménez", "Rivera", "Pacheco", "Sierra", "Medrano", "Ortega", "Anaya", "Duran", "Yañez", "Romero", "Quezada"};
char aMat[20][10]={"Santana", "Arias", "Uribe", "Esquivel", "Solís", "Escobedo", "Chavez", "Rangel", "Esparza", "Herrera", "Zaragoza", "Torres", "Hernández", "Soto", "Medina", "Varela", "Muñoz", "Ortiz", "Lozano", "Medina"};
char nomcom [10][50],nombre[50];
void menu();
void borrar();
void imprimir();
void modificar();
void burb(int k, int l);
void ordenar();



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
			menu();
			ordenar();	
		break; 
		}
		
		case 4: {
			printf("\n  -Insertar nuevos registros\n\n ");				
			menu();
		break; 
		}
		
		case 5: {//borrar por nombre
		printf("\n  -Eliminar un registro\n\n ");
		 borrar();
		break; 
		}
		
		case 6: {//cambiar nombre 
	
		printf("\n  -Modificar clave, nombre o salario de un trabajador\n\n ");	
			modificar();
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
						}
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

void menu()
{
	printf("\n Presione cualquier tecla para regresar al menu anterior\n");
	getchar();
    getchar();
    system("cls");
}

void borrar (){
			int o,clave,k,j,p;
			char nombre[50],elim[]={'\0'};
for(;;){
printf("\n Seleccione el parámetro por el que desee borrar el registro:\n ");
		printf(" 1: Clave del trabajador.\n ");
		printf(" 2: Nombre del trabajador.\n ");
		printf(" 3: Regresar al menú anterior.\n ");
	scanf("%d",&o);
	system("cls");

		switch(o){
			case 1:{
		printf("Actual registro\n\n");
		imprimir();
		printf("Introduce la clave del trabajador\n");
		scanf("%d",&clave);
		
		for (i=0;i<vcla.size();i++){
			if (clave==vcla[i])
			p=i;
			
		}
			
			vcla.erase( vcla.begin() + p);
			vsal.erase( vsal.begin() + p);
		strcmp(nomcom[p],elim);
		
		for (i=p;i<vcla.size();i++){
				strcpy(nomcom[i],nomcom[i+1]);
	
		}
	printf("\nNuevo registro\n\n");
	imprimir();
	printf("\n");	
	menu();	
	break;
			
			}		
	case 2:{
		printf("Actual registro\n\n");
		imprimir();
		printf("Introduce el nombre del trabajador\n");
		getchar();
		gets(nombre);
		for (i=0;i<vcla.size();i++){

		if(strcmp(nomcom[i],nombre)==0){
			p=i;
		}
			
		}
			
			vcla.erase( vcla.begin() + p);
			vsal.erase( vsal.begin() + p);
			strcmp(nomcom[p],elim);
		
		for (i=p;i<vcla.size();i++){
				strcpy(nomcom[i],nomcom[i+1]);
	
		}
	printf("\nNuevo registro\n\n");
	imprimir();
	printf("\n");	
	menu();		
	break;
		
	}
		case 3:
			{
			return;
			break;
			}	
		default:{
			printf(" \n Elija una opción válida.\n\n ");	
			
		}	
		
			
		}
		
	}
	
			
}
void imprimir(){

		printf("\tCLAVE \t\tNOMBRE DEL TRABAJADOR\t\tSALARIO\n");
				for(i=0; i<vcla.size(); i++)
			{
				strupr(nomcom[i]);
				if (vcla[i]<10){
					printf("\t000%d\t\t%s\t\t%.2f\n", vcla[i], nomcom[i], vsal[i]);
				}
					else if (vcla[i]<100){
					printf("\t00%d\t\t%s\t\t%.2f\n", vcla[i], nomcom[i], vsal[i]);
				}
					else if (vcla[i]<1000){
					printf("\t0%d\t\t%s\t\t%.2f\n", vcla[i], nomcom[i], vsal[i]);
				}
				else {
					printf("\t%d\t\t%s\t\t%.2f\n", vcla[i], nomcom[i], vsal[i]);	
				}
				
			}
			printf("\n");
}
void modificar(){
				int ncla,clave,mod,i;
				float nsal,sal;
				char nombre[50],nnom[50],n2;
			for (;;){		
		printf("\n Seleccione el parámetro por el que desee modificar el registro:\n ");
		printf(" 1: Clave del trabajador.\n ");
		printf(" 2: Nombre del trabajador.\n ");
		printf(" 3: Salario del trabajador.\n ");
		printf(" 4: Regresar al menú anterior.\n ");
		scanf("%d", &mod);
		system("cls");
		switch(mod){
			case 1: {
				printf(" Modificar clave del trabajador.\n\n ");
				imprimir();
				printf("¿Cuál clave quieres modificar?\n");
				scanf("%d",&clave);
				printf("Dame la nueva clave\n");
				scanf("%d",&ncla);
				while (ncla>10000||ncla<0){
						printf("Clave no válida.Intente de nuevo\n");										
						printf("\nDame la nueva clave\n");
						scanf("%d",&ncla);
					}
				
				for (i=0;i<vcla.size();i++){
					if(clave==vcla[i])
					{
						vcla[i]=ncla;
					}
				}
					
				imprimir();
				printf("\n");	
				menu();
				break;
			}
			case 2: {
				printf(" Modificar nombre del trabajador.\n\n ");
				imprimir();	
				printf("¿Cuál nombre quieres modificar?\n");
				getchar();
				gets(nombre);
				printf("Dame el nuevo nombre\n");
				getchar();
				gets(nnom);
				for (i=0;i<vcla.size();i++){
					if(strcmp(nomcom[i],nombre)==0)
					{
						strcpy(nomcom[i],nnom);
					}
				}
				imprimir();			
				menu();				
				break;
			} 
			case 3: {
				printf(" Modificar salario del trabajador.\n\n ");
				imprimir();
				printf("¿Cuál salario quieres modificar?\nEn caso de agregar decimales usar coma(,)\n");
				scanf("%f",&sal);
				printf("Dame el nuevo salario\nEn caso de agregar decimales usar coma(,)\n");
				scanf("%f",&nsal);
				for (i=0;i<vcla.size();i++){
					if(vsal[i]==sal)
					{
						vsal[i]=nsal;
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

