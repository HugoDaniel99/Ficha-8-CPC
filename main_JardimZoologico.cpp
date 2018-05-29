#include <iostream>
#include "animal.h"
#include "jardimzoologico.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	ifstream ficheiro ("animais.txt");
	loadAnimals(ficheiro);
	
	return 0;
}
