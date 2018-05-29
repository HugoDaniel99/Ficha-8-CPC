#ifndef JARDIMZOOLOGICO_H
#define JARDIMZOOLOGICO_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "animal.h"

using namespace std;

class CJardimZoologico {
	
	public:
		 bool animalJovem(const char *nome);
		 vector<ANIMAL> animaisJovens();
		 void loadAnimals(istream& is);
		 string veterinarioComMaisTrabalho();
		 void printanimals();
		 int somaIdadeAnimal();
		 
 	private:
 		vector<ANIMAL> animais;
 
 
}; 
