/**
* @author SZATKOWSKI Maxime
* @file Sensor.cpp
* @date 20/09/2022
* @brief fichier source contenant l'impl�mentation des m�thodes de la classe Sensor
*/

#include <iostream>
#include <random>
#include "Sensor.hpp"

using namespace std;

//constructeur par d�faut
Sensor::Sensor()							
{				
    m_minValue = 0;
    m_maxValue = 0;
}

//Destructeur par d�faut
Sensor::~Sensor()                           
{							
}

//constructeur par recopie
Sensor::Sensor(const Sensor& s) 		
{
    this->m_maxValue = s.m_maxValue;
    this->m_minValue = s.m_minValue;
}

//op�rateur d'affectation
Sensor& Sensor::operator=(const Sensor& s) 	
{
    this->m_maxValue = s.m_maxValue;
    this->m_minValue = s.m_minValue;

    return *this;
}

/**
* @brief 
* @return
* @param
**/
int Sensor::getData()
{
    return this->aleaGenVal();
}

/**
* @brief permet de g�n�rere des valeurs al�atoires de type int
* @return int
* @param void
**/
int Sensor::aleaGenVal()
{
    int MIN = this->m_minValue;
    int MAX = this->m_maxValue;

    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(MIN, MAX);
    int alea = distr(eng);   

    return alea;
}