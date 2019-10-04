#include <iostream>
#include <Windows.h>

int main(){
	char key = GetAsyncKeyState(0x43);
	if(key){
		printf("You press a");
	}

	return 0;
}