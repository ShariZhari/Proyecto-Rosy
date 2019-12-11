#include <bits/stdc++.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int x=0, y=0;

int vecbin[50];
int vecoct[50];
int vecmay[50];

void bin();
void oct();
void may();
void matrixtl();
void menu();
void pred();
void gotoxy(int x,int y);
int main()
{	
	setlocale(LC_ALL, "spanish");
	int op, men=1, nu=1; 
	while (men==1)
	{
	printf("\n * MENÚ *\n\n");
	printf(" Seleccione la opción que desee ejecutar:\n ");
	printf(" 1: Conversiones de decimal a binario, octal o maya.\n ");
	printf(" 2: Matrices de aydacencia e incidencia.\n ");
	printf(" 3: Lógica de proposiciones.\n ");
	printf(" 4: Lógica de predicados.\n ");
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
			printf("\n Selecciona la base a la que deseas convertir tu número decimal:\n ");
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
			printf(" \n Elige una opción válida.\n\n ");			
			}			
		}			
		}
		nu=1;
		break; 
		}
		
		case 2: {
			printf("\n  -Matrices de aydacencia e incidencia\n\n ");
			matrixtl();
			menu();
						
		break; 
		}
		
		case 3: {
			printf("\n  -Lógica de proposiciones\n\n ");
		
			menu();	
		break; 
		}
		
		case 4: {
			printf("\n  -Lógica de predicados\n\n ");	
			pred();			
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
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
void pred(){
		char a[]="perros",b[]="tigres",c[]="leones",d[]="Todos los",e[]="Algunos",f[]="Ninguno de los",g[]="tienen garras",h[]="tienen gran estatura",j[]="tienen pelaje",op[3],gr[20],el[20],cu[20],gr2[20],el2[20],com[50],y[3][3],x[2],z[2],o[2];
	do{
	int i=0;
	printf("Elige uno de los siguientes grupos de animales\n");
	printf("1.%s\n",a);
	printf("2.%s\n",b);
	printf("3.%s\n",c);
	printf("Ingrese sólo un número\n");
	scanf("%s",&op[i]);
	if (op[i]!='1'&&op[i]!='2'&&op[i] !='3'){
			do {
				printf("Error\nIntente de nuevo\n");
				system("pause");
				system("cls");
					printf("Elige uno de los siguientes grupos de animales\n");
					printf("1.%s\n",a);
					printf("2.%s\n",b);
					printf("3.%s\n",c);
					printf("Ingrese sólo un número\n");
					scanf("%s",&op[i]);
				system("cls");
				}
				while (op[i]!='1'&&op[i]!='2'&&op[i]!='3');
	}
	
	system("cls");
	printf("¿Cuántos elementos del grupo se tomarán?\n");
	printf("1.Todos\n");
	printf("2.Algunos\n");
	printf("3.Ninguno\n");
	printf("Ingrese sólo un número\n");
	scanf("%s",&y[i]);
		if (strcmp(y[i],"1")!=0&&strcmp(y[i],"2")!=0&&strcmp(y[i],"3")!=0){
			do {
				printf("Error\nIntente de nuevo\n");
				system("pause");
				system("cls");
				printf("¿Cuántos elementos del grupo se tomarán?\n");
				printf("1.Todos\n");
				printf("2.Algunos\n");
				printf("3.Ninguno\n");
				printf("Ingrese sólo un número\n");
				scanf("%s",&y[i]);
				system("cls");
				}
				while (strcmp(y[i],"1")!=0&&strcmp(y[i],"2")!=0&&strcmp(y[i],"3")!=0);
	}
	system("cls");
	printf("¿Deseas añadir otro grupo?\n");
	printf("1.Sí\n2.No\n");
	printf("Ingrese sólo un número\n");
	scanf("%s",&x);
	if(x[0]!='1'&&x[0]!='2'){
		do {
			printf("Error\nIntente de nuevo\n");
			system("pause");
			system("cls");
			printf("¿Deseas añadir otro grupo?\n");
			printf("1.Sí\n2.No\n");
			printf("Ingrese sólo un número\n");		
			scanf("%s",&x);
			}
		while (x[0]!='1'&&x[0]!='2');
	}
	system("cls");
	switch (x[0]){
		case '1':{
			i++;
			if (op[0]=='1'){
				printf("Elige uno de los siguientes grupos de animales\n");
				printf("2.%s\n",b);
				printf("3.%s\n",c);
				printf("Ingrese sólo un número\n");
				scanf("%s",&op[i]);
				if (op[i]!='2'&&op[i] !='3'){
			do {
				printf("Error\nIntente de nuevo\n");
				system("pause");
				system("cls");
					printf("Elige uno de los siguientes grupos de animales\n");
					printf("2.%s\n",b);
					printf("3.%s\n",c);
					printf("Ingrese sólo un número\n");
					scanf("%s",&op[i]);
				system("cls");
				}
				while (op[i]!='2'&&op[i]!='3');
	}
				system("cls");
			printf("¿Cuántos elementos del grupo se tomarán?\n");
	printf("1.Todos\n");
	printf("2.Algunos\n");
	printf("3.Ninguno\n");
	printf("Ingrese sólo un número\n");
	scanf("%s",&y[i]);
		if (strcmp(y[i],"1")!=0&&strcmp(y[i],"2")!=0&&strcmp(y[i],"3")!=0){
			do {
				printf("Error\nIntente de nuevo\n");
				system("pause");
				system("cls");
				printf("¿Cuántos elementos del grupo se tomarán?\n");
				printf("1.Todos\n");
				printf("2.Algunos\n");
				printf("3.Ninguno\n");
				printf("Ingrese sólo un número\n");
				scanf("%s",&y[i]);
				system("cls");
				}
				while (strcmp(y[i],"1")!=0&&strcmp(y[i],"2")!=0&&strcmp(y[i],"3")!=0);
	}
				system("cls");
		
				
			}
			else if (op[0]=='2'){
			printf("Elige uno de los siguientes grupos de animales\n");
			printf("1.%s\n",a);
			printf("3.%s\n",c);
			printf("Ingrese sólo un número\n");
			scanf("%s",&op[i]);
			if (op[i]!='1'&&op[i] !='3'){
			do {
				printf("Error\nIntente de nuevo\n");
				system("pause");
				system("cls");
					printf("Elige uno de los siguientes grupos de animales\n");
					printf("1.%s\n",a);
					printf("3.%s\n",c);
					printf("Ingrese sólo un número\n");
					scanf("%s",&op[i]);
				system("cls");
				}
				while (op[i]!='1'&&op[i]!='3');
	}
			system("cls");
		printf("¿Cuántos elementos del grupo se tomarán?\n");
	printf("1.Todos\n");
	printf("2.Algunos\n");
	printf("3.Ninguno\n");
	printf("Ingrese sólo un número\n");
	scanf("%s",&y[i]);
		if (strcmp(y[i],"1")!=0&&strcmp(y[i],"2")!=0&&strcmp(y[i],"3")!=0){
			do {
				printf("Error\nIntente de nuevo\n");
				system("pause");
				system("cls");
				printf("¿Cuántos elementos del grupo se tomarán?\n");
				printf("1.Todos\n");
				printf("2.Algunos\n");
				printf("3.Ninguno\n");
				printf("Ingrese sólo un número\n");
				scanf("%s",&y[i]);
				system("cls");
				}
				while (strcmp(y[i],"1")!=0&&strcmp(y[i],"2")!=0&&strcmp(y[i],"3")!=0);
	}
			system("cls");
				
			}
		  else if (op[0]=='3'){
			printf("Elige uno de los siguientes grupos de animales\n");
			printf("1.%s\n",a);
			printf("2.%s\n",b);
			printf("Ingrese sólo un número\n");
			scanf("%s",&op[i]);
			system("cls");
			if (op[i]!='1'&&op[i]!='2'){
			do {
				printf("Error\nIntente de nuevo\n");
				system("pause");
				system("cls");
					printf("Elige uno de los siguientes grupos de animales\n");
					printf("1.%s\n",a);
					printf("2.%s\n",b);
					printf("Ingrese sólo un número\n");
					scanf("%s",&op[i]);
				system("cls");
				}
				while (op[i]!='1'&&op[i]!='2');
		}
		system("cls");
	printf("¿Cuántos elementos del grupo se tomarán?\n");
	printf("1.Todos\n");
	printf("2.Algunos\n");
	printf("3.Ninguno\n");
	printf("Ingrese sólo un número\n");
	scanf("%s",&y[i]);
		if (strcmp(y[i],"1")!=0&&strcmp(y[i],"2")!=0&&strcmp(y[i],"3")!=0){
			do {
				printf("Error\nIntente de nuevo\n");
				system("pause");
				system("cls");
				printf("¿Cuántos elementos del grupo se tomarán?\n");
				printf("1.Todos\n");
				printf("2.Algunos\n");
				printf("3.Ninguno\n");
				printf("Ingrese sólo un número\n");
				scanf("%s",&y[i]);
				system("cls");
				}
				while (strcmp(y[i],"1")!=0&&strcmp(y[i],"2")!=0&&strcmp(y[i],"3")!=0);
	}
			system("cls");
				
			}
			else {
			
			}
			break;
		}
	}
	
	printf("Elige una cualidad\n");
	printf("1.Tienen garras\n");
	printf("2.Tienen gran estatura\n");
	printf("3.Tienen pelaje\n");
	printf("Ingrese sólo un número\n");
	scanf("%s",&z);
	if(z[0]!='1'&&z[0]!='2'&&z[0]!='3'){
		do{
			printf("Error\nIntente de nuevo\n");
		system("pause");
		system("cls");
			printf("Elige una cualidad\n");
	printf("1.Tienen garras\n");
	printf("2.Tienen gran estatura\n");
	printf("3.Tienen pelaje\n");
	printf("Ingrese sólo un número\n");
	scanf("%s",&z);
		}
		while (z[0]!='1'&&z[0]!='2'&&z[0]!='3');
		
	}
	switch(op[0]){
		case '1':
			{
			strcpy(gr,a);
				break;
			}
		case '2':{
			strcpy(gr,b);
			break;
		}
		case '3':
			{
			strcpy(gr,c);
			break;
			}
	}
	switch(y[0][0]){
		case '1':{
			strcpy(el,d);
			break;
		}
		case '2':{
			strcpy(el,e);
			break;
		}
		case '3':{
			strcpy(el,f);
			break;
		}
	}
	switch(z[0]){
		case '1':{
			strcpy(cu,g);
			break;
		}
		case '2':{
			strcpy(cu,h);
			break;
		}
		case '3':{
			strcpy(cu,j);
			break;
		}
	}
		switch(op[1]){
		case '1':
			{
			strcpy(gr2,a);
				break;
			}
		case '2':{
			strcpy(gr2,b);
			break;
		}
		case '3':
			{
			strcpy(gr2,c);
			break;
			}
	}
	switch(y[1][0]){
		case '1':{
			strcpy(el2,d);
			break;
		}
		case '2':{
			strcpy(el2,e);
			break;
		}
		case '3':{
			strcpy(el2,f);
			break;
		}
	}
	
	if (x[0]=='2'){
		system("cls");
		printf("Oración:\n");
		sprintf(com,"%s %s %s\n",el,gr,cu);
		printf(com);
	}
	else if (x[0]=='1'){
		system("cls");
		strlwr(el2);
		printf("Oración:\n");
		sprintf(com,"%s %s y %s %s %s\n",el,gr,el2,gr2,cu);
		printf(com);
	}
system("pause");
system("cls");
printf("¿Desea realizar otro ejercicio?\n1.Sí\n2.No\n");
printf("Ingrese sólo un número\n");
scanf("%s",&o);
if (o[0]=='1'){
	system("cls");
}
if (o[0]=='2'){
	system("cls");
}
if (o[0]!='1'&&o[0]!='2'){
	do {
		printf("Error\nIntente de nuevo\n");
		printf("¿Desea realizar otro ejercicio?\n");
		scanf("%s",&o);
		system("cls");

}
while(o[0]!='1'&&o[0]!='2');
}
}
while (o[0]!='2');
}

void bin() {
	int cnt=0;
	printf("\n  -Conversión de decimal a binario\n\n ");
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
	printf("\n  -Conversión de decimal a octal\n\n ");
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
	printf("\n  -Conversión de decimal a maya\n\n ");
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

void matrixtl() {

    //Pedir el volumen de datos
    int edges=0, nodes=0;
    printf("Ingresa el numero de nodos: ");
    scanf("%i", &nodes);
    printf("Ingresa el numero de aristas: ");
    scanf("%i", &edges);

    //Inicializar las matrices de incidencia y de adyacencia en ceros
    int** i_matrix = new int* [nodes];
    int** a_matrix = new int* [nodes];
    for (int i = 0; i < nodes; i++) {
        i_matrix[i] = new int[edges];
        a_matrix[i] = new int[nodes];
        for (int j = 0; j < edges; j++)
            i_matrix[i][j] = 0;
        for (int k = 0; k < nodes; k++)
            a_matrix[i][k] = 0;
    }
    
    //Pedir y almacenar las relaciones entre los nodos del grafo
    int counter=0;
    printf("Ingresa las relaciones con el formato [nodo1-nodo2].\n");
    while (counter < edges) {
        int node1, node2;
        while (true) {
            printf("Arista %c: ", char(counter + 97));
            scanf("%i-%i", &node1, &node2);
            node1--; node2--;
            if ((node1<0 || node1>=nodes) || (node2<0 || node2>=nodes))
                printf("*Nodo no valido, intenta otra vez.\n");
            else break;
        }
        i_matrix[node1][counter] += 1;
        i_matrix[node2][counter] += 1;
        a_matrix[node1][node2] += 1;
        a_matrix[node2][node1] += 1;
        counter++;
    }

    //Imprimir ambas matrices
    printf("\nMatriz de Incidencia\n      ");
    for (int i = 0; i < edges; i++)
        printf("%c ", char(i + 97));
    for (int i = 0; i < nodes; i++) {
        printf("\n %.2i | ", i + 1);
        int sum = 0;
        for (int j = 0; j < edges; j++) {
            int val = i_matrix[i][j];
            printf("%i ", val);
            sum += val;
        } printf("= %i", sum);
    } printf("\n\n");

    printf("\nMatriz de Adyacencia\n      ");
    for (int i = 0; i < nodes; i++)
        printf("%.2i ", i + 1);
    for (int i = 0; i < nodes; i++) {
        printf("\n %.2i | ", i + 1);
        int sum = 0;
        for (int j = 0; j < nodes; j++) {
            int val = a_matrix[i][j];
            printf(" %i ", val);
            sum += val;
        } printf("= %i", sum);
    } printf("\n\n");

    //Liberar las matrices de memoria 
    for (int i = 0; i < nodes; i++) {
        delete[] a_matrix[i];
        delete[] i_matrix[i];
    }
    delete[] a_matrix;
    delete[] i_matrix;

}

void menu()
{
	printf("\n Presione cualquier tecla para regresar al menu anterior\n");
	getchar();
    getchar();
    system("cls");
}
