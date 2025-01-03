#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

struct jugador
{
    string nombre;
    int salario;
    
};

int main()
{
    string leer, numeros, texto,b;
    int longitud, i, a, n=12 ,p , c, j,k,l,m,o,z,g, pension_jefed, pension_jefep, u,y;
    char *token, *hola;
    jugador jugadores[100];
    i =0;
    ifstream archivo("listaSalarios2.txt");
    
    FILE *archivo2;
    char path2[100] = "salida.txt";
    archivo2 = fopen(path2, "w+");
    
    while(getline(archivo,leer)){
        //cout<<leer<<endl;
        const int length = leer.length(); 
  
    // declaring character array (+1 for null terminator) 
        char* char_array = new char[length + 1]; 
  
    // copying the contents of the 
    // string to char array 
        strcpy(char_array, leer.c_str()); 
        token=strtok(char_array, ",");
        jugadores[i].nombre = token;
        fprintf(archivo2,"%s ", token);
        //cout<<token<<endl;
        token=strtok(NULL,",");
        jugadores[i].salario = atoi(token);
        
        //cout<<token<<endl;
        cout <<"Nombre del futbolista profesional: "<< jugadores[i].nombre<<"\n" << endl;
        fprintf(archivo2,"= %s.\n", token);
        cout <<"Ingresos mensuales: "<< jugadores[i].salario<<"\n" << endl;
        
        
        b=jugadores[i].nombre;
        a=jugadores[i].salario;
        
        i++;
        
        for(i=0;i<n;i++){
            c= a*pow(10,6);
            l= c*0.04;
            p= 4066; //depende del dolar de hoy
            j= a*p;
            k= j*0.04;
            u=l*2;
            y=k*2;
            m= c-u;
            o= j-y;
            z= c*0.085;
            g= j*0.085;
            pension_jefed= c*0.12;
            pension_jefep= j*0.12;
        }
        
        cout<< "Salario en millones de dolares: "<<c<<endl;
        fprintf(archivo2,"\nSalario en millones de dolares: %d \n", c);
        
        cout<<"\n"<< "Salario de millones de dolares a peso colombiano: "<<j<<"000000"<<endl;
        fprintf(archivo2,"\nSalario de millones de dolares a peso colombiano: %d000000 \n", j);
        
        cout<<"\n"<< "Gastos de salud en millones de dolares: "<<l<<endl;
        fprintf(archivo2,"\nGastos de salud en millones de dolares: %d \n", l);
        
        cout<<"\n"<< "Gastos de salud en millones de pesos: "<<k<<"000000"<<endl;
        fprintf(archivo2,"\nGastos de salud en millones de pesos: %d000000 \n", k);
        
        cout<<"\n"<< "Gastos de pension en millones de dolares: "<<l<<endl;
        fprintf(archivo2, "\nGastos de pension en millones de dolares: %d \n",l);
        
        cout<<"\n"<< "Gastos de pension en millones de pesos: "<<k<<"000000"<<endl;
        fprintf(archivo2, "\nGastos de pension en millones de pesos: %d000000 \n",k);
        
        cout<<"\n"<< "Sueldo mensual del trabajador en dolares: "<<m<<endl;
        fprintf(archivo2, "\nSueldo mensual del trabajador en dolares: %d \n",m);
        
        cout<<"\n"<< "Sueldo mensual del trabajador en pesos: "<<o<<"000000"<<endl;
        fprintf(archivo2, "\nSueldo mensual del trabajador en pesos: %d000000 \n",o);
        
        cout<<"\n"<< "La salud del jefe en millones de dolares es: "<<z<<endl;
        fprintf(archivo2, "\nLa salud del jefe en millones de dolares es: %d \n",z);
        
        cout<<"\n"<< "La salud del jefe en millones de pesos es: "<<g<<"000000"<<endl;
        fprintf(archivo2, "\nLa salud del jefe en millones de pesos es: %d000000 \n",g);
        
        cout<<"\n"<< "Gastos de pension del jefe en millones de dolares: "<<pension_jefed<<"000000"<<endl;
        fprintf(archivo2, "\nGastos de pension del jefe en millones de dolares %d \n",pension_jefed);
        
        cout<<"\n"<< "Gastos de pension del jefe en millones de pesos: "<<pension_jefep<<"000000\n"<<endl;
        fprintf(archivo2, "\nGastos de pension del jefe en millones de pesos: %d000000 \n",pension_jefep);
        
        cout<<"//////////////////////////////////////////////////////////////////////////////"<<endl;
        fprintf(archivo2,"//////////////////////////////////////////////////////////////// \n");
    }
}