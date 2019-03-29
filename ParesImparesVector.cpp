#include <iostream>
using namespace std;
int main()
{
    int tamanio = 0;
    cout<<"**Programa que separa numeros pares e impares almacenados en un vector de tamanio n"<<endl<<endl;
    cout<<"Cuantos numeros desea ingresar?"<<endl;
    cin>>tamanio;
    int vectorUno[tamanio], pares[tamanio], impares[tamanio];
    cout<<"Solicitando datos..."<<endl<<endl;
    for(int i = 0;i<tamanio;i++)
    {
        cout<<"Ingrese su numero"<<endl;
        cin>>vectorUno[i];
    }
    for(int j = 0;j<tamanio;j++)
    {
        if(vectorUno[j]%2==0)
        {
            pares[j] = vectorUno[j];
        }
        else
        {
            impares[j] =  vectorUno[j];
        }
    }
    cout<<"Numeros ingresados"<<endl;
    for(int i = 0;i<tamanio;i++)
    {
        cout<<vectorUno[i]<<endl;
    }
    cout<<"Numeros pares"<<endl;
    for(int j = 0;j<tamanio;j++)
    {
        cout<<pares[j]<<endl;
    }
    cout<<"Numeros impares"<<endl;
    for(int k = 0;k<tamanio;k++)
    {
        cout<<impares[k]<<endl;
    }
    cout<<"Gracias por utilizar este programa"<<endl;
    return 0;
}
