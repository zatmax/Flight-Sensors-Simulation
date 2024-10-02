/**
* @author SZATKOWSKI Maxime
* @file Sensor.hpp
* @date 15/09/2022
* @brief  Fichier header contenant la d�finition des m�thodes de la classe Sensor
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

	//Constructeur par d�faut
	Sensor();

	//Destructeur
	~Sensor();

	//Constructeur par recopie
	Sensor(const Sensor& valeur);

	//op�rateur d'affectation
	Sensor& operator=(const Sensor& s);

	/**
	* @brief 
	* @return 
	* @param
	*/
	int getData();

	/**
	* @brief permet de g�n�rere des valeurs al�atoires de type int
	* @return int
	* @param void
	*/
	int aleaGenVal();
};

#endif  // Sensor_H