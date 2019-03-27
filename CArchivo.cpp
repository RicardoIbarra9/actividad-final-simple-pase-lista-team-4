#include "CArchivo.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;



CArchivo::CArchivo(int _opcion,string _contenido,string _contenido2)
{

    opcion = _opcion;
    contenido = _contenido;
    contenido2 = _contenido2;

}

CArchivo::~CArchivo()
{
    //dtor
}
void CArchivo::MenuGeneral(int,string,string)
{
    string _contenido;
    string _contenido2;
    int _opcion;
     do {
    system("cls");

    cout << "====== Menu principal ======\n" << endl;
    cout << "1- Crear archivo de texto\n" << endl;
    cout << "2- Abrir archivo de texto\n" << endl;
    cout << "3- Modificar archivo de texto\n" << endl;
    cout << "Ingresa la opcion: ";
    cin >> _opcion;


    switch (_opcion) {
    case 0:
      break;
    case 1:
      {
        cout << "Ingresa el nombre del archivo a crear(sin el .txt): ";
        cin.ignore();
        getline(cin, _contenido2);
        cout << "Ingresa el contenido del archivo: ";
        getline(cin, _contenido);
        _contenido2 += ".txt";
        ofstream fs(_contenido2.c_str());
        fs << _contenido << endl;
        fs.close();
        cout << "El archivo ha sido creado correctamente" << endl;
        system("pause");
        break;
      }
    case 2:
      {
        cout << "Ingresa el nombre del archivo que quieres leer(sin el .txt): ";
        cin.ignore();
        getline(cin, _contenido2);
        _contenido2 += ".txt";
        ifstream fs(_contenido2.c_str(), ios:: in );
        char linea[128];
        long contador = 0L;
        if (fs.fail())
          cerr << "El fichero no existe" << endl;
        else
          while (!fs.eof()) {
            fs.getline(linea, sizeof(linea));
            cout << linea << endl;
            if ((++contador % 24) == 0) {
              cout << "continuar...";
              cin.get();
            }
          }
        fs.close();
        system("pause");
        break;
      }
    case 3:
      {
        cout << "Ingresa el nombre del archivo que quieres modificar(sin el .txt): ";
        cin.ignore();
        getline(cin, _contenido2);
        _contenido2 += ".txt";
        cout << "Ingresa el NUEVO contenido del archivo: ";
        getline(cin, _contenido);
        ofstream fs(_contenido2.c_str(), ios::out);
        fs << _contenido << endl;
        fs.close();
        cout << "El archivo ha sido modificado correctamente" << endl;
        system("pause");
        break;
      }
    default:
      cout << "\nEl numero de opcion escrito no es valido\n" << endl;
      system("pause");
    }
  } while (_opcion != 0);
return;
}

