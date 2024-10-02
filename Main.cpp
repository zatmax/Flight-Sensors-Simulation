#include "Scheduler.hpp"
#include "Server.hpp"
#include <iostream>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main() {

	Scheduler s;
	Server serv;

	char f_path[513];		//path du fichier log
	int nb_iteration = 0;	//Temps de simulation

	//Saisie par l'utilisateur du chemin du fichier log
	cout << "veuillez saisir le chemin dans lequel vous souhaitez créer le fichier log" << endl;
	cin.getline(f_path, 512);

	//Saisie par l'utilisateur du temps de simulation et d'affichage des valeurs
	cout << "veuillez saisir le temps de simulation" << endl;
	if (nb_iteration >= 0 && nb_iteration < 1000) {
		cin>>nb_iteration;
	}

	//Saisie de l'utilisateur s'il souhaite écrire dans le fichier log, afficher dans la console ou les deux

	for (int i = 0; i < nb_iteration; i++) {		//boucle choisit selon le nombre d'itérations

		cout << "Hello World" << endl;	//test
		s.getData();
		s.sendData();

		if (serv.consoleActivation == true) {

			serv.consoleWrite(packet);		//packet à récupérer
		}
		if (serv.logActivation) {

			serv.fileWrite(f_path, packet);
		}
		Sleep(1000);	//en millisecondes
	}
} 


