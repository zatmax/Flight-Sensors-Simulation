/**
* @author SZATKOWSKI Maxime
* @file Light.hpp
* @date 06/10/2022
* @brief  Fichier header contenant la d�finition des m�thodes de la classe Light
*/

// Define guards
#ifndef __Light_H__
#define __Light_H__

#include "Sensor.hpp"

class Light : public Sensor {

public:

	//constructeur par d�faut des capteurs Light
	Light();

	//constructeur par recopie des capteurs Temperature
	Light(const Light& t);

	//constructeur par recopie des capteurs Light
	Light(const Light& l);

	//Op�rateur d'affectation
	Light& operator=(const Light& tp);

};

#endif  // Sensor_H#pragma once
