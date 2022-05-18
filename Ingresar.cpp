
#include<iostream>
#include <algorithm>

using std::cout; using std::cin;
using std::endl; using std::string;

using namespace std;

class Entero : public Ingresar {
	public:
   		char* ingresarDatos(char* msg);
};

char* Entero::ingresarDatos(char* msg){
    char *dato=new char[10];
    char c;
    int i=0;
    printf("%s\n",msg);
    while((c=getch())!=13 ){
    if(c>='0' && c<='9'){
        printf("%c",c);
        dato[i++]=c;
        }
    }
    dato[i]='\n';

    return dato;
}

