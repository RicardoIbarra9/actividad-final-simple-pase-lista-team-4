#include "CArchivo.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{

string contenido;
string contenido2;
int opcion;

    CArchivo A1(opcion,contenido,contenido2);
    A1.MenuGeneral(opcion,contenido,contenido2);

    return 0;
}
