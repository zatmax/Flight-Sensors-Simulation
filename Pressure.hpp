/**
* @author SZATKOWSKI Maxime
* @file Pressure.hpp
* @date 06/10/2022
* @brief  Fichier header contenant la d�finition des m�thodes de la classe Pressure
*/

// Define guards
#ifndef __Pressure_H__
#define __Pressure_H__

#include "Sensor.hpp"

/**
* @class Pressure
* @brief Permet de g�n�rer des objets capteurs de Pression
*/
class Pressure : public Sensor {

public:

	//constructeur par d�faut des capteurs Pressure
	Pressure();

	//constructeur par recopie des capteurs Temperature
	Pressure(const Pressure& t);

	//constructeur par recopie des capteurs Pressure
	Pressure(const Pressure& p);

	//Op�rateur d'affectation
	Pressure& operator=(const Pressure& tp);


};

#endif  // Sensor_H
