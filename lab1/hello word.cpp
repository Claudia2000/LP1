#include <iostream>

using namespace std;

int main()
{
	
	cout << "Hola mundo""\n";
	return 0;
}

// Errores
 //1° Al eliminar iostream dice que cout no tiene una librería fuente.
 //2° Al eliminar std dice que cout depende de std.
 //3° Al escribir count en vez de cout.
 //4° Al eliminar int main 6	1	F:\lenguaje de programación I\hello word.cpp	[Error] expected unqualified-id before '{' token
 //5° Al eliminar return 0 12	1	F:\lenguaje de programación I\hello word.cpp	[Error] unterminated comment
 //6° Al eliminar los cochetes:
    	//2	F:\lenguaje de programación I\hello word.cpp	[Error] expected initializer before 'cout'
    	//2	F:\lenguaje de programación I\hello word.cpp	[Error] expected unqualified-id before 'return'
 //7° Si olvidamos un punto y coma 9	2	F:\lenguaje de programación I\hello word.cpp	[Error] expected ';' before 'return'
 //8° Al eliminar "\n" 9	2	F:\lenguaje de programación I\hello word.cpp	[Error] expected ';' before 'return'
 //9° Si cometemos un error ortográfico 3	7	F:\lenguaje de programación I\hello word.cpp	[Error] expected nested-name-specifier before 'namespaces'
 //10° Al retornar 1 9	2	F:\lenguaje de programación I\hello word.cpp	[Error] expected ';' before 'return' 
