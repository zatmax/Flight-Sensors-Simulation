/**
* @author SZATKOWSKI Maxime
* @file Temperature.hpp
* @date 06/10/2022
* @brief Permet de générere des objets de type capteurs de température
*/

#include "Temperature.hpp"


//Constructeur par défaut
Temperature::Temperature()
{
    this->m_maxValue = 30;     //°c
    this->m_minValue = 15;
}

//Constructeur par recopie
Temperature::Temperature(const Temperature& temp_p)
{
    this->m_maxValue = temp_p.m_maxValue;
    this->m_minValue = temp_p.m_minValue;
}

//Destructeur par défaut
Temperature::~Temperature() = default;

//Opérateur d'affectation
Temperature& Temperature::operator=(const Temperature & temp_p)
{
    this->m_minValue = temp_p.m_minValue;
    this->m_maxValue = temp_p.m_maxValue;
    return *this;
}