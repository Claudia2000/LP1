// Encuentra al menos 4 errores
#include <iostream> 
#include <string> 
using namespace std ;
int main ( )
{
string s = "¡Adios mundo cruel!" ;
cout << s << '\n';
}

//1° 7	1	E:\cuatro errores.cpp	[Error] 'STRING' was not declared in this scope
//2° 8	1	E:\cuatro errores.cpp	[Error] 'cOut' was not declared in this scope
//3° 8	9	E:\cuatro errores.cpp	[Error] 'S' was not declared in this scope
//4° 18	C:\crossdev\src\mingw-w64-v3-git\mingw-w64-crt\crt\crt0_c.c	undefined reference to `WinMain'
