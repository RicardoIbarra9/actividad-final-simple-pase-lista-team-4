#ifndef CARCHIVO_H
#define CARCHIVO_H
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

class CArchivo
{
    public:
        CArchivo(int,string,string);
        virtual ~CArchivo();

        void MenuGeneral(int,string,string);

    protected:

  private:
  string contenido;
  string contenido2;
  int opcion;


};

#endif // CARCHIVO_H
