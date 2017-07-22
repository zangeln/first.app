#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertar();
void consultar();
void borrar();
void restructurar();
void listar();


struct socios
	{
		int codigo;
		char nombre[20];
		char apellido[30];
		char tlf[12];
		char direc[50];
		char nif[10];
		char poblacion[30];
		char provincia[30];
	};

struct socios datos[10];
int total=0;
int i;
int cod=0;
main()
{
int b;

for(i=0;i<10;i++)
{
	datos[i].codigo=-1; //inicializa el vector para comprobar si esta vacio
}

	while(b!=5)
	{

	printf("\nElige la opcion del menu deseada\n");
	printf("\n1.-INSERTAR\n");
	printf("\n2.-CONSULAR\n");
	printf("\n3.-BORRAR\n");
	/*printf("\n4.-RESTRUCTURAR\n");*/
	printf("\n4.-LISTAR\n");
	printf("\n5.- Salir\n");
	scanf("%d",&b);	
	system("clear");
		switch(b)
		{
		case 1:
			insertar();
			break;

		case 2:
			consultar();
			break;
		
		case 3:
			borrar();
			break;

		/*case 4:
			restructurar();
			break;*/
	
		case 4:
			listar();
			break;
	
		case 5:
			printf("Adios...\n");
			break;
			
		}
	}

}

void insertar()
	{
	
	if(total<10)
	{
		
		i=0;
		while(i<10 && datos[i].codigo!=-1)
		{
			i++;
		}
		
		if (datos[i].codigo==-1)
		{
			printf("\nIntroduce el codigo:  \n");
			scanf("%d",&datos[i].codigo);
			printf("Introduce el nombre:  \n");
			scanf("%s",datos[i].nombre);
			printf("Introduce el apellido:  \n");
			scanf("%s",datos[i].apellido);
			printf("Introduce el telefono:  \n");
			scanf("%s",datos[i].tlf);
			printf("Introduce la direccion:  \n");
			scanf("%s",datos[i].direc);
			printf("Introduce el NIF:  \n");
			scanf("%s",datos[i].nif);
			printf("Introduce la poblacion:  \n");
			scanf("%s",datos[i].poblacion);
			printf("Introduce la provincia:  \n");
			scanf("%s",datos[i].provincia);
			total++;
		}
	
	}
}

	void consultar()
	{
	
	int c=0;
	printf("\n\nIntroduce el codigo a Consultar\n");
	scanf("%d",&c);
	i=0;
	while(i<10 && datos[i].codigo!=c)
	{
		i++;
	}
	if(datos[i].codigo==c)
	{
		printf("\n\nDATOS DEL SOCIO INTRODUCIDO\n\n");
		printf("El codigo es %d\n",datos[i].codigo);
		printf("El nombre es %s\n",datos[i].nombre);
		printf("El apellido es %s\n",datos[i].apellido);
		printf("El telefono es %s\n",datos[i].tlf);
		printf("La direccion es %s\n",datos[i].direc);
		printf("El NIF es %s\n",datos[i].nif);
		printf("La poblacion es %s\n",datos[i].poblacion);
		printf("La provincia es %s\n\n",datos[i].provincia);
	}
	else
	{
		printf("No existe el codigo");
	
	}
	}

	void borrar()
	{

		int b=0;
		printf("\n\nIntroduce el codigo a Borrar\n");
		scanf("%d",&b);
		i=0;
		while(i<10 && datos[i].codigo!=b)
		{
			i++;
		}
		if(datos[i].codigo==b)
		{
			datos[i].codigo=-1;
			total--;
			printf("Elemento Borrado\n");	
			restructurar();
		}
		else
		{
			printf("No existe el codigo\n");
		
		}

	}

	void restructurar()
	{
		//int huecos=2;
		int k=0;
		int j=1;
		
		if(total<10)
		{
			while(j<10)
			{
				if(datos[k].codigo==-1)
				{
				datos[k].codigo=datos[j].codigo;
				strcpy(datos[k].nombre,datos[j].nombre);//copia de 1 cadena a otra
				datos[j].codigo=-1;
					/*if(datos[j].codigo==-1)
					{
						huecos=1;
						datos[j].codigo=-1;
					}
					else{
						if(huecos=1)
						{
							huecos=2;
						}
					} */


				}
			k++;
			j++;
			}
		}
	}

	void listar()
	{	
		i=0;
		while(i<10)
		{
			i++;
		}
		for(i=0;i<10;i++)
		{
			printf("*********************REGISTRO %d **\n",i);
			if (datos[i].codigo!=-1)			
			{
				printf("El codigo es %d\n",datos[i].codigo);
				printf("El nombre es %s\n",datos[i].nombre);
			}
			else
				printf("REGISTRO VACIO...! \n");				
			printf("**************************************\n\n",i);
		}
		
	}
