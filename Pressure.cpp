/**
* @author SZATKOWSKI Maxime
* @file Pressure.cpp
* @date 06/10/2022
* @brief Permet de génerer des objets de type capteurs de pression
*/

#include "Pressure.hpp"

//Constructeur par défaut
Pressure::Pressure()
{
    this->m_maxValue = 900; //hPa
    this->m_minValue = 700;
}

//Constructeur par recopie
Pressure::Pressure(const Pressure& temp_p)
{
    this->m_maxValue = temp_p.m_maxValue;
    this->m_minValue = temp_p.m_minValue;
}

//Destructeur par défaut
Pressure::~Pressure() = default;

//Opérateur d'affectation
Pressure& Pressure::operator=(const Pressure & temp_p)
{
    this->m_Value = temp_p.m_Value;
    this->m_minValue = temp_p.m_minValue;
    this->m_maxValue = temp_p.m_maxValue;
    return *this;
}