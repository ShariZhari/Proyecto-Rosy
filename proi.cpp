#include <bits/stdc++.h>
#include <locale.h>


using namespace std;
int i, j, x=0, x1=0, x2=0, y=10, z=10, vcla[10];
float vsal[10];
char nom [20][10]={"Pedro", "Esteban", "Hilda", "Valeria", "Bruno", "Victor", "Silvia", "Jennifer", "Mario", "Julio", "Dalia", "Alondra", "Jonathan", "Octavio", "Melissa", "Andrea", "Axel", "Gabriel", "Samantha", "Karina"};
char aPat[20][10]={"Dominguez", "Salazar", "Andrade", "Saucedo", "Quiroz", "Serna", "Gutierrez", "Luna", "Rodriguez", "Jimenez", "Rivera", "Pacheco", "Sierra", "Medrano", "Ortega", "Anaya", "Duran", "Nava", "Romero", "Quezada"};
char aMat[20][10]={"Santana", "Arias", "Uribe", "Esquivel", "Solis", "Escobedo", "Chavez", "Rangel", "Esparza", "Herrera", "Zaragoza", "Torres", "Hernandez", "Soto", "Medina", "Varela", "Reyes", "Ortiz", "Lozano", "Medina"};
char nomcom [10][50];
void menu();
void borrar();
void imprimir();
void modificar();
void buscar();
void burb(int k, int l);
void ordenar();
void ingresar();
int verfClav();
int noRCla();
int verfNom();
void noRNom(int va, int fu);
float verfSal();


int main()
{	system("color 03");
	setlocale(LC_ALL, "spanish");
	srand (time(NULL));
	int op, men=1;
	
	//inicializar vectores con valores aleatorios
	for(i=0; i<10; i++)	{		
		vcla[i]=rand()%9000+1000;
		vsal[i]=rand()%9000+1000;
		x=rand()%20;
 		x1=rand()%20;
  		x2=rand()%20;
		sprintf(nomcom[i], "%s %s %s", nom[x], aPat[x1], aMat[x2]);	
		strupr(nomcom[i]);
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
			if(z==0){ //valida que existan 1 o más registros para iniciar la función
			printf("\n  No existen registros disponibles para mostrar, por favor ingrese más registros\n\n ");
			menu();	
			}else{
			imprimir();
			printf("\n");
			menu();
			}
		break; 
		}
		
		case 2: {
			printf("\n  -Buscar un registro\n\n ");	
			if(z==0){
			printf("\n  No existen registros disponibles para buscar, por favor ingrese más registros\n\n ");
			menu();	
			}else{
			buscar();
			}
		break; 
		}
		
		case 3: {
			printf("\n  -Ordenar alfabéticamente\n\n ");
			if(z==0){
			printf("\n  No existen registros disponibles para ordenar, por favor ingrese más registros\n\n ");
			menu();	
			}else{	
			ordenar();
			}
		break; 
		}
		
		case 4: {
			printf("\n  -Insertar nuevos registros\n\n ");				
			ingresar();
			menu();
		break; 
		}
		
		case 5: {
			printf("\n  -Eliminar un registro\n\n ");
			if(z==0){
			printf("\n  No existen registros disponibles para eliminar, por favor ingrese más registros\n\n ");
			menu();	
			}else{
			borrar();
			}
		break; 
		}
		
		case 6: {
	
		printf("\n  -Modificar clave, nombre o salario de un trabajador\n\n ");	
			if(z==0){
			printf("\n  No existen registros disponibles para modificar, por favor ingrese más registros\n\n ");
			menu();	
			}else{
			modificar();
			}
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

void buscar(){
	int o,bcla,p=0;
	char bnom[50];
	for(;;){
		printf(" Seleccione el parámetro que desee otorgar para buscar un registro:\n ");
		printf(" 1: Nombre del trabajador.\n ");
		printf(" 2: Clave del trabajador.\n ");	
		printf(" 3: Regresar al menú anterior.\n ");
	scanf("%d",&o);
	system("cls");
	switch(o){
		case 1:{
			printf("\nRegistro de trabajadores\n");
			imprimir();
			printf("Buscar por nombre del trabajador\n\n");
			printf("Introduzca el nombre del trabajador. Recuerde de poner todo el nombre en mayúsculas y sin acentos\n");
			p=verfNom();
			for (i=0;i<z;i++){
				if(strcmp(nomcom[i],nomcom[p])==0){
				printf("\tClave \t\tNombre del trabajador\t\tSalario\n ");
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
			}
			printf("\n Presione cualquier tecla para regresar al menu anterior\n");
			getchar();
  			system("cls");	
			break;
		}
		case 2:{
			printf("\nRegistro de trabajadores\n");
			imprimir();
			printf("Buscar por clave del trabajador\n\n");
			printf("Introduzca la clave del trabajador\n");
			bcla=verfClav();
			for(i=0;i<z;i++){
				if (vcla[i]==bcla){
					printf("\tClave \t\tNombre del trabajador\t\tSalario\n ");
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
			}
			menu();
			break;
		}
		case 3:{
			return;
			break;
		}
		default:{
			printf(" \n Elija una opción válida.\n\n ");			
			}		
		}		
	}
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
				
				for(i=0; i<z; i++){
					for(j=0; j<z; j++){
						if(vcla[i]<vcla[j]){
						burb(i,j);				
						}
					}		
				}	
				imprimir();
				printf("\n");	
				printf("\n Presione cualquier tecla para regresar al menu anterior\n");
				getchar();
  				system("cls");
				break;
			}
			case 2: {
				printf(" Ordenar por nombre del trabajador.\n\n ");
				for(i=0; i<z; i++){
					for(j=0; j<z; j++){
						if(strcmp(nomcom[i], nomcom[j])<0){
						burb(i,j);
						}
					}
				}
				imprimir();			
				printf("\n Presione cualquier tecla para regresar al menu anterior\n");
				getchar();
  				system("cls");				
				break;
			} 
			case 3: {
				printf(" Ordenar por salario del trabajador.\n\n ");
				for(i=0; i<z; i++){
					for(j=0; j<z; j++){
						if(vsal[i]<vsal[j]){
						burb(i,j);
						}
					}		
				}	
				imprimir();
				printf("\n");				
				printf("\n Presione cualquier tecla para regresar al menu anterior\n");
				getchar();
  				system("cls");	
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
void ingresar (){
	int tc, tif=4;
if(z<10){

	printf("Ingrese el nombre del nuevo trabajador. Recuerde de no utilizar acentos\n");
	getchar();
	noRNom(z, tif); //esta función revisa que el nombre que se vaya a ingresar no esté repetido con otro del registro
	printf("Ingrese la clave del nuevo trabajador. Recuerde usar números positivos de hasta 4 dígitos\n");
	vcla[z]=noRCla();		
	printf("Ingrese el salario del nuevo trabajador. Recuerde usar números positivos\n");
	scanf("%f",&vsal[z]);
		while (vsal[z]<0){
						printf("Salario no válido.Intente de nuevo\n");										
						printf("\nIngrese el salario del nuevo trabajador\n");
						scanf("%f",&vsal[z]);
					}
	z++;
	imprimir();
}
	else {
		printf("El número de trabajadores está en su máximo\n");
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

void borrar (){
			int o,clave,k,j,p;
			char nombre[50],elim[]={'\0'};

for(;;){
		if(z==0){
		printf("\n  No existen registros disponibles para eliminar, por favor ingrese más registros\n\n ");
		printf("\n Presione cualquier tecla para regresar al menu anterior\n");
		getchar();
  		system("cls");	
		return;
		}else{	
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
		clave=verfClav();
		
		for (i=0;i<z;i++){
			if (clave==vcla[i])
			p=i;	
		}
			vcla[p]=0;
			vsal[p]=0;
			strcpy(nomcom[p],elim);
			z--;
			
		for (i=p;i<z;i++){
				strcpy(nomcom[i],nomcom[i+1]);
				vcla[i]=vcla[i+1];
				vsal[i]=vsal[i+1];
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
		printf("Introduce el nombre del trabajador. Recuerde de poner todo el nombre en mayúsculas y sin acentos\n");
		p=verfNom();
	
			vcla[p]=0;
			vsal[p]=0;
			strcpy(nomcom[p],elim);
			z--;
		
		for (i=p;i<z;i++){
				strcpy(nomcom[i],nomcom[i+1]);
				vcla[i]=vcla[i+1];
				vsal[i]=vsal[i+1];
	
		}
	printf("\nNuevo registro\n\n");
	imprimir();
	printf("\n");	
	printf("\n Presione cualquier tecla para regresar al menu anterior\n");
	getchar();
    system("cls");	
	break;
		
	}
		case 3:	{
			return;
			break;
			}	
		default:{
			printf(" \n Elija una opción válida.\n\n ");			
			}		
		}	
	}
	}
}

void modificar(){
				int ncla,clave,mod,p=0, tpf=6;
				float nsal,sal;
				char nnom[50];
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
				clave=verfClav();
				printf("\nDame la nueva clave. Recuerda utilizar números positivos de hasta 4 dígitos\n");
				ncla=noRCla();		
				for (i=0;i<z;i++){
					if(clave==vcla[i])	{
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
				printf("¿Cuál nombre quieres modificar? Recuerde de poner todo el nombre en mayúsculas y sin acentos\n");
				p=verfNom();
				printf("\nDame el nuevo nombre\n");
				noRNom(p, tpf);
				imprimir();			
				printf("\n Presione cualquier tecla para regresar al menu anterior\n");
				getchar();
   				system("cls");			
				break;
			} 
			case 3: {
				printf(" Modificar salario del trabajador.\n\n ");
				imprimir();
				printf("¿Cuál salario quieres modificar?\nEn caso de agregar decimales usar coma(,)\n");
				sal=verfSal();
				printf("\nDame el nuevo salario\nEn caso de agregar decimales usar coma(,)\n");
				scanf("%f",&nsal);
					while (nsal<0){
						printf("Salario no válido.Intente de nuevo\n");										
						printf("\nIngrese el salario del nuevo trabajador\n");
						scanf("%f",&nsal);
					}
				
				for (i=0;i<z;i++){
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

void imprimir(){
		printf("\tClave \t\tNombre del trabajador\t\tSalario\n ");
				for(i=0; i<z; i++)
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

int verfClav(){
	int w=0, yes=0;
	for(;;){
		
		scanf("%d",&w);
		for (i=0;i<z;i++){
			if (w==vcla[i]){
			yes=1;		
			} 
		}
		if(yes!=1){
			printf("\nClave no encontrada, intente de nuevo\n");
				printf("Introduce la clave del trabajador\n");
		}	else{
				return(w);
				break;
				}
			}
}

int noRCla(){
	int b=0, yes=0;
	for(;;){
	yes=0;
	scanf("%d",&b);
		while (b>10000||b<0){
					printf("Clave no válida. Intente de nuevo\n");										
					printf("Introduce la clave del trabajador. Recuerde de usar números positivos de hasta 4 cifras\n");
					scanf("%d",&b);
					}
			for (i=0;i<z;i++){
			if (b==vcla[i]){
				yes=1;		
			} 
		}
		if(yes==1){
			printf("\nEsa clave ya se encuentra en el registro, favor de introducir una clave diferente\n");	
			printf("Introduce la clave del trabajador\n");
		} else{
				return(b);
				break;
				}
			}		
}
	
int verfNom(){
	int w=0, yes=0;
	char nu[50];
		getchar();
		scanf("%[^\n]%*c", nu);	
	for(;;){
		for (i=0;i<z;i++){
			if (strcmp(nomcom[i],nu)==0){
			yes=1;
			w=i;		
			} 
		}
		if(yes!=1){
			printf("\nNombre no encontrado, intente de nuevo\n");
			printf("Introduce el nombre del trabajador. Recuerde poner todo el nombre sin mayúsculas y sin acentos\n");
			scanf("%[^\n]%*c", nu);	
		}	else{
				return(w);
				break;
				}
			}
}

void noRNom(int va, int fu){ 
	int yes=0;
	char nRn[50];
		scanf("%[^\n]%*c", nRn);	
	for(;;){
		yes=0;
		for (i=0;i<z;i++){
			if (strcmp(nomcom[i],nRn)==0){
			yes=1;		
			} 
		}
		if(yes==1){
			printf("\nEse nombre ya se encuentra en el registro, favor de introducir un nombre diferente\n");
			printf("Introduce el nombre del trabajador. Recuerde poner todo el nombre sin mayúsculas y sin acentos\n");
			scanf("%[^\n]%*c", nRn);	
		}	else{
				break;
				}
			}
		if(fu==4) { //la variable fu identifica la función de la que proviene la llamada a noRNom. Si viene de la función 4, insertará un nuevo nombre. Si viene de la función 6, modificará un nombre.
				strcpy(nomcom[va], nRn);
				return;
			}
		else if (fu==6) {
					for (i=0;i<z;i++){
					if(strcmp(nomcom[i],nomcom[va])==0)	{
						strcpy(nomcom[i],nRn);
					}
				}
		}
}

float verfSal(){
	int yes=0;
	float v=0;
	for(;;){
		
		scanf("%f",&v);
		for (i=0;i<z;i++){
			if (v==vsal[i]){
			yes=1;		
			} 
		}
		if(yes!=1){
			printf("\nSalario no encontrado, intente de nuevo\n");
				printf("Introduce el salario del trabajador\n");
		}	else{
				return(v);
				break;
			}
	}	
}

void menu()
{
	printf("\n Presione cualquier tecla para regresar al menu anterior\n");
	getchar();
    getchar();
    system("cls");
}
