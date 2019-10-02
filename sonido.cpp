#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int leer(){
	int dato;
	scanf("%d",&dato);
	return dato;
}

float frecuencia(int nota, int octava){
	float f;

	f = 440*pow(M_E,(octava-4.0+(nota-10)/12.0)*M_LN2);
	return f;
}

void imprimir(float dato){
	printf("%f", dato);
}

int main(){
	/*
	Beep(523,500); //523 hertz (C5) durante 500 milisegundos
	cin.get(); //espera
	return 0;
	*/
	int nota;
	int octava;
	float f;

	nota = leer();
	octava = leer();
	//printf("%d %d", nota, octava);
	//scanf("%d %d", &nota, &octava);
    //cout << nota << " " << octava << endl;
	f = frecuencia(nota, octava);
	imprimir(f);
    return 0;
}