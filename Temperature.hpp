/**
* @author SZATKOWSKI Maxime
* @file Temperature.hpp
* @date 06/10/2022
* @brief  Fichier header contenant la définition des méthodes de la classe Température
*/

// Define guards
#ifndef __Temperature_H__
#define __Temperature_H__

#include "Sensor.hpp"

class Temperature : public Sensor {

public:

	//constructeur par défaut des capteurs Temperature
	Temperature();

	//constructeur par recopie des capteurs Temperature
	Temperature(const Temperature& t);

	//Destructeur par défaut
	~Temperature();

	//Opérateur d'affectation
	Temperature& operator=(const Temperature& tp);


};

#endif  // Sensor_H
