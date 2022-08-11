#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define p printf
#define s scanf
#define pase "gerente"

struct empleado
{ //registro de empleado
    char nombre [30];
    char Apepaterno_E [30];
    char Apematerno_E [30];
    char area[30];
    char usuario[30];
    char password[10];
    int id_empleado;
}empleado [51];
struct socios//estrucura para guardar detoa de los socios
{
    int idsocio,idpago,idahorro,idprestamo,meses,idretiro;
    float saldo, prestamo,paga;
    char nombre[30], Apepaterno[20], ApeMaterno[20],fechaahorro[30],fechapago[30],Fechaprestamo[30],fecharetiro[30];
}socio[51];
int capturar_empleado(int z)//funcion nuevo empleado
{

	int y;
    char cadena_3[100]="";
    char cadena_4[100]="";
    char cadena_5[10]="48";
	for(y=z;y<=z;y++)
	{
        p("\n");
        fflush(stdin);
	    empleado[y].id_empleado=z;
        fflush(stdin);
        p("\ningrese apellido paterno\n");
        gets(empleado[y].Apepaterno_E);
        fflush(stdin);
        p("\ningrese apellido materno\n");
        gets(empleado[y].Apematerno_E);
        fflush(stdin);
        p("\ningrese nombre\n");
        gets(empleado[y].nombre);
        fflush(stdin);
        p("\ningrese area\n");
        fflush(stdin);
        gets(empleado[y].area);
        p("\ningrese usuario\n");
        fflush(stdin);
        gets(empleado[y].usuario);
        //contraseña
        strncpy(cadena_3,empleado[y].Apepaterno_E,2);
        strncpy(cadena_4,empleado[y].nombre,1);
        strcat(empleado[y].password,cadena_3);
        strcat(empleado[y].password,cadena_4);
        strcat(empleado[y].password,cadena_5);
        strlwr(empleado[y].password);
        p("\nSu contrase%ca es: %s\n",164,empleado[y].password);
         p("socio registrado correctamente\n");
        z++;
        system("pause");
        system("cls");
	return(z);
	}
}
void mostrar_empleado(int z)//funcion mostrar socios
{
    	int y;
	for(y=1;y<z;y++)
	{
    p("\nEl id del empleado es:%i\t",empleado[y].id_empleado);
    p("\n Nombre:\n\t%s",empleado[y].nombre);
    p("\n Apellido paterno:\n\t%s",empleado[y].Apepaterno_E);
    p("\n Apellido materno:\n\t%s",empleado[y].Apematerno_E);
    p("\n Area del empleado:\n\t%s",empleado[y].area);
    p("\n Usuario:\n\t%s",empleado[y].usuario);
    p("\n Contrasena:\n\t%s",empleado[y].password);
	p("\n--------------------------------------------\n");
    }
    system("pause");
    system("cls");
}

void buscar_gerente(int z)//funcion buscar por id empleado
{
    char buscar_socio [30];
    int id,y,band=0;
    p("\ningrese el id del empleado\n");
    s("%i",&id);
    for(y=0;y<=z;y++)
    {
        if(id==empleado[y].id_empleado)
        {
            p("\nEl id del empleado es:%i\t",empleado[y].id_empleado);
            p("\n Nombre:\n\t%s",empleado[y].nombre);
            p("\n Apellido paterno:\n\t%s",empleado[y].Apepaterno_E);
            p("\n Apellido materno:\n\t%s",empleado[y].Apematerno_E);
            p("\n Area del empleado:\n\t%s",empleado[y].area);
            p("\n Usuario:\n\t%s",empleado[y].usuario);
            p("\n Contraseña:\n\t%s",empleado[y].password);
            band=1;
        }
    }
    if(band==0)
    {
        p("\n No se encontro ninguna persona registada con este id...\n");

    }
    system("pause");//menu para empleados
    system("cls");
}

void buscar_empleado(int z)//funcion para buscar socio por apellido
{
    int y,band=0;
    char buscarEmpleado[30];

    p("\nIngrese el apellido\n");
   fflush(stdin);
    gets(buscarEmpleado);
    for(y=0;y<=z;y++)
    {
        if(strcmp(buscarEmpleado,empleado[y].Apepaterno_E)== 0)
        {
            p("\nEl id del empleado es:%i\t",empleado[y].id_empleado);
            p("\n Nombre:\n\t%s",empleado[y].nombre);
            p("\n Apellido paterno:\n\t%s",empleado[y].Apepaterno_E);
            p("\n Apellido materno:\n\t%s",empleado[y].Apematerno_E);
            p("\n Area del empleado:\n\t%s",empleado[y].area);
            p("\n Usuario:\n\t%s",empleado[y].usuario);
            p("\n Contrasena:\n\t%s",empleado[y].password);
            p("\n--------------------------------------------");
            band=1;
        }
    }
    if(band==0)
    {
        p("\n No se encontro ninguna persona registada...\n");
    }
    system("pause");
    system("cls");
}

void modificar_em(int z)//funcion para modificar empleado
{
    int id,opc,x;
    p("ingrese id del empleado que desea modificar");
    s("%i",&id);
        if(id==empleado[id].id_empleado)
        {
            do
            {system("cls");
            p("\nEl id del empleado es:%i\t",empleado[id].id_empleado);
            p("\n Nombre:\n\t%s",empleado[id].nombre);
            p("\n Apellido paterno:\n\t%s",empleado[id].Apepaterno_E);
            p("\n Apellido materno:\n\t%s",empleado[id].Apematerno_E);
            p("\n Area del empleado:\n\t%s",empleado[id].area);
            p("\n Usuario:\n\t%s",empleado[id].usuario);
            p("\n Usuario:\n\t%s",empleado[id].password);
            p("\n--------------------------------------------");
            p("\tdesea modificar el nombre presione 1\n");
            p("\tdesea modificar la contrase%ca presione 2\n",164);
            p("\tregresar 3\n");
            s("%i",&opc);
            switch (opc)
            {
                case 1:
                        fflush(stdin);
                        p("\ningrese apellido paterno\n");
                        gets(empleado[id].Apepaterno_E);
                        fflush(stdin);
                        p("\ningrese apellido materno\n");
                        gets(empleado[id].Apematerno_E);
                        fflush(stdin);
                        p("\ningrese nombre\n");
                        gets(empleado[id].nombre);
                        fflush(stdin);
                        break;
                case 2:
                       fflush(stdin);
                       p("\n ingrese nueva contrase%ca");
                       gets(empleado[id].password);
                       fflush(stdin);
                       break;
            }
            }while(opc!=3);
        }
            if(id>=z)
            {
                p("no se encontro a el socio o  ocurrio un error favor de ponerse en contacto con el soporte tecnico\n");
            }
            system("cls");
}

void eliminar(int z)//funcion eliminar empleado
{
    int opc,num, y, band=0;
    char eliminar [100]="";
            p("\nEmpleado que desea eliminar \n");
            s("%i",&num);
            for (y=0;y<=z;y++)
            {
                if(num == empleado [y].id_empleado)
                    {
                        p("\nEl id del empleado es:%i\t",empleado[y].id_empleado);
                        p("\n Nombre:\n\t%s",empleado[y].nombre);
                        p("\n Apellido paterno:\n\t%s",empleado[y].Apepaterno_E);
                        p("\n Apellido materno:\n\t%s",empleado[y].Apematerno_E);
                        p("\n Area del empleado:\n\t%s",empleado[y].area);
                        p("\n Usuario:\n\t%s",empleado[y].usuario);
                        p("\n Usuario:\n\t%s",empleado[y].password);
                        p("\n--------------------------------------------");

                    }
            }
                    p("\n Si desea eliminar este empleado presione 1");
                    p("\n Si no desea eliminarlo presione 2\n");
                    s("%i",&opc);
                    if(opc == 1)
                    {
                        strcpy(empleado[y].nombre,eliminar);
                        strcpy(empleado[y].Apepaterno_E," ");
                        strcpy(empleado[y].Apematerno_E," ");
                        strcpy(empleado[y].area,"");
                        strcpy(empleado[y].usuario,"");
                        strcpy(empleado[y].password,"");
                        p("\n--------------------------------------------\n");
                    }
                if(opc==2)
                {
                     system("cls");

                }


}

void reportes(int w)//funcion reporte
{
    int y;
    int mayor =0;
    int total_ahorro;
    int total_prestamo;
    int total_socios,x;

    for(y=0; socio[y].idahorro!='\0'; y++)
    {
        total_ahorro= socio[y].saldo + total_ahorro;
    }

    for(x=0; socio[x].idprestamo!='\0'; x++)
    {
        total_prestamo= socio[y].prestamo + total_prestamo;
    }

    p("\n\tCantidad \t Total en dinero");
    p("\nahorros\t%i \t %i",y,total_ahorro);
    p("\nprestamo\t%i \t %i",x,total_prestamo);
    p("\nsocios \t%i",w);
}
int capturar(int w)//funcion con parametros y retortno para capturar
{

	int y;
	for(y=w;y<=w;y++)
	{
        p("\n");
        fflush(stdin);
	    socio[y].idsocio=w;
        fflush(stdin);
        p("\ningrese apellido paterno\n");gets(socio[y].Apepaterno);
        fflush(stdin);
        p("\ningrese apellido materno\n");gets(socio[y].ApeMaterno);
        fflush(stdin);
        p("\ningrese nombre\n");gets(socio[y].nombre);
        fflush(stdin);
        p("socio registrado correctamente\n");
        socio[y].saldo=200;
        socio[y].idahorro=w+100;
        socio[y].idpago=w+200;
        socio[y].idprestamo=w+300;
        socio[y].idretiro=w+400;
        system("cls");
        p("\nEl id del socio es:%i\t",socio[y].idsocio);
        p("\n Nombre:\n\t%s %s %s",socio[y].Apepaterno,socio[y].ApeMaterno,socio[y].nombre);
        p("\nel saldo de la persona es----%.2f",socio[y].saldo);
        p("\nlas deudas de la persona es----%.2f",socio[y].prestamo);
        p("\nEl id del ahorro es:%i\t",socio[y].idahorro);
        p("\nEl id del pago es:%i\t",socio[y].idpago);
        p("\nEl id del prestamo es:%i\t",socio[y].idprestamo);
        p("\nEl id del retiro es:%i\n",socio[y].idretiro);

        w++;
        system("pause");
        system("cls");
	return(w);
	}
}
void mostrar(int w)//funcion con parametros para mostrar
{
    	int y;
	for(y=1;y<w;y++)
	{
    p("\nEl id del socio es:%i\t",socio[y].idsocio);
    p("\n Nombre:\n\t%s %s %s",socio[y].Apepaterno,socio[y].ApeMaterno,socio[y].nombre);
	p("\nel saldo de la persona es----%.2f",socio[y].saldo);
	p("\nlas deudas de la persona es----%.2f",socio[y].prestamo);
	p("\nEl id del ahorro es:%i\t",socio[y].idahorro);
	p("\nEl id del pago es:%i\t",socio[y].idpago);
	p("\nEl id del prestamo es:%i\t",socio[y].idprestamo);
	p("\nEl id del retiro es:%i\n",socio[y].idretiro);

	p("\n--------------------------------------------");
    }
    p("\n\t Caja de ahorros\n");
    system("pause");
    system("cls");
}

void buscar(int w)//funcion con parametros para buscar
{
    int id,y,band=0;
    p("\ningrese el id del socio\n");
    s("%i",&id);
    for(y=0;y<=w;y++)
    {
        if(id==socio[y].idsocio)
        {
            p("\nse encontro la persona\t%s %s %s",socio[y].Apepaterno,socio[y].ApeMaterno,socio[y].nombre);
            p("\nel saldo es----%.2f",socio[y].saldo);
            p("\nEl id del pago es:%i\t",socio[y].idpago);
            p("\nel prestamo es----%.2f\n\n",socio[y].prestamo);
            p("\nEl id del retiro es:%i\n",socio[y].idretiro);
            band=1;
        }
    }
    if(band==0)
    {
        p("\n No se encontro ninguna persona registada con este id...\n");
    }
    system("pause");
    system("cls");
}
void modificar(int w)
{   int id,opc,x;
    p("ingrese id del socio que desea modificar");
    s("%i",&id);
        if(id==socio[id].idsocio)
        {
            do
            {system("cls");
            p("\nlos datos del id del socio son los siguientes\n");
            p("\n Nombre:\n\t%s %s %s",socio[id].Apepaterno,socio[id].ApeMaterno,socio[id].nombre);
            p("\nel saldo es----%.2f",socio[id].saldo);
            p("\nel prestamo es----%.2f\n\n",socio[id].prestamo);
            p("\tdesea modificar el nombre presione 1\n");
            p("\tcorreccion en ahorro presione 2\n");
            p("\tsalir 3\n");
            s("%i",&opc);
            switch (opc)
            {
                case 1:
                        fflush(stdin);
                        p("\ningrese apellido paterno\n");gets(socio[id].Apepaterno);
                        fflush(stdin);
                        p("\ningrese apellido materno\n");gets(socio[id].ApeMaterno);
                        fflush(stdin);
                        p("\ningrese nombre\n");gets(socio[id].nombre);
                        fflush(stdin);
                        break;
                case 2:
                       fflush(stdin);
                       p("\n ingrese ahorro");s("%f",&socio[id].saldo);
                       fflush(stdin);
                       break;
            }
            }while(opc!=3);
        }
            if(id>=w)
            {
                p("no se encontro a el socio o a ocurrio un error favor de ponerse en contacto con el soporte tecnico\n");
            }
            system("cls");
}
void ahorro(int w)
{
    int dato1,dato2,dato3,band=0,y;
    float ahorro;
    p("\n\t\tApartado de ahorro\n");
    p("ingrese IDahorro\n");
    s("%i",&dato1);
    p("\ningrese ID empleado\n");
    s("%i",&dato2);
    p("\ningrese IDsocio\n");
    s("%i",&dato3);
    for(y=1;y<w;y++)
        {if(dato1==socio[y].idahorro)
            {
                //aqui pon el if de empleado
               if(dato3==socio[y].idsocio)
               {
                    band=1;
                   system("cls");
                   p("\n datos correctos");
                   fflush(stdin);
                   p("\ningrese fecha ejemplo 2 de noviembre del 2019\n");
                   gets(socio[y].fechaahorro);
                   p("\n Ingrese cantidad\n");
                   s("%f",&ahorro);
                   socio[y].saldo=socio[y].saldo+ahorro;
                   p("\ntotal de saldo\t%.2f\n",socio[y].saldo);
                   fflush(stdin);
                    system("pause");
                    system("cls");
               }
            }
        }
        if(band==0)
           {
            p("\nerror en los datos\n");
            system("pause");
            system("cls");
           }



}
void prestamo(int w)
{
    int y,dato1,dato2,dato3,opc,band=0;
    float prestamo,diferir;
    p("\nApartado de prestamo\n");
    p("ingrese IDprestamo\n");
    s("%i",&dato1);
    p("\ningrese ID empleado\n");
    s("%i",&dato2);
    p("\ningrese IDsocio\n");
    s("%i",&dato3);
    for(y=1;y<w;y++)
    {
    {if(dato1==socio[y].idprestamo)
            {
                //aqui pon el if de empleado
               if(dato3==socio[y].idsocio)
               {
                   if(socio[y].prestamo==0)
                   {
                       p("\ningrese cantidad del prestamo\n");
                       s("%f",&prestamo);
                       prestamo=(prestamo*.10)+prestamo;
                       if(socio[y].saldo>=prestamo)
                       {
                           band=1;
                           fflush(stdin);
                           p("\ningrese fecha ejemplo 2 de noviembre del 2019\n");
                            gets(socio[y].fechapago);
                            fflush(stdin);
                           p("\n acuantos meses desea pagar?\n");
                            socio[y].prestamo=prestamo;
                            p("\t1. A 6 meses \n\t2. 12 meses");
                            s("%i",&opc);
                            switch (opc)
                            {
                            case 1:
                                socio[y].meses=6;
                                diferir=prestamo/6;
                                socio[y].paga=diferir;
                                p("\n usted debe pagar %.2f durante seis meses\n",diferir);
                                p("total con interes %.f\n",prestamo);
                                system("pause");
                                system("cls");
                                break;
                            case 2:
                                socio[y].meses=12;
                                diferir=prestamo/12;
                                socio[y].paga=diferir;
                                p("\n usted debe pagar %.2f durante doce meses\n",diferir);
                                p("total con interes %.f\n",prestamo);
                                system("pause");
                                system("cls");
                                break;
                            }
                       }

                   }
               }
            }
        }
    }
    if(band==0)
    {
        p("\ningreso mal los datos o no tiene la capacidad de pagos\n");
        system("pause");
        system("cls");
    }
}
void pagos(int w)
{
     int y,dato1,dato2,dato3,band=0;
    p("\n apartado de pagos\n");
    p("ingrese IDpagos\n");
    s("%i",&dato1);
    p("\ningrese ID empleado\n");
    s("%i",&dato2);
    p("\ningrese IDsocio\n");
    s("%i",&dato3);
     for(y=1;y<w;y++)
     {
    {if(dato1==socio[y].idpago)
            { if(socio[y].prestamo>0)
            {

                //aqui pon el if de empleado
               if(dato3==socio[y].idsocio)
               {    fflush(stdin);
                   p("\ningrese fecha ejemplo 2 de noviembre del 2019\n");
                   gets(socio[y].fechapago);
                   p("\nusted tiene que pagar %.2f este mes",socio[y].paga);
                   p("\nsu saldo anterio %.2f",socio[y].saldo);
                   p("\nPAGADO\n");
                   socio[y].saldo=socio[y].saldo-socio[y].paga;
                    socio[y].meses=socio[y].meses-1;
                    socio[y].prestamo=socio[y].prestamo-socio[y].paga;
                   p("\nsu saldo actual %.2f",socio[y].saldo);
                   p("\nle quedan %i meses por pagar\n",socio[y].meses);
                    band=1;
                    system("pause");
                    system("cls");

                }
            }
        }
        }
     }

        if(band==0)
           {
            p("\nusted no tiene adeudos o problablemente no escribio bien los datos\n");
            system("pause");
            system("cls");
           }
}
void retiro(int w)
{

     int y,dato1,dato2,dato3,band=0;
     float cantidad,minimo,total,deuda;
    p("\n Retiro de efectivo\n");
    p("ingrese IDretiro\n");
    s("%i",&dato1);
    p("\ningrese ID empleado\n");
    s("%i",&dato2);
    p("\ningrese IDsocio\n");
    s("%i",&dato3);

     for(y=1;y<w;y++)
     {
         if(dato1==socio[y].idretiro)
            {
                //aqui pon el if de empleado
               if(dato3==socio[y].idsocio)
               {
                   if(socio[y].prestamo==0)
                   {
                       fflush(stdin);
                        p("\ningrese fecha ejemplo 2 de noviembre del 2019\n");
                        gets(socio[y].fecharetiro);
                       p("\nrecuerde tiene que dejar un 20 porciento del ahorro para seguir activo en caja\ningrese candida a retirar \n");
                       s("%f",&cantidad);
                       minimo=socio[y].saldo*.80;
                       if(minimo>=cantidad)
                       {
                        p("\nRetiro extioso\n");
                       socio[y].saldo=socio[y].saldo-cantidad;
                       band=1;
                       system("pause");
                       system("cls");
                        }
                        }
                if(socio[y].prestamo>=1)
                {
                        fflush(stdin);
                        p("\ningrese fecha ejemplo 2 de noviembre del 2019\n");
                        gets(socio[y].fecharetiro);
                       p("\nrecuerde tiene que dejar un 20 porciento del ahorro para seguir activo en caja\ningrese candida a retirar \n");
                       s("%f",&cantidad);
                       deuda=socio[y].saldo-socio[y].prestamo;
                       minimo=deuda*.80;
                       if(minimo>=cantidad)
                       {
                        p("\nRetiro extioso\n");
                       socio[y].saldo=socio[y].saldo-cantidad;
                       band=1;
                       system("pause");
                        system("cls");
                       }
                }
                        if(minimo<=cantidad)
                        {
                            p("\nNo se pudo completar dedido a que no cubre el saldo minimo para seguir en la caja de ahorros\n");
                            band=1;
                            system("pause");
                            system("cls");
                        }





                    }

                }
            }

    if(band==0)
        {p("\nA ocurrido un error en los datos favor de varificar\n");
    system("pause");
    system("cls");
        }
}
int main()
{
    //menu para empleados
	int opc,opcp,z=1,i=0,op,w=1,e=0,opcs,opci;
	char gerente[10],usuario[10];
    int clave=0;
    system("color 1F");
    system("cls");
	p("1)Iniciar\n2)Salir\n");
    s("%d",&op);
	while(op==1)
    {
        system("cls");
        p("\nMenu Principal\n");
        p("1)Menu gerente\n2)Menu empleado\n");
        s("%d",&opci);
        if(opci==1)
        {
        system("color A0");
        system("cls");
        fflush(stdin);
        p("\n1.Ingrese usuario\n");
        gets(gerente);
        fflush(stdin);
        p("\n2.Ingrese clave\n");
        s("%i",&clave);
        fflush(stdin);
	if (clave == 1212)
    {
        do//ciclo
        {
        system("cls");
        system("color 30");
        printf("\nGERENTE\n");
        printf("\n1.Nuevo");
        printf("\n2.Mostrar todos");
        printf("\n3.Buscar por codigo");
        printf("\n4.Buscar por apellido paterno");
        printf("\n5.Modificar");
        printf("\n6.Eliminar");
        printf("\n7.Reportes");
        printf("\n8.Cambiar de usuario\n");
        s("%i",&opc);

        switch (opc)//menu captura
        {
        case 1:
                z=capturar_empleado(z);
            break;
        case 2:
                mostrar_empleado(z);
            break;
        case 3:
                 buscar_gerente(z);
            break;
        case 4:
                buscar_empleado(z);
            break;
        case 5:
            modificar_em(z);

            break;

        case 6:
            eliminar(z);
            break;

        case 7:
            reportes(z);
            break;

        }

	}while(opc!=8);
    }
    else
    {
        p("Datos no validos\n");
        e++;
        system("pause");
    }
    }



    if(opci==2)
    {
        system("cls");
            do//ciclo
            {
        //menu para empleados
        system("color 5F");
        p("\t\t\nMenu empleados\n");
        p("\n1. Socios");
        p("\n2. Ahorro");
        p("\n3. Prestamo");
        p("\n4. Pagos");
        p("\n5. Retiro");
        p("\n6. Cambiar de usuario\n");
        p("ingrese opcion----->");
        s("%i",&opc);
        switch (opc)//para el menu de los empleados
        {
		case 1:
                system("cls");
                p("\n\tApartado de socios\n");
                p("\n\t1.- Capturar");
                p("\n\t2.- Mostrar");
                p("\n\t3.- Buscar");
                p("\n\t4.- Modificar");
                p("\n\t5.- Eliminar");
                p("\n\tingrese opcion-->");
                s("%i",&opcs);
                system("cls");
						switch (opcs)//menu captura
						{
						case 1:
                                w=capturar(w);
							break;
							case 2:
							    mostrar(w);
							break;
							case 3:
							    buscar(w);
							break;
							case 4:
							    modificar(w);
							break;
							case 5:
							break;
						}

			break;
            case 2:
                ahorro(w);
			break;
			case 3:
			    prestamo(w);
			break;
			case 4:
                pagos(w);
			break;
			case 5:
			    retiro(w);
			break;

	}
	}while(opc!=6);
    }
    }
    p("Fin del programa\n");
	return 0;

	getch();

}
