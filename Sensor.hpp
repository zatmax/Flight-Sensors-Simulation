/**
* @author SZATKOWSKI Maxime
* @file Sensor.hpp
* @date 15/09/2022
* @brief  Fichier header contenant la définition des méthodes de la classe Sensor
*/

// Define guards
#ifndef __Sensor_H__
#define __Sensor_H__

#include "Temperature.hpp"
#include "Pressure.hpp"
#include "Humidity.hpp"
#include "Light.hpp"
#include "Packet.hpp"

/**
* @class Sensor
* @brief
*/
class Sensor
{

protected:

	int m_minValue;
	int m_maxValue;

public:

	// Definition de la forme canonique

	//Constructeur par défaut
	Sensor();

	//Destructeur
	~Sensor();

	//Constructeur par recopie
	Sensor(const Sensor& valeur);

	//opérateur d'affectation
	Sensor& operator=(const Sensor& s);

	/**
	* @brief 
	* @return 
	* @param
	*/
	int getData();

	/**
	* @brief permet de générere des valeurs aléatoires de type int
	* @return int
	* @param void
	*/
	int aleaGenVal();
};

#endif  // Sensor_H