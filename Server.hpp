/**
* @author SZATKOWSKI Maxime
* @file Server.hpp
* @date 15/09/2022
* @brief Fichier header contenant la d�finition des m�thodes de la classe Server
*/

#ifndef __Server_H__
#define __Server_H__

#include "Scheduler.hpp"
#include "Packet.hpp"

/**
* @class Server
* @brief
*/

class Server {

private:

	//Packet m_packet;	� envoyer directement ? via packet.m_temp...

	//Descriptif des attributs 
	bool consoleActivation;
	bool logActivation;

public:

//Definition de la forme canonique de Coplien

	//constructeur par d�faut
	Server();

	//constructeur par recopie
	Server(const Server& s);

	//destructeur par d�faut
	~Server() {};

	//op�rateur d'affectation
	Server& operator=(const Server& s);

	/**
	* @brief Permet d'�crire les valeurs des capteurs dans un fichier.txt
	* @return void
	* @param une cha�ne de caract�re et un Packet
	*/

	void fileWrite(const std::string, const Packet);

	/**
	* @brief Permet d'�crire les valeurs des capteurs dans la console
	* @return void
	* @param Packet
	*/

	void consoleWrite(const Packet);
};

#endif  // Sensor_H
