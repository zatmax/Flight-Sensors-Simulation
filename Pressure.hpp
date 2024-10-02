/**
* @author SZATKOWSKI Maxime
* @file Pressure.hpp
* @date 06/10/2022
* @brief  Fichier header contenant la définition des méthodes de la classe Pressure
*/

// Define guards
#ifndef __Pressure_H__
#define __Pressure_H__

#include "Sensor.hpp"

/**
* @class Pressure
* @brief Permet de générer des objets capteurs de Pression
*/
class Pressure : public Sensor {

public:

	//constructeur par défaut des capteurs Pressure
	Pressure();

	//constructeur par recopie des capteurs Temperature
	Pressure(const Pressure& t);

	//constructeur par recopie des capteurs Pressure
	Pressure(const Pressure& p);

	//Opérateur d'affectation
	Pressure& operator=(const Pressure& tp);


};

#endif  // Sensor_H
