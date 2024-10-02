/**
* @author SZATKOWSKI Maxime
* @file Scheduler.hpp
* @date 06/10/2022
* @brief  Fichier header contenant la définition des méthodes de la classe Scheduler
*/

// Define guards
#ifndef __Scheduler_H__
#define __Scheduler_H__

#include <iostream>
#include "Light.hpp"
#include "pressure.hpp"
#include "Temperature.hpp"
#include "Humidity.hpp"
#include "Packet.hpp"
#include "Sensor.hpp"
#include "Server.hpp"

class Scheduler {

private:

	Packet m_packet;

public :

	//Définition de la forme canonique 
	Scheduler();
	Scheduler(const Scheduler& s);
	~Scheduler();
	Scheduler& operator=(const Scheduler& s);

	/**
	* @brief Permet de récupérer les valeurs des serveurs pour les stocker dans Packet
	* @param void
	* @return void
	**/
	Scheduler getData();	

	/**
	* @brief Permet d'envoyer le packet contenant les valeurs des capteurs reçus par la fonction getData()
	* @return void
	* @param void 
	**/
	Packet sendData();
};

//pensez à détruire objet

#endif  // Scheduler_H