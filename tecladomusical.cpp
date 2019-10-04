#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>

using namespace std;

/*char leer(void)
{char n;
    scanf("%c",&n);
    return n;
}*/

char leer(){
	char key;
	key = _getch();
	return key;
}

float frecuencia(int k, int j)
{
    float f;
    f=440*pow(M_E,(j-4.0+(k-10)/12.0)*M_LN2);
    return f;
}
int main(){
	char p;
	float f;
	int o = 5;
	printf("Teclado Musical [a, w, s, e, d, f, t, g, y, h, u, j] \n");
	p = leer();
	
	while(p!='0'){
		switch (p){
		case '-': o--; break;
		case '+': o++; break;
		case 'A':
		    break;
		case 'a':
		    f=frecuencia(1,o); Beep(f,500); break;
		case 'W': ;
		case 'w': f=frecuencia(2,o); Beep(f,500); break;
		case 'S':
		case 's': f=frecuencia(3,o); Beep(f,500); break;
		case 'E':
		case 'e': f=frecuencia(4,o); Beep(f,500); break;
		case 'D':
		case 'd': f=frecuencia(5,o); Beep(f,500); break;
		case 'F':
		case 'f': f=frecuencia(6,o); Beep(f,500); break;
		case 'T':
		case 't': f=frecuencia(7,o); Beep(f,500); break;
		case 'G':
		case 'g': f=frecuencia(8,o); Beep(f,500); break;
		case 'Y':
		case 'y': f=frecuencia(9,o); Beep(f,500); break;
		case 'H':
		case 'h': f=frecuencia(10,o); Beep(f,500); break;
		case 'U':
		case 'u': f=frecuencia(11,o); Beep(f,500); break;
		case 'J':
		case 'j': f=frecuencia(12,o); Beep(f,500); break;
		}
		p=leer();
	}
	
	return 0;

}
