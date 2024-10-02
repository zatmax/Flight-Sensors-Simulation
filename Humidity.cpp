/**
* @author SZATKOWSKI Maxime
* @file Humidity.hpp
* @date 06/10/2022
* @brief Fichier source contenant les m�thodes de la classe Humidite
*/

#include "Humidity.hpp"

Humidity::Humidity()
{
    this->m_maxValue = 50;  //Valeur maximale que peut prendre le capteur en %
    this->m_minValue = 30;  //Valeur minimale que peut prendre le capteur en %
}

//Constructeur par recopie
Humidity::Humidity(const Humidity& temp_p)
{
    this->m_maxValue = temp_p.m_maxValue;
    this->m_minValue = temp_p.m_minValue;
}

//destructeur par d�faut
Humidity::~Humidity() = default;

//Op�rateur d'affectation
Humidity& Humidity::operator=(const Humidity & temp_p)
{
    this->m_minValue = temp_p.m_minValue;
    this->m_maxValue = temp_p.m_maxValue;

    return *this;
}