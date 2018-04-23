/*12
Entregable_10 con clases
Programa: proyecto control de ingresos hospitalarios
Estructura: selectiva multiple y repetitiva do while y while con arreglos y objetos

Autor: Luis Alberto García Rodríguez
N° lista: 7
Fecha: 5 de marzo del 2015

 Implementar la clase Medicamento (Superclase) y Medicamento_perecedero (Subclase) del proyecto.
 En ambas clases implementar los métodos: Capturar, Mostrar, Buscar y Modificar.
*/

#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>//getch

using namespace std;

//Clase medicamento

class medicamento
{
public:
    string idmedicin, medicamentos[13];
    int k, consec, consem, cuan;

void capturarM ();
void mostrarM ();
void buscarM ();
void modificarM ();

friend class m_perecedero;

}medicament;


medicamento existencia[10];

void medicamento::capturarM()
{
    consec=1;
    for (k=0; k<10; k++)
        {
        system ("cls");

        cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

        cout<<"\tIngrese los datos del medicamento consecutivo numero: "<<consec;
        cout<<endl<<endl;

        cout<<"\tId del medicamento:       ";
        cin>>existencia[k].medicamentos[0];
        cin.ignore();
        cout<<"\n";
        cout<<"\tNombre:                   ";
        cin>>existencia[k].medicamentos[1];
        cin.ignore();
        cout<<"\tIngrediente activo:       ";
        cin>>existencia[k].medicamentos[2];
        cin.ignore();
        cout<<"\n";
        cout<<"\tPresentacion:             ";
        cin>>existencia[k].medicamentos[3];
        cin.ignore();
        cout<<"\tMiligramos:               ";
        cin>>existencia[k].medicamentos[4];
        cin.ignore();
        cout<<"\tContenido:                ";
        cin>>existencia[k].medicamentos[5];
        cin.ignore();
        cout<<"\n";
        cout<<"\tVia de administracion:    ";
        cin>>existencia[k].medicamentos[6];
        cin.ignore();
        cout<<"\tDosis:                    ";
        cin>>existencia[k].medicamentos[7];
        cin.ignore();
        cout<<"\n";
        cout<<"\tLote:                     ";
        cin>>existencia[k].medicamentos[8];
        cin.ignore();
        cout<<"\n";
        cout<<"\tPrecio maximo al publico: ";
        cin>>existencia[k].medicamentos[9];
        cin.ignore();
        cout<<"\tMarca:                    ";
        cin>>existencia[k].medicamentos[10];
        cout<<"\tProcedencia:              ";
        cin>>existencia[k].medicamentos[11];

        cout<<"\n\t\t\t\t\t";

        system ("pause");
        system ("cls");

            cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

            cout<<"\tMedicamento capturado, numero consecutivo: "<<consec;
            cout<<"\n\n\tDesea capturar otro medicamento?\n\n\a";
            cout<<"\t 1.- Si \n\t 2.- No \n\n";
            cout<<"\tElige una opcion: ";
            cin>>cuan;

            if (cuan==1)
                {
                cout<<"\n\n\t\t\t";
                consec++;
                system ("pause");
                }
            else
                {
                k=10;
                cout<<"\t\t\t\t\t";
                system ("pause");
                }

            }// fin del bucle for
}

void medicamento::mostrarM()
{
    consem=1;
    for (k=0; k<consec; k++)
        {
        system ("cls");

        cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

        cout<<"\tDatos del medicamento consecutivo numero: "<<consem;
        cout<<endl<<endl;

        cout<<"\tId del medicamento:       "<<existencia[k].medicamentos[0]<<"\n\n";
        cout<<"\tNombre:                   "<<existencia[k].medicamentos[1]<<"\n";
        cout<<"\tIngrediente activo:       "<<existencia[k].medicamentos[2]<<"\n\n";
        cout<<"\tPresentacion:             "<<existencia[k].medicamentos[3]<<"\n";
        cout<<"\tMiligramos:               "<<existencia[k].medicamentos[4]<<"\n";
        cout<<"\tContenido:                "<<existencia[k].medicamentos[5]<<"\n\n";
        cout<<"\tVia de administracion:    "<<existencia[k].medicamentos[6]<<"\n";
        cout<<"\tDosis:                    "<<existencia[k].medicamentos[7]<<"\n\n";
        cout<<"\tLote:                     "<<existencia[k].medicamentos[8]<<"\n\n";
        cout<<"\tPrecio maximo al publico: "<<existencia[k].medicamentos[9]<<"\n";
        cout<<"\tMarca:                    "<<existencia[k].medicamentos[10]<<"\n";
        cout<<"\tProcedencia:              "<<existencia[k].medicamentos[11]<<"\n";
        consem++;
        cout<<"\n\t\t\t\t\t";

        system ("pause");
        }// fin del bucle for
}

void medicamento::buscarM()
{
    system ("cls");

        cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

        cout<<"\nIngresa id del medicamento a buscar:  ";
        cin>>idmedicin;

        for (k=0; k<10; k++)
        {
        if (idmedicin==existencia[k].medicamentos[0])

            {
            //mostrar expediente encontrado
            system ("cls");

            cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

            cout<<"\tDatos del medicamento encontrado: ";
            cout<<endl<<endl;

            cout<<"\tId del medicamento:       "<<existencia[k].medicamentos[0]<<"\n\n";
            cout<<"\tNombre:                   "<<existencia[k].medicamentos[1]<<"\n";
            cout<<"\tIngrediente activo:       "<<existencia[k].medicamentos[2]<<"\n\n";
            cout<<"\tPresentacion:             "<<existencia[k].medicamentos[3]<<"\n";
            cout<<"\tMiligramos:               "<<existencia[k].medicamentos[4]<<"\n";
            cout<<"\tContenido:                "<<existencia[k].medicamentos[5]<<"\n\n";
            cout<<"\tVia de administracion:    "<<existencia[k].medicamentos[6]<<"\n";
            cout<<"\tDosis:                    "<<existencia[k].medicamentos[7]<<"\n\n";
            cout<<"\tLote:                     "<<existencia[k].medicamentos[8]<<"\n\n";
            cout<<"\tPrecio maximo al publico: "<<existencia[k].medicamentos[9]<<"\n";
            cout<<"\tMarca:                    "<<existencia[k].medicamentos[10]<<"\n";
            cout<<"\tProcedencia:              "<<existencia[k].medicamentos[11]<<"\n";


            cout<<"\n\t\t\t\t\t";

            system ("pause");
            break;
            }//fin del if buscar
        }//fin del ciclo for buscar

            if (k>9)
                    {
                    cout<<"\n\n\t\t\tNO EXISTE MEDICAMENTO, INTENTA DE NUEVO...\n\n\t\t\t\t";
                    system ("pause");
                    }

}

void medicamento::modificarM()
{
    system ("cls");

        cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

        cout<<"\nIngresa id del medicamento a modificar:  ";
        cin>>idmedicin;

        bool hallado = false;

        for (k=0; k<10; k++)
        {
        if (idmedicin==existencia[k].medicamentos[0])

            {
            //mostrar expediente encontrado
            system ("cls");

            cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

            cout<<"\tDatos del medicamento encontrado para modificar: ";
            cout<<endl<<endl;

            cout<<"\tId del medicamento:       "<<existencia[k].medicamentos[0]<<"\n\n";
            cout<<"\tNombre:                   "<<existencia[k].medicamentos[1]<<"\n";
            cout<<"\tIngrediente activo:       "<<existencia[k].medicamentos[2]<<"\n\n";
            cout<<"\tPresentacion:             "<<existencia[k].medicamentos[3]<<"\n";
            cout<<"\tMiligramos:               "<<existencia[k].medicamentos[4]<<"\n";
            cout<<"\tContenido:                "<<existencia[k].medicamentos[5]<<"\n\n";
            cout<<"\tVia de administracion:    "<<existencia[k].medicamentos[6]<<"\n";
            cout<<"\tDosis:                    "<<existencia[k].medicamentos[7]<<"\n\n";
            cout<<"\tLote:                     "<<existencia[k].medicamentos[8]<<"\n\n";
            cout<<"\tPrecio maximo al publico: "<<existencia[k].medicamentos[9]<<"\n";
            cout<<"\tMarca:                    "<<existencia[k].medicamentos[10]<<"\n";
            cout<<"\tProcedencia:              "<<existencia[k].medicamentos[11]<<"\n";




            cout<<"\n\t\t\t\t\t";

            system ("pause");
            system ("cls");

                        cout<<"\n";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t**      MEDICAMENTOS         **";
                        cout<<"\n\t**  MENU DE MODIFICACIONES   **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 1.- Nombre                **";
                        cout<<"\n\t** 2.- Ingrediente activo    **";
                        cout<<"\n\t** 3.- Presentacion          **";
                        cout<<"\n\t** 4.- Miligramos            **";
                        cout<<"\n\t** 5.- Contenido             **";
                        cout<<"\n\t** 6.- Via de adm. y Dosis   **";
                        cout<<"\n\t** 7.- Lote                  **";
                        cout<<"\n\t** 8.- Precio y marca        **";
                        cout<<"\n\t** 9.- Procedencia           **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 10.- TODOS LOS ANTERIORES **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 11.- CANCELAR             **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t* Elige una opcion:__";
                        int modif;
                        cin>>modif;

                        switch (modif)
                            {
                            case 1:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion del nombre \n\n";
                                cout<<"\tNombre:                   ";
                                cin>>existencia[k].medicamentos[1];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 2:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion del ingrediente activo \n\n";
                                cout<<"\tiIngrediente activo:      ";
                                cin>>existencia[k].medicamentos[2];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 3:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion de la presentacion \n\n";
                                cout<<"\tPresentacion:             ";
                                cin>>existencia[k].medicamentos[3];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 4:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion de los miligramos \n\n";
                                cout<<"\tMiligramos:               ";
                                cin>>existencia[k].medicamentos[4];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 5:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion del contenido \n\n";
                                cout<<"\tContenido:                ";
                                cin>>existencia[k].medicamentos[5];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 6:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion de la via de administracion y dosis \n\n";
                                cout<<"\tVia de administracion:    ";
                                cin>>existencia[k].medicamentos[6];
                                cout<<"\tDosis:                    ";
                                cin>>existencia[k].medicamentos[7];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 7:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion del lote \n\n";
                                cout<<"\tLote:                     ";
                                cin>>existencia[k].medicamentos[8];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 8:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion del precio y la marca \n\n";
                                cout<<"\tPrecio:                   ";
                                cin>>existencia[k].medicamentos[9];
                                cout<<"\tMarca:                    ";
                                cin>>existencia[k].medicamentos[10];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 9:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion de la procedencia \n\n";
                                cout<<"\tProcedencia:              ";
                                cin>>existencia[k].medicamentos[11];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 10:
                                system ("cls");
                                cout<<"\t\t****** MEDICAMENTOS ******\n\n ";

                                cout<<"\tModificacion de todos los datos del medicamento encontrado \n\n";

                                cout<<"\tNombre:                   ";
                                cin>>existencia[k].medicamentos[1];
                                cout<<"\n\n";
                                cout<<"\tiIngrediente activo:      ";
                                cin>>existencia[k].medicamentos[2];
                                cout<<"\tPresentacion:             ";
                                cin>>existencia[k].medicamentos[3];
                                cout<<"\tMiligramos:               ";
                                cin>>existencia[k].medicamentos[4];
                                cout<<"\n";
                                cout<<"\tContenido:                ";
                                cin>>existencia[k].medicamentos[5];
                                cout<<"\n";
                                cout<<"\tVia de administracion:    ";
                                cin>>existencia[k].medicamentos[6];
                                cout<<"\tDosis:                    ";
                                cin>>existencia[k].medicamentos[7];
                                cout<<"\tLote:                     ";
                                cin>>existencia[k].medicamentos[8];
                                cout<<"\tPrecio:                   ";
                                cin>>existencia[k].medicamentos[9];
                                cout<<"\n";
                                cout<<"\tMarca:                    ";
                                cin>>existencia[k].medicamentos[10];
                                cout<<"\tProcedencia:              ";
                                cin>>existencia[k].medicamentos[11];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 11:
                            cout<<"\n\n\t\tCancelar... \n\n\n\t\t\t\t\t";
                            break;

                            default:
                            cout<<"\n\n\t\tHa elegido una opcion inexistente, intente de nuevo; atras... \n\n\n\t\t\t\t\t";

                            }//Fin del switch de modificaciones

                        cout<<"\n\t\t\t\t\t";
                        system ("pause");

                        hallado=true;

            }//Fin del if

        }//Fin del ciclo for

                if (hallado==true)
                    Sleep(1000);
                else
                    if (hallado==false)
                    {
                    cout<<"\n\n\t\t\tNO EXISTE MEDICAMENTO, INTENTA DE NUEVO...\n\n\t\t\t\t";
                    system ("pause");
                    }

}

//Clase medicamento o perecedero

class m_perecedero : public medicamento
{
public:
    //string perecedero[13];

void capturarMP ();
void mostrarMP ();
void buscarMP ();
void modificarMP ();

friend class medicamento;

}m_pereceder;


m_perecedero existencias[10];


void m_perecedero::capturarMP()
{
    consec=1;
    for (k=0; k<10; k++)
        {
        system ("cls");

        cout<<"\t\t****** PERECEDEROS ******\n\n ";

        cout<<"\tIngrese los datos del perecedero consecutivo numero: "<<consec;
        cout<<endl<<endl;

        cout<<"\tId del perecedero:        ";
        cin>>existencias[k].medicamentos[0];
        cin.ignore();
        cout<<"\n";
        cout<<"\tNombre:                   ";
        cin>>existencias[k].medicamentos[1];
        cin.ignore();
        cout<<"\tIngrediente activo:       ";
        cin>>existencias[k].medicamentos[2];
        cin.ignore();
        cout<<"\n";
        cout<<"\tPresentacion:             ";
        cin>>existencias[k].medicamentos[3];
        cin.ignore();
        cout<<"\tMiligramos:               ";
        cin>>existencias[k].medicamentos[4];
        cin.ignore();
        cout<<"\tContenido:                ";
        cin>>existencias[k].medicamentos[5];
        cin.ignore();
        cout<<"\n";
        cout<<"\tVia de administracion:    ";
        cin>>existencias[k].medicamentos[6];
        cin.ignore();
        cout<<"\tDosis:                    ";
        cin>>existencias[k].medicamentos[7];
        cin.ignore();
        cout<<"\n";
        cout<<"\tLote:                     ";
        cin>>existencias[k].medicamentos[8];
        cin.ignore();
        cout<<"\tCaducidad:                ";
        cin>>existencias[k].medicamentos[9];
        cin.ignore();
        cout<<"\n";
        cout<<"\tPrecio maximo al publico: ";
        cin>>existencias[k].medicamentos[10];
        cin.ignore();
        cout<<"\tMarca:                    ";
        cin>>existencias[k].medicamentos[11];
        cout<<"\tProcedencia:              ";
        cin>>existencias[k].medicamentos[12];

        cout<<"\n\t\t\t\t\t";

        system ("pause");
        system ("cls");

            cout<<"\t\t****** PERECEDEROS ******\n\n ";

            cout<<"\tPerecedero capturado, numero consecutivo: "<<consec;
            cout<<"\n\n\tDesea capturar otro perecedero?\n\n\a";
            cout<<"\t 1.- Si \n\t 2.- No \n\n";
            cout<<"\tElige una opcion: ";
            cin>>cuan;

            if (cuan==1)
                {
                cout<<"\n\n\t\t\t";
                consec++;
                system ("pause");
                }
            else
                {
                k=10;
                cout<<"\t\t\t\t\t";
                system ("pause");
                }

            }// fin del bucle for
}

void m_perecedero::mostrarMP()
{
    consem=1;
    for (k=0; k<consec; k++)
        {
        system ("cls");

        cout<<"\t\t****** PERECEDEROS ******\n\n ";

        cout<<"\tDatos del perecedero consecutivo numero: "<<consem;
        cout<<endl<<endl;

        cout<<"\tId del perecedero:        "<<existencias[k].medicamentos[0]<<"\n\n";
        cout<<"\tNombre:                   "<<existencias[k].medicamentos[1]<<"\n";
        cout<<"\tIngrediente activo:       "<<existencias[k].medicamentos[2]<<"\n\n";
        cout<<"\tPresentacion:             "<<existencias[k].medicamentos[3]<<"\n";
        cout<<"\tMiligramos:               "<<existencias[k].medicamentos[4]<<"\n";
        cout<<"\tContenido:                "<<existencias[k].medicamentos[5]<<"\n\n";
        cout<<"\tVia de administracion:    "<<existencias[k].medicamentos[6]<<"\n";
        cout<<"\tDosis:                    "<<existencias[k].medicamentos[7]<<"\n\n";
        cout<<"\tLote:                     "<<existencias[k].medicamentos[8]<<"\n";
        cout<<"\tCaducidad:                "<<existencias[k].medicamentos[9]<<"\n\n";
        cout<<"\tPrecio maximo al publico: "<<existencias[k].medicamentos[10]<<"\n";
        cout<<"\tMarca:                    "<<existencias[k].medicamentos[11]<<"\n";
        cout<<"\tProcedencia:              "<<existencias[k].medicamentos[12]<<"\n";
        consem++;
        cout<<"\n\t\t\t\t\t";

        system ("pause");
        }// fin del bucle for
}

void m_perecedero::buscarMP()
{
    system ("cls");

        cout<<"\t\t****** PERECEDEROS ******\n\n ";

        cout<<"\nIngresa id del perecedero a buscar:  ";
        cin>>idmedicin;

        for (k=0; k<10; k++)
        {
        if (idmedicin==existencias[k].medicamentos[0])

            {
            //mostrar expediente encontrado
            system ("cls");

            cout<<"\t\t****** PERECEDEROS ******\n\n ";

            cout<<"\tDatos del perecedero encontrado: ";
            cout<<endl<<endl;

            cout<<"\tId del perecedero:        "<<existencias[k].medicamentos[0]<<"\n\n";
            cout<<"\tNombre:                   "<<existencias[k].medicamentos[1]<<"\n";
            cout<<"\tIngrediente activo:       "<<existencias[k].medicamentos[2]<<"\n\n";
            cout<<"\tPresentacion:             "<<existencias[k].medicamentos[3]<<"\n";
            cout<<"\tMiligramos:               "<<existencias[k].medicamentos[4]<<"\n";
            cout<<"\tContenido:                "<<existencias[k].medicamentos[5]<<"\n\n";
            cout<<"\tVia de administracion:    "<<existencias[k].medicamentos[6]<<"\n";
            cout<<"\tDosis:                    "<<existencias[k].medicamentos[7]<<"\n\n";
            cout<<"\tLote:                     "<<existencias[k].medicamentos[8]<<"\n";
            cout<<"\tCaducidad:                "<<existencias[k].medicamentos[9]<<"\n\n";
            cout<<"\tPrecio maximo al publico: "<<existencias[k].medicamentos[10]<<"\n";
            cout<<"\tMarca:                    "<<existencias[k].medicamentos[11]<<"\n";
            cout<<"\tProcedencia:              "<<existencias[k].medicamentos[12]<<"\n";


            cout<<"\n\t\t\t\t\t";

            system ("pause");
            break;
            }//fin del if buscar
        }//fin del ciclo for buscar

            if (k>9)
                    {
                    cout<<"\n\n\t\t\tNO EXISTE PERECEDERO, INTENTA DE NUEVO...\n\n\t\t\t\t";
                    system ("pause");
                    }

}

void m_perecedero::modificarMP()
{
    system ("cls");

        cout<<"\t\t****** PERECEDEROS ******\n\n ";

        cout<<"\nIngresa id del perecedero a modificar:  ";
        cin>>idmedicin;

        bool hallado = false;

        for (k=0; k<10; k++)
        {
        if (idmedicin==existencias[k].medicamentos[0])

            {
            //mostrar expediente encontrado
            system ("cls");

            cout<<"\t\t****** PERECEDEROS ******\n\n ";

            cout<<"\tDatos del perecedero encontrado para modificar: ";
            cout<<endl<<endl;

            cout<<"\tId del perecedero:        "<<existencias[k].medicamentos[0]<<"\n\n";
            cout<<"\tNombre:                   "<<existencias[k].medicamentos[1]<<"\n";
            cout<<"\tIngrediente activo:       "<<existencias[k].medicamentos[2]<<"\n\n";
            cout<<"\tPresentacion:             "<<existencias[k].medicamentos[3]<<"\n";
            cout<<"\tMiligramos:               "<<existencias[k].medicamentos[4]<<"\n";
            cout<<"\tContenido:                "<<existencias[k].medicamentos[5]<<"\n\n";
            cout<<"\tVia de administracion:    "<<existencias[k].medicamentos[6]<<"\n";
            cout<<"\tDosis:                    "<<existencias[k].medicamentos[7]<<"\n\n";
            cout<<"\tLote:                     "<<existencias[k].medicamentos[8]<<"\n";
            cout<<"\tCaducidad:                "<<existencias[k].medicamentos[9]<<"\n\n";
            cout<<"\tPrecio maximo al publico: "<<existencias[k].medicamentos[10]<<"\n";
            cout<<"\tMarca:                    "<<existencias[k].medicamentos[11]<<"\n";
            cout<<"\tProcedencia:              "<<existencias[k].medicamentos[12]<<"\n";




            cout<<"\n\t\t\t\t\t";

            system ("pause");
            system ("cls");

                        cout<<"\n";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t**      PERECEDEROS         **";
                        cout<<"\n\t**  MENU DE MODIFICACIONES   **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 1.- Nombre                **";
                        cout<<"\n\t** 2.- Ingrediente activo    **";
                        cout<<"\n\t** 3.- Presentacion          **";
                        cout<<"\n\t** 4.- Miligramos            **";
                        cout<<"\n\t** 5.- Contenido             **";
                        cout<<"\n\t** 6.- Via de adm. y Dosis   **";
                        cout<<"\n\t** 7.- Lote y caducidad      **";
                        cout<<"\n\t** 8.- Precio y marca        **";
                        cout<<"\n\t** 9.- Procedencia           **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 10.- TODOS LOS ANTERIORES **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 11.- CANCELAR             **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t* Elige una opcion:__";
                        int modif;
                        cin>>modif;

                        switch (modif)
                            {
                            case 1:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion del nombre \n\n";
                                cout<<"\tNombre:                   ";
                                cin>>existencias[k].medicamentos[1];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 2:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion del ingrediente activo \n\n";
                                cout<<"\tiIngrediente activo:      ";
                                cin>>existencias[k].medicamentos[2];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 3:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion de la presentacion \n\n";
                                cout<<"\tPresentacion:             ";
                                cin>>existencias[k].medicamentos[3];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 4:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion de los miligramos \n\n";
                                cout<<"\tMiligramos:               ";
                                cin>>existencias[k].medicamentos[4];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 5:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion del contenido \n\n";
                                cout<<"\tContenido:                ";
                                cin>>existencias[k].medicamentos[5];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 6:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion de la via de administracion y dosis \n\n";
                                cout<<"\tVia de administracion:    ";
                                cin>>existencias[k].medicamentos[6];
                                cout<<"\tDosis:                    ";
                                cin>>existencias[k].medicamentos[7];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 7:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion del lote y caducidad \n\n";
                                cout<<"\tLote:                     ";
                                cin>>existencias[k].medicamentos[8];
                                cout<<"\tCaducidad:                ";
                                cin>>existencias[k].medicamentos[9];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 8:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion del precio y la marca \n\n";
                                cout<<"\tPrecio:                   ";
                                cin>>existencias[k].medicamentos[10];
                                cout<<"\tMarca:                    ";
                                cin>>existencias[k].medicamentos[11];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 9:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion de la procedencia \n\n";
                                cout<<"\tProcedencia:              ";
                                cin>>existencias[k].medicamentos[12];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 10:
                                system ("cls");
                                cout<<"\t\t****** PERECEDEROS ******\n\n ";

                                cout<<"\tModificacion de todos los datos del medicamento encontrado \n\n";

                                cout<<"\tNombre:                   ";
                                cin>>existencias[k].medicamentos[1];
                                cout<<"\n\n";
                                cout<<"\tiIngrediente activo:      ";
                                cin>>existencias[k].medicamentos[2];
                                cout<<"\tPresentacion:             ";
                                cin>>existencias[k].medicamentos[3];
                                cout<<"\tMiligramos:               ";
                                cin>>existencias[k].medicamentos[4];
                                cout<<"\n";
                                cout<<"\tContenido:                ";
                                cin>>existencias[k].medicamentos[5];
                                cout<<"\n";
                                cout<<"\tVia de administracion:    ";
                                cin>>existencias[k].medicamentos[6];
                                cout<<"\tDosis:                    ";
                                cin>>existencias[k].medicamentos[7];
                                cout<<"\tLote:                     ";
                                cin>>existencias[k].medicamentos[8];
                                cout<<"\tCaducidad:                ";
                                cin>>existencias[k].medicamentos[9];
                                cout<<"\tPrecio:                   ";
                                cin>>existencias[k].medicamentos[10];
                                cout<<"\n";
                                cout<<"\tMarca:                    ";
                                cin>>existencias[k].medicamentos[11];
                                cout<<"\tProcedencia:              ";
                                cin>>existencias[k].medicamentos[12];

                                cout<<"\n\t\t\t\t\t";
                            break;

                            case 11:
                            cout<<"\n\n\t\tCancelar... \n\n\n\t\t\t\t\t";
                            break;

                            default:
                            cout<<"\n\n\t\tHa elegido una opcion inexistente, intente de nuevo; atras... \n\n\n\t\t\t\t\t";

                            }//Fin del switch de modificaciones

                        cout<<"\n\t\t\t\t\t";
                        system ("pause");

                        hallado=true;

            }//Fin del if

        }//Fin del ciclo for

                if (hallado==true)
                    Sleep(1000);
                else
                    if (hallado==false)
                    {
                    cout<<"\n\n\t\t\tNO EXISTE PERECEDERO, INTENTA DE NUEVO...\n\n\t\t\t\t";
                    system ("pause");
                    }

}

//Clase expediente

class expediente
{
public:
        /*
        Cuando el paciente ingresa, se le abre un expediente con los siguientes datos:
        idexpediente, fechaexpediente, idpaciente, medico, peso, estatura, medicamento, dosis, hora.
        Para buscar un expediente se necesitara realizar de nuevo una búsqueda del expediente que se desee
        consultar solicitando el idexpedientedel paciente.
        */
string idexpe, expedientes[11];
int y, cuan, cec, cem;

void capturar ();
void mostrar ();
void buscar ();
void modificar();

friend class paciente;

}expedient;


expediente regist [10];


void expediente::capturar()
{
            //capturar expediente

                    cec=1;
                    for (y=0; y<10; y++)
                    {
                    system ("cls");

                    cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                    cout<<"\tIngrese los datos del expediente consecutivo numero: "<<cec;
                    cout<<endl<<endl;

                    cout<<"\tId del expediente:     ";
                    cin>>regist[y].expedientes[0];
                    cin.ignore();
                    cout<<"\n";
                    cout<<"\tFecha de ingreso       ";
                    cout<<"\n\n";
                    cout<<"\tDia:                   ";
                    cin>>regist[y].expedientes[1];
                    cin.ignore();
                    cout<<"\tMes:                   ";
                    cin>>regist[y].expedientes[2];
                    cin.ignore();
                    cout<<"\tAnio:                  ";
                    cin>>regist[y].expedientes[3];
                    cin.ignore();
                    cout<<"\n";
                    cout<<"\tId paciente:           ";
                    cin>>regist[y].expedientes[4];
                    cin.ignore();
                    cout<<"\n";
                    cout<<"\tPeso (Kg):             ";
                    cin>>regist[y].expedientes[5];
                    cin.ignore();
                    cout<<"\tEstatura (m):          ";
                    cin>>regist[y].expedientes[6];
                    cin.ignore();
                    cout<<"\tMedicamento:           ";
                    cin>>regist[y].expedientes[7];
                    cin.ignore();
                    cout<<"\tDosis:                 ";
                    cin>>regist[y].expedientes[8];
                    cin.ignore();
                    cout<<"\tHora:                  ";
                    cin>>regist[y].expedientes[9];
                    cin.ignore();
                    cout<<"\n";
                    cout<<"\tMedico que atiende:    ";
                    cin>>regist[y].expedientes[10];

                    cout<<"\n\n\t\t\t\t\t";

                    system ("pause");
                    system ("cls");

                    cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                    cout<<"\tExpediente capturado, numero consecutivo: "<<cec;
                    cout<<"\n\n\tDesea capturar otro expediente de paciente?\n\n\a";
                    cout<<"\t 1.- Si \n\t 2.- No \n\n";
                    cout<<"\tElige una opcion: ";
                    cin>>cuan;

                    if (cuan==1)
                        {
                        cout<<"\n\n\t\t\t";
                        cec++;
                        system ("pause");
                        }
                    else
                        {
                        y=10;
                        cout<<"\t\t\t\t\t";
                        system ("pause");
                        }

                    }// fin del bucle for
}

void expediente::mostrar()
{
//mostrar expediente
                    system ("cls");

                    cem=1;

                    for (y=0; y<cec; y++)
                    {

                    cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                    cout<<"\n\tDatos del expediente consecutivo numero: "<<cem;
                    cout<<endl<<endl;

                    cout<<"\tId del expediente:     "<<regist[y].expedientes[0]<<"\n\n";
                    cout<<"\tFecha de ingreso       "<<"\n\n";
                    cout<<"\tDia:                   "<<regist[y].expedientes[1]<<"\n";
                    cout<<"\tMes:                   "<<regist[y].expedientes[2]<<"\n";
                    cout<<"\tAnio:                  "<<regist[y].expedientes[3]<<"\n\n";
                    cout<<"\tId paciente:           "<<regist[y].expedientes[4]<<"\n\n";
                    cout<<"\tPeso:                  "<<regist[y].expedientes[5]<<"\n";
                    cout<<"\tEstatura:              "<<regist[y].expedientes[6]<<"\n";
                    cout<<"\tMedicamento:           "<<regist[y].expedientes[7]<<"\n";
                    cout<<"\tDosis:                 "<<regist[y].expedientes[8]<<"\n";
                    cout<<"\tHora:                  "<<regist[y].expedientes[9]<<"\n\n";
                    cout<<"\tMedico que atiende:    "<<regist[y].expedientes[10];

                    cem++;

                    cout<<"\n\n\t\t\t\t\t";

                    system ("pause");
                    system ("cls");
                    }//fin del bucle for mostrar
}

void expediente::buscar()
{
//buscar expediente
                    system ("cls");

                    cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                    cout<<"\nIngresa id del expediente a buscar:  ";
                    cin>>idexpe;

                    for (y=0; y<10; y++)
                    {
                    if (idexpe==regist[y].expedientes[0])
                        {

                        system ("cls");
                        cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                        //mostrar expediente encontrado
                        cout<<"\n\tDatos del Expediente";
                        cout<<endl<<endl;
                        cout<<"\tId del expediente:     "<<regist[y].expedientes[0]<<"\n\n";
                        cout<<"\tFecha de ingreso       "<<"\n\n";
                        cout<<"\tDia:                   "<<regist[y].expedientes[1]<<"\n";
                        cout<<"\tMes:                   "<<regist[y].expedientes[2]<<"\n";
                        cout<<"\tAnio:                  "<<regist[y].expedientes[3]<<"\n\n";
                        cout<<"\tId paciente:           "<<regist[y].expedientes[4]<<"\n\n";
                        cout<<"\tPeso:                  "<<regist[y].expedientes[5]<<"\n";
                        cout<<"\tEstatura:              "<<regist[y].expedientes[6]<<"\n";
                        cout<<"\tMedicamento:           "<<regist[y].expedientes[7]<<"\n";
                        cout<<"\tDosis:                 "<<regist[y].expedientes[8]<<"\n";
                        cout<<"\tHora:                  "<<regist[y].expedientes[9]<<"\n\n";
                        cout<<"\tMedico que atiende:    "<<regist[y].expedientes[10];

                        cout<<"\n\n\t\t\t\t\t";

                        system ("pause");
                        break;
                        }
                    }//fin del bucle for bsucar

                    if (y>9)
                        {
                        cout<<"\n\n\t\t\tNO EXISTE EXPEDIENTE, INTENTA DE NUEVO...\n\n\t\t\t\t";
                        system ("pause");
                        }

}

void expediente::modificar()
{
//buscar expediente
                    system ("cls");

                    cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                    cout<<"\nIngresa id del expediente a modificar:  ";
                    cin>>idexpe;

                    bool hallado = false;

                    for (y=0; y<10; y++)
                    {
                    if (idexpe==regist[y].expedientes[0])
                        {

                        system ("cls");

                        cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                        //mostrar expediente encontrado
                        cout<<"\n\tDatos del expediente encontrado para modificar";
                        cout<<endl<<endl;
                        cout<<"\tId del expediente:     "<<regist[y].expedientes[0]<<"\n\n";

                        cout<<"\tFecha de ingreso       "<<"\n\n";

                        cout<<"\tDia:                   "<<regist[y].expedientes[1]<<"\n";
                        cout<<"\tMes:                   "<<regist[y].expedientes[2]<<"\n";
                        cout<<"\tAnio:                  "<<regist[y].expedientes[3]<<"\n\n";

                        cout<<"\tId paciente:           "<<regist[y].expedientes[4]<<"\n\n";

                        cout<<"\tPeso:                  "<<regist[y].expedientes[5]<<"\n";
                        cout<<"\tEstatura:              "<<regist[y].expedientes[6]<<"\n";
                        cout<<"\tMedicamento:           "<<regist[y].expedientes[7]<<"\n";
                        cout<<"\tDosis:                 "<<regist[y].expedientes[8]<<"\n";
                        cout<<"\tHora:                  "<<regist[y].expedientes[9]<<"\n\n";

                        cout<<"\tMedico que atiende:    "<<regist[y].expedientes[10]<<"\n";
                        cout<<"\n\t\t\t\t\t";

                        system ("pause");
                        system ("cls");

                        cout<<"\n";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t**       EXPEDIENTES         **";
                        cout<<"\n\t**  MENU DE MODIFICACIONES   **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 1.- Fecha de ingreso      **";
                        cout<<"\n\t** 2.- Id paciente           **";
                        cout<<"\n\t** 3.- Peso                  **";
                        cout<<"\n\t** 4.- Estatura              **";
                        cout<<"\n\t** 5.- Medicamento           **";
                        cout<<"\n\t** 6.- Dosis y hora          **";
                        cout<<"\n\t** 7.- Medico que atiende    **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 8.- TODOS LOS ANTERIORES  **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 9.- CANCELAR              **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t* Elige una opcion:__";
                        int modif;
                        cin>>modif;

                        switch (modif)
                            {
                            case 1:
                            system ("cls");
                            cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                            cout<<"\tModificacion de la fecha de ingreso \n\n";
                            cout<<"\tFecha de ingreso       "<<"\n\n";
                            cout<<"\tDia:                   ";
                            cin>>regist[y].expedientes[1];
                            cout<<"\tMes:                   ";
                            cin>>regist[y].expedientes[2];
                            cout<<"\tAnio:                  ";
                            cin>>regist[y].expedientes[3];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 2:
                            system ("cls");
                            cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                            cout<<"\tModificacion de Id paciente \n\n";
                            cout<<"\tId paciente:           ";
                            cin>>regist[y].expedientes[4];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 3:
                            system ("cls");
                            cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                            cout<<"\tModificacion del peso del paciente \n\n";
                            cout<<"\tPeso:                  ";
                            cin>>regist[y].expedientes[5];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 4:
                            system ("cls");
                            cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                            cout<<"\tModificacion de la estatura del paciente \n\n";
                            cout<<"\tEstatura:              ";
                            cin>>regist[y].expedientes[6];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 5:
                            system ("cls");
                            cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                            cout<<"\tModificacion del medicamento del paciente \n\n";
                            cout<<"\tMedicamento:           ";
                            cin>>regist[y].expedientes[7];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 6:
                            system ("cls");
                            cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                            cout<<"\tModificacion de la dosis y hora del medicamento del paciente \n\n";
                            cout<<"\tDosis:                 ";
                            cin>>regist[y].expedientes[8];
                            cout<<"\tHora:                  ";
                            cin>>regist[y].expedientes[9];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 7:
                            system ("cls");
                            cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                            cout<<"\tModificacion del medico que atiende \n\n";
                            cout<<"\tMedico que atiende:    ";
                            cin>>regist[y].expedientes[10];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 8:
                            system ("cls");
                            cout<<"\t\t****** EXPEDIENTES ******\n\n ";

                            cout<<"\tModificacion de todos los datos del expediente encontrado \n\n";

                            cout<<"\tFecha de ingreso       "<<"\n\n";
                            cout<<"\tDia:                   ";
                            cin>>regist[y].expedientes[1];
                            cout<<"\tMes:                   ";
                            cin>>regist[y].expedientes[2];
                            cout<<"\tAnio:                  ";
                            cin>>regist[y].expedientes[3];
                            cout<<"\n";

                            cout<<"\tId paciente:           ";
                            cin>>regist[y].expedientes[4];
                            cout<<"\n";

                            cout<<"\tPeso:                  ";
                            cin>>regist[y].expedientes[5];
                            cout<<"\tEstatura:              ";
                            cin>>regist[y].expedientes[6];
                            cout<<"\tMedicamento:           ";
                            cin>>regist[y].expedientes[7];
                            cout<<"\tDosis:                 ";
                            cin>>regist[y].expedientes[8];
                            cout<<"\tHora:                  ";
                            cin>>regist[y].expedientes[9];
                            cout<<"\n";

                            cout<<"\tMedico que atiende:    ";
                            cin>>regist[y].expedientes[10];

                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 9:
                            cout<<"\n\n\t\tCancelar... \n\n\n\t\t\t\t\t";
                            break;

                            default:
                            cout<<"\n\n\t\tHa elegido una opcion inexistente, intente de nuevo; atras... \n\n\n\t\t\t\t\t";

                            }//Fin del switch de modificaciones

                        cout<<"\n\t\t\t\t\t";
                        system ("pause");

                        hallado=true;

                        }//Fin del if

                    }//Fin del ciclo for

                    if (hallado==true)
                       Sleep(1000);
                    else
                        if (hallado==false)
                        {
                        cout<<"\n\n\t\t\tNO EXISTE EXPEDIENTE, INTENTA DE NUEVO...\n\n\t\t\t\t";
                        system ("pause");
                        }
}


class paciente : public expediente
{
public:
        //variables paciente:
        // idn, idpaciente, paterno, materno, nombre, sexo, edocivil, calle, numero,
        // tel, dia, mes, ano, entecedentes12,13 y 14;
        string idn, pacientes [15];
        int i, cuantos, cnc, cnm, cuantoss;

        void capturar ();
        void mostrar ();
        void buscar ();
        void modificar();

    friend class expediente;
}pacient;


paciente registros [10];


void paciente::capturar()
{
                    //capturar paciente
                    cnc=1;

                    for (i=0; i<10; i++)
                    {
                    system ("cls");

                    cout<<"\t\t****** PACIENTES ******\n\n ";

                    cout<<"\tIngrese los datos del paciente consecutivo numero: "<<cnc<<"\n\n";

                    cout<<"\tId paciente:           ";
                    cin>>registros[i].pacientes[0];
                    cin.ignore();
                    cout<<"\tApellido paterno:      ";
                    cin>>registros[i].pacientes[1];
                    cin.ignore();
                    cout<<"\tApellido materno:      ";
                    cin>>registros[i].pacientes[2];
                    cin.ignore();
                    cout<<"\tNombre:                ";
                    fflush(stdin);
                    getline(cin, registros[i].pacientes[3]);
                    //cin>>registros[i].pacientes[3];
                    //cin.ignore();
                    cout<<"\tSexo:                  ";
                    cin>>registros[i].pacientes[4];
                    cin.ignore();
                    cout<<"\tEstado civil:          ";
                    cin>>registros[i].pacientes[5];
                    cin.ignore();
                    cout<<"\tCalle:                 ";
                    cin>>registros[i].pacientes[6];
                    cin.ignore();
                    cout<<"\tNumero:                ";
                    cin>>registros[i].pacientes[7];
                    cin.ignore();
                    cout<<"\tTelefono:              ";
                    cin>>registros[i].pacientes[8];
                    cin.ignore();
                    cout<<"\n\tFecha de nacimiento\n\n";
                    cout<<"\tDia:                   ";
                    cin>>registros[i].pacientes[9];
                    cin.ignore();
                    cout<<"\tMes:                   ";
                    cin>>registros[i].pacientes[10];
                    cin.ignore();
                    cout<<"\tAnio:                  ";
                    cin>>registros[i].pacientes[11];
                    cin.ignore();
                    cout<<"\n\tAntecedentes clinicos: (Si/No)\n\n";
                    cout<<"\tDiabetes?              ";
                    cin>>registros[i].pacientes[12];
                    cout<<"\tHipertension?          ";
                    cin>>registros[i].pacientes[13];
                    cout<<"\tCancer?                ";
                    cin>>registros[i].pacientes[14];

                    cout<<"\t\t\t\t\t";
                    system ("pause");

                    system ("cls");

                    cout<<"\t\t****** PACIENTES ******\n\n ";

                    cout<<"\tPaciente capturado, numero consecutivo: "<<cnc;
                    cout<<"\n\n\tDesea capturar otro paciente?\n\n\a";
                    cout<<"\t 1.- Si \n\t 2.- No \n\n";
                    cout<<"\tElige una opcion: ";
                    cin>>cuantos;

                    if (cuantos==1)
                        {
                        cout<<"\n\n\t\t\t";
                        cnc++;
                        system ("pause");
                        }
                    else
                        {
                        i=10;
                        cout<<"\t\t\t\t\t";
                        system ("pause");
                        }
                    }//fin del for

                    system ("cls");

                        cout<<"\n\n\tDesea capturar los expedientes consecutivos de los pacientes?\n\n\a";
                        cout<<"\t 1.- Si \n\t 2.- No \n\n";
                        cout<<"\tElige una opcion: ";
                        cin>>cuantoss;

                            if (cuantoss==1)
                                {
                                system ("cls");
                                expedient.capturar();
                                }

}

void paciente::mostrar()
{
     //mostrar paciente

                    system ("cls");
                    cnm=1;
                    for (i=0; i<cnc; i++)
                    {
                    cout<<"\t\t****** PACIENTES ******\n\n ";

                    cout<<"\tDatos del paciente consecutivo numero: "<<cnm;
                    cout<<endl<<endl;
                    cout<<"\tId paciente:           ";
                    cout<<registros[i].pacientes[0]<<endl;
                    cout<<"\tApellido paterno:      ";
                    cout<<registros[i].pacientes[1]<<endl;
                    cout<<"\tApellido materno:      ";
                    cout<<registros[i].pacientes[2]<<endl;
                    cout<<"\tNombre:                ";
                    cout<<registros[i].pacientes[3]<<endl;
                    cout<<"\tSexo:                  ";
                    cout<<registros[i].pacientes[4]<<endl;
                    cout<<"\tEstado civil:          ";
                    cout<<registros[i].pacientes[5]<<endl;
                    cout<<"\tCalle:                 ";
                    cout<<registros[i].pacientes[6]<<endl;
                    cout<<"\tNumero:                ";
                    cout<<registros[i].pacientes[7]<<endl;
                    cout<<"\tTelefono:              ";
                    cout<<registros[i].pacientes[8]<<endl;
                    cout<<"\n\tFecha de nacimiento\n\n";
                    cout<<"\tDia:                   ";
                    cout<<registros[i].pacientes[9]<<endl;
                    cout<<"\tMes:                   ";
                    cout<<registros[i].pacientes[10]<<endl;
                    cout<<"\tAnio:                  ";
                    cout<<registros[i].pacientes[11]<<"\n";
                    cout<<"\n\tAntecedentes clinicos: (Si/No)\n\n";
                    cout<<"\tDiabetes:              "<<registros[i].pacientes[12]<<"\n";
                    cout<<"\tHipertension:          "<<registros[i].pacientes[13]<<"\n";
                    cout<<"\tCancer:                "<<registros[i].pacientes[14]<<"\n";
                    cout<<"\t\t\t\t\t";
                    cnm++;
                    system ("pause");
                    system ("cls");
                    }//fin del for mostrar

                        cout<<"\n\n\tDesea mostrar los expedientes consecutivos de los pacientes?\n\n";
                        cout<<"\t 1.- Si \n\t 2.- No \n\n";
                        cout<<"\tElige una opcion: ";
                        cin>>cuantoss;

                            if (cuantoss==1)
                                {
                                system ("cls");
                                expedient.mostrar();
                                }

}

void paciente::buscar()
{
     //buscar paciente
                    system ("cls");

                    cout<<"\t\t****** PACIENTES ******\n\n ";

                    cout<<"\nIngresa id del paciente a buscar:  ";
                    cin>>idn;

                    for (i=0; i<10; i++)
                    {
                    if (idn==registros[i].pacientes[0])
                        {
                        system ("cls");

                        cout<<"\t\t****** PACIENTES ******\n\n ";

                        cout<<"\tDatos del paciente: ";
                        cout<<endl<<endl;
                        cout<<"\tId paciente:           ";
                        cout<<registros[i].pacientes[0]<<endl;
                        cout<<"\tApellido paterno:      ";
                        cout<<registros[i].pacientes[1]<<endl;
                        cout<<"\tApellido materno:      ";
                        cout<<registros[i].pacientes[2]<<endl;
                        cout<<"\tNombre:                ";
                        cout<<registros[i].pacientes[3]<<endl;
                        cout<<"\tSexo:                  ";
                        cout<<registros[i].pacientes[4]<<endl;
                        cout<<"\tEstado civil:          ";
                        cout<<registros[i].pacientes[5]<<endl;
                        cout<<"\tCalle:                 ";
                        cout<<registros[i].pacientes[6]<<endl;
                        cout<<"\tNumero:                ";
                        cout<<registros[i].pacientes[7]<<endl;
                        cout<<"\tTelefono:              ";
                        cout<<registros[i].pacientes[8]<<endl;
                        cout<<"\n\tFecha de nacimiento\n\n";
                        cout<<"\tDia:                   ";
                        cout<<registros[i].pacientes[9]<<endl;
                        cout<<"\tMes:                   ";
                        cout<<registros[i].pacientes[10]<<endl;
                        cout<<"\tAnio:                  ";
                        cout<<registros[i].pacientes[11]<<endl;
                        cout<<"\n\tAntecedentes clinicos: (Si/No)\n\n";
                        cout<<"\tDiabetes               "<<registros[i].pacientes[12]<<"\n";
                        cout<<"\tHipertension           "<<registros[i].pacientes[13]<<"\n";
                        cout<<"\tCancer                 "<<registros[i].pacientes[14]<<"\n";
                        cout<<"\t\t\t\t\t";

                        system ("pause");
                        break;
                        }

                    }//Termino del ciclo for

                    if (i>9)
                        {
                        cout<<"\n\n\t\t\tNO EXISTE PACIENTE, INTENTA DE NUEVO...\n\n\t\t\t\t";
                        system ("pause");
                        }
}

void paciente::modificar()
{
     //modificar paciente
                    system ("cls");
                    cout<<"\t\t****** PACIENTES ******\n\n ";

                    cout<<"\nIngresa id del paciente a modificar:  ";
                    cin>>idn;

                    bool hallado = false;

                    for (i=0; i<10; i++)
                    {
                    if (idn==registros[i].pacientes[0])
                        {
                        system ("cls");

                        cout<<"\t\t****** PACIENTES ******\n\n ";

                        cout<<"\tDatos del paciente encontrado para modificar: \n\n";

                        cout<<"\tId paciente:           "<<registros[i].pacientes[0]<<"\n";
                        cout<<"\tApellido paterno:      "<<registros[i].pacientes[1]<<"\n";
                        cout<<"\tApellido materno:      "<<registros[i].pacientes[2]<<"\n";
                        cout<<"\tNombre:                "<<registros[i].pacientes[3]<<"\n";
                        cout<<"\tSexo:                  "<<registros[i].pacientes[4]<<"\n";
                        cout<<"\tEstado civil:          "<<registros[i].pacientes[5]<<"\n";
                        cout<<"\tCalle:                 "<<registros[i].pacientes[6]<<"\n";
                        cout<<"\tNumero:                "<<registros[i].pacientes[7]<<"\n";
                        cout<<"\tTelefono:              "<<registros[i].pacientes[8]<<"\n\n";

                        cout<<"\tFecha de nacimiento\n\n";
                        cout<<"\tDia:                   "<<registros[i].pacientes[9]<<"\n";
                        cout<<"\tMes:                   "<<registros[i].pacientes[10]<<"\n";
                        cout<<"\tAnio:                  "<<registros[i].pacientes[11]<<"\n\n";

                        cout<<"\tAntecedentes clinicos: (Si/No)\n\n";
                        cout<<"\tDiabetes               "<<registros[i].pacientes[12]<<"\n";
                        cout<<"\tHipertension           "<<registros[i].pacientes[13]<<"\n";
                        cout<<"\tCancer                 "<<registros[i].pacientes[14]<<"\n";
                        cout<<"\t\t\t\t\t";

                        system ("pause");
                        system ("cls");

                        cout<<"\n";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t**        PACIENTES          **";
                        cout<<"\n\t**  MENU DE MODIFICACIONES   **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 1.- Apellidos y nombre(s) **";
                        cout<<"\n\t** 2.- Sexo                  **";
                        cout<<"\n\t** 3.- Estado civil          **";
                        cout<<"\n\t** 4.- Domicilio             **";
                        cout<<"\n\t** 5.- Telefono              **";
                        cout<<"\n\t** 6.- Fecha de nacimiento   **";
                        cout<<"\n\t** 7.- Antecedentes clinicos **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 8.- TODOS LOS ANTERIORES  **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 9.- CANCELAR              **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t* Elige una opcion:__";
                        int modif;
                        cin>>modif;

                        switch (modif)
                            {
                            case 1:
                            system ("cls");
                            cout<<"\t\t****** PACIENTES ******\n\n ";

                            cout<<"\tModificacion de apellidos y nombre(s)\n\n";
                            cout<<"\tApellido paterno:      ";
                            cin>>registros[i].pacientes[1];
                            cout<<"\tApellido materno:      ";
                            cin>>registros[i].pacientes[2];
                            cout<<"\tNombre:                ";
                            cin>>registros[i].pacientes[3];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 2:
                            system ("cls");
                            cout<<"\t\t****** PACIENTES ******\n\n ";

                            cout<<"\tModificacion de sexo\n\n";
                            cout<<"\tSexo:                  ";
                            cin>>registros[i].pacientes[4];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 3:
                            system ("cls");
                            cout<<"\t\t****** PACIENTES ******\n\n ";

                            cout<<"\tModificacion de estado civil\n\n";
                            cout<<"\tEstado civil:          ";
                            cin>>registros[i].pacientes[5];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 4:
                            system ("cls");
                            cout<<"\t\t****** PACIENTES ******\n\n ";

                            cout<<"\tModificacion de domicilio\n\n";
                            cout<<"\tCalle:                 ";
                            cin>>registros[i].pacientes[6];
                            cout<<"\tNumero:                ";
                            cin>>registros[i].pacientes[7];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 5:
                            system ("cls");
                            cout<<"\t\t****** PACIENTES ******\n\n ";

                            cout<<"\tModificacion de telefono\n\n";
                            cout<<"\tTelefono:              ";
                            cin>>registros[i].pacientes[8];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 6:
                            system ("cls");
                            cout<<"\t\t****** PACIENTES ******\n\n ";

                            cout<<"\tModificacion de fecha de nacimiento\n\n";
                            cout<<"\tDia:                   ";
                            cin>>registros[i].pacientes[9];
                            cout<<"\tMes:                   ";
                            cin>>registros[i].pacientes[10];
                            cout<<"\tAnio:                  ";
                            cin>>registros[i].pacientes[11];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 7:
                            system ("cls");
                            cout<<"\t\t****** PACIENTES ******\n\n ";

                            cout<<"\tModificacion de antecedentes clinicos: especificar con un 'Si' o un 'No' \n\n";
                            cout<<"\tDiabetes               ";
                            cin>>registros[i].pacientes[12];
                            cout<<"\tHipertension           ";
                            cin>>registros[i].pacientes[13];
                            cout<<"\tCancer                 ";
                            cin>>registros[i].pacientes[14];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 8:
                            system ("cls");
                            cout<<"\t\t****** PACIENTES ******\n\n ";

                            cout<<"\tModificacion de todos los datos del paciente encontrado\n\n";
                            cout<<"\tApellido paterno:      ";
                            cin>>registros[i].pacientes[1];
                            cout<<"\tApellido materno:      ";
                            cin>>registros[i].pacientes[2];
                            cout<<"\tNombre:                ";
                            cin>>registros[i].pacientes[3];
                            cout<<"\tSexo:                  ";
                            cin>>registros[i].pacientes[4];
                            cout<<"\tEstado civil:          ";
                            cin>>registros[i].pacientes[5];
                            cout<<"\tCalle:                 ";
                            cin>>registros[i].pacientes[6];
                            cout<<"\tNumero:                ";
                            cin>>registros[i].pacientes[7];
                            cout<<"\tTelefono:              ";
                            cin>>registros[i].pacientes[8];

                            cout<<"\n\tFecha de nacimiento\n\n";
                            cout<<"\tDia:                   ";
                            cin>>registros[i].pacientes[9];
                            cout<<"\tMes:                   ";
                            cin>>registros[i].pacientes[10];
                            cout<<"\tAnio:                  ";
                            cin>>registros[i].pacientes[11];

                            cout<<"\n\tAntecedentes clinicos: (Si/No)\n\n";
                            cout<<"\tDiabetes               ";
                            cin>>registros[i].pacientes[12];
                            cout<<"\tHipertension           ";
                            cin>>registros[i].pacientes[13];
                            cout<<"\tCancer                 ";
                            cin>>registros[i].pacientes[14];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 9:
                            cout<<"\n\n\t\tCancelar... \n\n\n\t\t\t\t\t";
                            break;

                            default:
                            cout<<"\n\n\t\tHa elegido una opcion inexistente, intente de nuevo; atras... \n\n\n\t\t\t\t\t";

                            }//Fin del switch de modificaciones

                        cout<<"\n\t\t\t\t\t";
                        system ("pause");

                        hallado=true;

                        }//Fin del if

                    }//Fin del ciclo for

                    if (hallado==true)
                        Sleep(1000);
                    else
                        if (hallado==false)
                        {
                        cout<<"\n\n\t\t\tNO EXISTE PACIENTE, INTENTA DE NUEVO...\n\n\t\t\t\t";
                        system ("pause");
                        }

}

class medico
{
public:
//variables medico:
//idnmedico,
//idndoc 0, appdoc1, apmdoc2, nombredoc3, calldoc4, numdoc5, teldoc6, teldoc1 7, espdoc8, activo 9;
string idnmedico, medicos[10];
int x, cuant, cmc, cmm;

void capturar ();
void mostrar ();
void buscar ();
void modificar();
}medic;


medico registro [10];


void medico::capturar()
{
     system ("cls");
                        //capturar médico
                        cmc=1;

                        for (x=0; x<10; x++)
                        {
                        system ("cls");
                        cout<<"\t\t****** MEDICOS ******\n\n ";

                        cout<<"\tIngrese los datos del medico consecutivo numero: "<<cmc<<"\n";
                        cout<<endl<<endl;
                        cout<<"\tId Medico:           ";
                        cin>>registro[x].medicos[0];
                        cin.ignore();
                        cout<<"\n";
                        cout<<"\tApellido paterno:    ";
                        cin>>registro[x].medicos[1];
                        cin.ignore();
                        cout<<"\tApellido materno:    ";
                        cin>>registro[x].medicos[2];
                        cin.ignore();
                        cout<<"\tNombre:              ";
                        cin>>registro[x].medicos[3];
                        cin.ignore();
                        cout<<"\n\n\tDatos de contacto \n\n";
                        cout<<"\tCalle:               ";
                        cin>>registro[x].medicos[4];
                        cin.ignore();
                        cout<<"\tNumero:              ";
                        cin>>registro[x].medicos[5];
                        cin.ignore();
                        cout<<"\tTelefono:            ";
                        cin>>registro[x].medicos[6];
                        cin.ignore();
                        cout<<"\tTelefono 2:          ";
                        cin>>registro[x].medicos[7];
                        cin.ignore();
                        cout<<"\n";
                        cout<<"\tEspecialidad:        ";
                        cin>>registro[x].medicos[8];
                        cin.ignore();
                        cout<<"\tActivo (Si/No) :     ";
                        cin>>registro[x].medicos[9];
                        cin.ignore();
                        cout<<"\n\n\t\t\t\t\t";

                        system ("pause");

                        system ("cls");
                        cout<<"\t\t****** MEDICOS ******\n\n ";
                        cout<<"\tMedico capturado numero: "<<cmc<<". \n\n\tDesea capturar otro medico?\n\n\a";
                        cout<<"\t 1.- Si \n\t 2.- No \n\n";
                        cout<<"\tElige una opcion: ";
                        cin>>cuant;

                        if (cuant==1)
                            {
                            cout<<"\n\n\t\t\t";
                            cmc++;
                            system ("pause");
                            }
                        else
                            {
                            x=10;
                            cout<<"\t\t\t\t\t";
                            system ("pause");
                            }
                    }
}

void medico::mostrar()
{
                        //mostrar medico
                        cmm=1;
                        system ("cls");

                        for (x=0; x<cmc; x++)
                        {
                        cout<<"\t\t****** MEDICOS ******\n\n ";

                        cout<<"\n\tDatos del medico consecutivo numero: "<<cmm;
                        cout<<endl<<endl;
                        cout<<"\tId medico:           ";
                        cout<<registro[x].medicos[0]<<"\n\n";
                        cout<<"\tApellido paterno:    ";
                        cout<<registro[x].medicos[1]<<endl;
                        cout<<"\tApellido materno:    ";
                        cout<<registro[x].medicos[2]<<endl;
                        cout<<"\tNombre:              ";
                        cout<<registro[x].medicos[3]<<endl;
                        cout<<"\n\n\tDatos de contacto \n\n";
                        cout<<"\tCalle:               ";
                        cout<<registro[x].medicos[4]<<endl;
                        cout<<"\tNumero:              ";
                        cout<<registro[x].medicos[5]<<endl;
                        cout<<"\tTelefono:            ";
                        cout<<registro[x].medicos[6]<<endl;
                        cout<<"\tTelefono 2:          ";
                        cout<<registro[x].medicos[7]<<"\n\n";
                        cout<<"\tEspecialidad:        ";
                        cout<<registro[x].medicos[8]<<endl;
                        cout<<"\tActivo (Si/No):      ";
                        cout<<registro[x].medicos[9]<<endl;
                        cout<<"\n\n\t\t\t\t\t";
                        cmm++;
                        system ("pause");
                        system ("cls");
                        }
}

void medico::buscar()
{

                    //buscar médico
                    system ("cls");
                    cout<<"\t\t****** MEDICOS ******\n\n ";

                    cout<<"\nIngresa id medico a buscar:  ";
                    cin>>idnmedico;

                    for (x=0; x<10; x++)
                    {
                    if (idnmedico==registro[x].medicos[0])
                        {
                        //mostrar medico despues de buscar
                        system ("cls");
                        cout<<"\t\t****** MEDICOS ******\n\n ";

                        cout<<"\n\tDatos del medico:";
                        cout<<endl<<endl;
                        cout<<"\tId medico:           ";
                        cout<<registro[x].medicos[0]<<"\n\n";
                        cout<<"\tApellido paterno:    ";
                        cout<<registro[x].medicos[1]<<endl;
                        cout<<"\tApellido materno:    ";
                        cout<<registro[x].medicos[2]<<endl;
                        cout<<"\tNombre:              ";
                        cout<<registro[x].medicos[3]<<endl;
                        cout<<"\n\n\tDatos de contacto \n\n";
                        cout<<"\tCalle:               ";
                        cout<<registro[x].medicos[4]<<endl;
                        cout<<"\tNumero:              ";
                        cout<<registro[x].medicos[5]<<endl;
                        cout<<"\tTelefono:            ";
                        cout<<registro[x].medicos[6]<<endl;
                        cout<<"\tTelefono 2:          ";
                        cout<<registro[x].medicos[7]<<"\n\n";
                        cout<<"\tEspecialidad:        ";
                        cout<<registro[x].medicos[8]<<endl;
                        cout<<"\tActivo (Si/No):      ";
                        cout<<registro[x].medicos[9]<<endl;
                        cout<<"\n\n\t\t\t\t\t";

                        system ("pause");
                        break;
                        }

                    }//Termino del ciclo for

                    if (x>9)
                        {
                        cout<<"\n\n\t\t\tNO EXISTE MEDICO, INTENTA DE NUEVO...\n\n\t\t\t\t";
                        system ("pause");
                        }
}

void medico::modificar()
{

//modificar médico
                    system ("cls");
                    cout<<"\t\t****** MEDICOS ******\n\n ";

                    cout<<"\nIngresa id medico a modificar:  ";
                    cin>>idnmedico;

                    bool hallado=false;

                    for (x=0; x<10; x++)
                    {
                    if (idnmedico==registro[x].medicos[0])
                        {
                        //mostrar medico despues de buscar
                        system ("cls");
                        cout<<"\t\t****** MEDICOS ******\n\n ";

                        cout<<"\n\tDatos del medico encontrado para modificar: ";
                        cout<<endl<<endl;
                        cout<<"\tId medico:           "<<registro[x].medicos[0]<<"\n\n";;

                        cout<<"\tApellido paterno:    "<<registro[x].medicos[1]<<"\n";
                        cout<<"\tApellido materno:    "<<registro[x].medicos[2]<<"\n";
                        cout<<"\tNombre:              "<<registro[x].medicos[3]<<"\n\n";

                        cout<<"\tDatos de contacto \n\n";
                        cout<<"\tCalle:               "<<registro[x].medicos[4]<<"\n";
                        cout<<"\tNumero:              "<<registro[x].medicos[5]<<"\n";
                        cout<<"\tTelefono:            "<<registro[x].medicos[6]<<"\n";
                        cout<<"\tTelefono 2:          "<<registro[x].medicos[7]<<"\n\n";

                        cout<<"\tEspecialidad:        "<<registro[x].medicos[8]<<"\n";
                        cout<<"\tActivo (Si/No):      "<<registro[x].medicos[9]<<"\n\n";

                        cout<<"\t\t\t\t\t";

                        system ("pause");
                        system ("cls");
                        cout<<"\n";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t**         MEDICOS           **";
                        cout<<"\n\t**  MENU DE MODIFICACIONES   **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 1.- Apellidos y nombre(s) **";
                        cout<<"\n\t** 2.- Datos de contacto     **";
                        cout<<"\n\t** 3.- Especialidad          **";
                        cout<<"\n\t** 4.- Activo (Estatus)      **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 5.- TODOS LOS ANTERIORES  **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t** 6.- CANCELAR              **";
                        cout<<"\n\t**                           **";
                        cout<<"\n\t*******************************";
                        cout<<"\n\t* Elige una opcion:__";
                        int modifi;
                        cin>>modifi;

                        switch (modifi)
                            {

                            case 1:
                            system ("cls");
                            cout<<"\t\t****** MEDICOS ******\n\n ";

                            cout<<"\tModificacion de apellidos y nombre(s) \n\n";
                            cout<<"\tApellido paterno:    ";
                            cin>>registro[x].medicos[1];
                            cout<<"\tApellido materno:    ";
                            cin>>registro[x].medicos[2];
                            cout<<"\tNombre:              ";
                            cin>>registro[x].medicos[3];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 2:
                            system ("cls");
                            cout<<"\t\t****** MEDICOS ******\n\n ";

                            cout<<"\tModificacion de los datos de contacto\n\n";
                            cout<<"\tCalle:               ";
                            cin>>registro[x].medicos[4];
                            cout<<"\tNumero:              ";
                            cin>>registro[x].medicos[5];
                            cout<<"\tTelefono:            ";
                            cin>>registro[x].medicos[6];
                            cout<<"\tTelefono 2:          ";
                            cin>>registro[x].medicos[7];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 3:
                            system ("cls");
                            cout<<"\t\t****** MEDICOS ******\n\n ";

                            cout<<"\tModificacion de la especialidad\n\n";
                            cout<<"\tEspecialidad:        ";
                            cin>>registro[x].medicos[8];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 4:
                            system ("cls");
                            cout<<"\t\t****** MEDICOS ******\n\n ";

                            cout<<"\tModificacion del Estatus (Activo); especificar con un 'Si' o un 'No' \n\n";
                            cout<<"\tActivo (Si/No):      ";
                            cin>>registro[x].medicos[9];
                            cout<<"\n\t\t\t\t\t";
                            break;

                            case 5:
                            system ("cls");
                            cout<<"\t\t****** MEDICOS ******\n\n ";

                            cout<<"\tModificacion de todos los datos del medico encontrado\n\n";
                            cout<<"\tApellido paterno:    ";
                            cin>>registro[x].medicos[1];
                            cout<<"\tApellido materno:    ";
                            cin>>registro[x].medicos[2];
                            cout<<"\tNombre:              ";
                            cin>>registro[x].medicos[3];

                            cout<<"\n\tDatos de contacto \n\n";
                            cout<<"\tCalle:               ";
                            cin>>registro[x].medicos[4];
                            cout<<"\tNumero:              ";
                            cin>>registro[x].medicos[5];
                            cout<<"\tTelefono:            ";
                            cin>>registro[x].medicos[6];
                            cout<<"\tTelefono 2:          ";
                            cin>>registro[x].medicos[7];
                            cout<<"\n\n";

                            cout<<"\tEspecialidad:        ";
                            cin>>registro[x].medicos[8];
                            cout<<"\tActivo (Si/No):      ";
                            cin>>registro[x].medicos[9];

                            cout<<"\t\t\t\t\t";
                            break;

                            case 6:
                            cout<<"\n\n\t\tCancelar... \n\n\n\t\t\t\t\t";
                            break;

                            default:
                            cout<<"\n\n\t\tHa elegido una opcion inexistente, intente de nuevo; atras... \n\n\n\t\t\t\t\t";

                            }//Término del switch

                        hallado=true;

                        }//Término del if

                    }//Termino del ciclo for

                    if (hallado==true)
                        Sleep(1000);
                    else
                        if (hallado==false)
                        {
                        cout<<"\n\n\t\t\tNO EXISTE MEDICO, INTENTA DE NUEVO...\n\n\t\t\t\t";
                        system ("pause");
                        }

}

void pagoss ()
{

        //variables para pagos
        string idppago;
        int tipocuar, diashosp;
        float desc, porce, subtotal, total, preciogen, preciocuar, preciovip, otros;
        bool existe = false;


                    /* Pagos

        En el sistema CIH se llevara también el control de pago el cual se obtendrá con el id
        paciente y contendrá los siguientes campos: días de hospitalización, tipo de cuarto(cuarto
        VIP, sala general,cuarto) precio*dia, descuento, otros servicios, se emitirá una factura.
                */
        desc=0, porce=0;

        preciogen=100;
        preciocuar=500;
        preciovip=1000;

        system ("cls");
        cout<<"\t\t\t****** PAGOS ******\n\n\a ";

        cout<<"\n\tId del paciente a buscar:   ";
        cin>>idppago;

        int u;

        for (u=0;u<10;u++)
            {
            if (idppago==registros[u].pacientes[0])
                {

                existe=true;
            cout<<"\n\tApellido paterno:           "<<registros[u].pacientes[1];
            cout<<"\n\tApellido materno:           "<<registros[u].pacientes[2];
            cout<<"\n\tNombre (s):                 "<<registros[u].pacientes[3];
            cout<<"\n\n\tTipo de servicio \n";
            cout<<"\n\t 1.- GENERAL ?";
            cout<<"\n\t 2.- CUARTO ? ";
            cout<<"\n\t 3.- VIP ?                  ";
            cin>>tipocuar;
            cout<<"\n\tDias hospitalizado:         ";
            cin>>diashosp;

            if (diashosp>=5){
            cout<<"\n\tDescuento vigente % :       ";
            cin>>desc;
            porce=desc;
                }

            cout<<"\n\tOtros conceptos (cantidad) $";
            cin>>otros;

                    if (diashosp<5 and tipocuar==1){//sin descuento
                            total=diashosp*preciogen+otros;
                            subtotal=total;
                        }
                            else if (diashosp<5 and tipocuar==2){
                                total=diashosp*preciocuar+otros;
                                subtotal=total;
                            }
                                else if (diashosp<5 and tipocuar==3){
                                    total=diashosp*preciovip+otros;
                                    subtotal=total;
                                }
                                    else if (diashosp>=5 and tipocuar==1){//con descuento
                                        total=diashosp*preciogen+otros;
                                        subtotal=total;
                                        desc=total*desc/100;
                                        total=total-desc;
                                    }
                                        else if (diashosp>=5 and tipocuar==2){
                                            total=diashosp*preciocuar+otros;
                                            subtotal=total;
                                            desc=total*desc/100;
                                            total=total-desc;
                                        }
                                            else if (diashosp>=5 and tipocuar==3){
                                                total=diashosp*preciovip+otros;
                                                subtotal=total;
                                                desc=total*desc/100;
                                                total=total-desc;
                                            }

            system ("cls");

            cout<<"\t\t\t****** PAGOS ******\n\n ";

            cout<<"\n\t__________________________________________";
            cout<<"\n\t| Id Paciente:                  "<<registros[u].pacientes[0];
            cout<<"\n\t                                          ";
            cout<<"\n\t| Apellido paterno:             "<<registros[u].pacientes[1];
            cout<<"\n\t| Apellido materno:             "<<registros[u].pacientes[2];
            cout<<"\n\t| Nombre (s):                   "<<registros[u].pacientes[3]<<"\n";
            if (tipocuar==1){
            cout<<"\n\t| Tipo de servicio GENERAL    $ 100  * dia";
            }
            else if (tipocuar==2){
            cout<<"\n\t| Tipo de servicio CUARTO     $ 500  * dia";
            }
            else if (tipocuar==3){
            cout<<"\n\t| Tipo de servicio VIP        $ 1000 * dia";
            }
            cout<<"\n\t                                          ";
            cout<<"\n\t| Dias hospitalizado:           "<<diashosp;
            cout<<"\n\t| Otros conceptos (cantidad)   $"<<otros;
            cout<<"\n\t                                          ";
            cout<<"\n\t| Subtotal sin descuento:       "<<subtotal;
            cout<<"\n\t                                          ";
            cout<<"\n\t| Descuento:                    "<<porce<<" %";
            cout<<"\n\t__________________________________________";
            cout<<"\n\t                                          ";
            cout<<"\n\t| Total a pagar:                "<<total;
            cout<<"\n\t__________________________________________";
            cout<<"\n\n\t\t\t\a";

            total=0, subtotal=0, u=10;
            system ("pause");
                }//fin del if buscador
            }//fin del for buscador

            if (existe == false)
                {
                    cout<<"\n\n\t\t\tNO EXISTE PACIENTE, INTENTA DE NUEVO...\n\n\t\t\t\t";
                    system ("pause");
                }

}
// variables para opciones de menus:

#define PASS "java"
#define SALIR "S"
int opcpac, opcmed, opcexp, clase;

int main()
{

int intentos=0;
string password;


do
{

system ("cls");
system ("color a");
cout<<"\n\n\t";
char hola []= {'*',' ','C','O','N','T','R','O','L',' ','D','E',' ','I','N','G','R','E','S','O','S',' ','H','O','S','P','I','T','A','L','A','R','I','O','S',' ','*'};
for (int t=0;t<37;t++){
    Sleep(50);
        cout<<hola[t];
//cout<<"\t! CONTROL DE INGRESOS HOSPITALARIOS !"<<endl;
}
cout<<"\n\n";
cout<<"\t---------------------------------------"<<endl<<endl;

cout<<"\tIngresa la contrasenia o [S] para salir ";

char opcintento;
opcintento= getch();
password="";

while (opcintento !=13){
    password.push_back(opcintento);
    cout<<"*";
    opcintento=getch();
}

intentos++;

if (password==PASS)
    {
intentos=1;

do {

//system ("treasure.mp3");
system ("color f0");
system ("cls");
cout<<"\n\tFECHA:\t";
system ("date /t");

cout<<"\t -----------------------------------"<<endl;
cout<<"\t!                                   !"<<endl;
cout<<"\t! CONTROL DE INGRESOS HOSPITALARIOS !"<<endl;
cout<<"\t!                                   !"<<endl;
cout<<"\t -----------------------------------"<<endl<<endl;

cout<<"\t************************************"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t*             Menu                 *"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t* 1.- Control de Pacientes         *"<<endl;
cout<<"\t* 2.- Control de Medicos           *"<<endl;
cout<<"\t* 3.- Control de Expedientes       *"<<endl;
cout<<"\t* 4.- Control de Pagos             *"<<endl;
cout<<"\t* 5.- Control de Medicamentos      *"<<endl;
cout<<"\t* 6.- Control de Perecederos       *"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t* 7.- Salir                        *"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t************************************"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t* Elija una opcion:                * ";
cin>>clase;

switch (clase)

{

case 1:{
    //Clase paciente
        //system ("color 3f");

        bool band = true;


    do{

    system ("cls");
    cout<<endl;
    cout<<"\t**********************"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t*     PACIENTES      *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 1.- Capturar       *"<<endl;
    cout<<"\t* 2.- Mostrar        *"<<endl;
    cout<<"\t* 3.- Buscar         *"<<endl;
    cout<<"\t* 4.- Modificar      *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 5.- Menu principal *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t**********************"<<endl<<endl;
    cout<<"\tElige una opcion: ";
    cin>>opcpac;
            switch (opcpac)
                {

                    case 1:
                        pacient.capturar();
                    break;

                    case 2:
                        pacient.mostrar();
                    break;

                    case 3:
                        pacient.buscar();
                    break;

                    case 4:
                        pacient.modificar();
                    break;

                    case 5:
                        band = false;
                    break;

                    default: cout<<"\n\n\t\t\tHa elegido una opcion inexistente \n\n\t\t\t\t\t";
                    cout<<"\a";
                    system ("pause");

                }

    }
    while (band == true);
    cout<<"\n\n\t Atras... \n\n\t\t\t\t\t";
    cout<<"\a";
    Sleep (1000);
    break;
}

case 2:{
    // Clase medico
        //system ("color 17");
        bool ban = true;

    while (ban == true)
    {
    system ("cls");
    cout<<endl;
    cout<<"\t**********************"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t*     MEDICOS        *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 1.- Capturar       *"<<endl;
    cout<<"\t* 2.- Mostrar        *"<<endl;
    cout<<"\t* 3.- Buscar         *"<<endl;
    cout<<"\t* 4.- Modificar      *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 5.- Menu principal *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t**********************"<<endl<<endl;
    cout<<"\tElige una opcion: ";
    cin>>opcmed;

    switch (opcmed){

                    case 1:
                        medic.capturar();
                    break;

                    case 2:
                        medic.mostrar();
                    break;

                    case 3:
                        medic.buscar();
                    break;

                    case 4:
                        medic.modificar();
                    break;

                    case 5:
                        ban = false;
                    break;

                    default: cout<<"\n\n\t\t\tHa elegido una opcion inexistente... \n\n\t\t\t\t\t";
                    cout<<"\a";
                    system ("pause");

                    }
        }
    cout<<"\n\n\t Atras... \n\n\t\t\t\t\t";
    cout<<"\a";
    Sleep (1000);
    break;
}

case 3:{
//Clase expedientes
//        system ("color f0");
        bool band = true;

    do{

    system ("cls");
    cout<<endl;
    cout<<"\t**********************"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t*     EXPEDIENTES    *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 1.- Capturar       *"<<endl;
    cout<<"\t* 2.- Mostrar        *"<<endl;
    cout<<"\t* 3.- Buscar         *"<<endl;
    cout<<"\t* 4.- Modificar      *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 5.- Menu principal *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t**********************"<<endl<<endl;
    cout<<"\tElige una opcion: ";
    cin>>opcexp;

            switch (opcexp)
                {

                    case 1:
                    expedient.capturar();
                    break;

                    case 2:
                    expedient.mostrar();
                    break;

                    case 3:
                    expedient.buscar();
                    break;

                    case 4:
                    expedient.modificar();
                    break;

                    case 5:
                        band = false;
                    break;

                    default: cout<<"\n\n\t\t\tHa elegido una opcion inexistente \n\n\t\t\t\t\t";
                    cout<<"\a";
                    system ("pause");

                }

    }
    while (band == true);
    cout<<"\n\n\t Atras... \n\n\t\t\t\t\t";
    //system ("pause");
    cout<<"\a";
    Sleep(1000);
    break;
}

case 4:{
//Clase pagos
//        system ("color f0");

        bool band = true;

    do{
        //bool existe = false;

    system ("cls");
    cout<<endl;
    cout<<"\t**********************"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t*     PAGOS          *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 1.- Cargos         *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 2.- Menu principal *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t**********************"<<endl<<endl;
    cout<<"\tElige una opcion: ";
    cin>>opcexp;

        switch (opcexp)
            {
            case 1:
                pagoss ();
            break;

            case 2:
                band = false;
            break;

            default: cout<<"\n\n\t\t\tHa elegido una opcion inexistente \n\n\t\t\t\t\t";
                cout<<"\a";
                system ("pause");

            }

    }
    while (band == true);
    cout<<"\n\n\t Atras... \n\n\t\t\t\t\t";
    //system ("pause");
    Sleep(1000);
    cout<<"\a";
    break;
}

case 5:{
//Clase expedientes
//        system ("color f0");
        bool band = true;

    do{

    system ("cls");
    cout<<endl;
    cout<<"\t**********************"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t*     MEDICAMENTOS   *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 1.- Capturar       *"<<endl;
    cout<<"\t* 2.- Mostrar        *"<<endl;
    cout<<"\t* 3.- Buscar         *"<<endl;
    cout<<"\t* 4.- Modificar      *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 5.- Menu principal *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t**********************"<<endl<<endl;
    cout<<"\tElige una opcion: ";
    cin>>opcexp;

            switch (opcexp)
                {

                    case 1:
                    medicament.capturarM();
                    break;

                    case 2:
                    medicament.mostrarM();
                    break;

                    case 3:
                    medicament.buscarM();
                    break;

                    case 4:
                    medicament.modificarM();
                    break;

                    case 5:
                        band = false;
                    break;

                    default: cout<<"\n\n\t\t\tHa elegido una opcion inexistente \n\n\t\t\t\t\t";
                    cout<<"\a";
                    system ("pause");

                }

    }
    while (band == true);
    cout<<"\n\n\t Atras... \n\n\t\t\t\t\t";
    //system ("pause");
    cout<<"\a";
    Sleep(1000);
    break;
}

case 6:{
//Clase expedientes
//        system ("color f0");
        bool band = true;

    do{

    system ("cls");
    cout<<endl;
    cout<<"\t**********************"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t*     PERECEDEROS    *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 1.- Capturar       *"<<endl;
    cout<<"\t* 2.- Mostrar        *"<<endl;
    cout<<"\t* 3.- Buscar         *"<<endl;
    cout<<"\t* 4.- Modificar      *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t* 5.- Menu principal *"<<endl;
    cout<<"\t*                    *"<<endl;
    cout<<"\t**********************"<<endl<<endl;
    cout<<"\tElige una opcion: ";
    cin>>opcexp;

            switch (opcexp)
                {

                    case 1:
                    m_pereceder.capturarMP();
                    break;

                    case 2:
                    m_pereceder.mostrarMP();
                    break;

                    case 3:
                    m_pereceder.buscarMP();
                    break;

                    case 4:
                    m_pereceder.modificarMP();
                    break;

                    case 5:
                        band = false;
                    break;

                    default: cout<<"\n\n\t\t\tHa elegido una opcion inexistente \n\n\t\t\t\t\t";
                    cout<<"\a";
                    system ("pause");

                }

    }
    while (band == true);
    cout<<"\n\n\t Atras... \n\n\t\t\t\t\t";
    //system ("pause");
    cout<<"\a";
    Sleep(1000);
    break;
}


// Menú principal opcion salir.
case 7:{cout<<"\n\n\t\t Ha elegido Salir... !! Hasta pronto !! \n\n\n\t\t\t\t\t";
cout<<"\a";
Sleep (2000);
intentos=0;
break;
}

// Opcion equivocada, volver a intentar.
default: {cout<<"\n\n\t\t Ha elegido una opcion inexistente... \n\n\n\t\t\t\t\t";
cout<<"\a";
Sleep (2000);
//return main ();
}
}


}while (intentos==1);

    }

else if (intentos<3 and password!=SALIR ){
                system ("cls");
                system ("color c");
            cout<<"\n\t\t ******************************************";
            cout<<"\n\t\t ***                                    ***";
            cout<<"\n\t\t ***         INTENTO ERRONEO            ***";
            cout<<"\n\t\t ***                                    ***";
            cout<<"\n\t\t ******************************************";
            cout<<"\n\n\n\t\t\t\t";
            system ("pause");
            //break;
}

else if (intentos>2){
                system ("cls");
                system ("color c");
            cout<<"\n\t\t ******************************************";
            cout<<"\n\t\t ***                                    ***";
            cout<<"\n\t\t ***        DEMASIADOS INTENTOS         ***";
            cout<<"\n\t\t ***                                    ***";
            cout<<"\n\t\t ***            SALIENDO...             ***";
            cout<<"\n\t\t ***                                    ***";
            cout<<"\n\t\t ******************************************";
            cout<<"\n\n\n\t\t\t\t";
            system ("pause");
            break;
}
if (password==SALIR){
        system ("color c");
    cout<<"\n\n\n\tHa elegido salir definitivamente...\n\n\n\t\t\t"; system ("pause"); intentos =4;
    }



}while (intentos<=3);
    return 0;
}
