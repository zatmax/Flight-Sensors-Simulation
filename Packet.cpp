/**
* @author SZATKOWSKI Maxime
* @file Packet.cpp
* @date 02/10/2022
* @brief Fichier header contenant la définition des méthodes de la classe Server
*/

#include "Packet.hpp"

//Constructeur par défaut
Packet::Packet() 
{
    m_press = 0;
    m_temp = 0; 
    m_light = 0;
    m_humid = 0;
    
}

//Constructeur par recopie
Packet::Packet(const Packet& pack) 
{
    m_temp = pack.m_temp;
    m_press = pack.m_press;
    m_light = pack.m_light;
    m_humid = pack.m_humid;
}

//Opérateur d'affectation
Packet Packet::operator=(const Packet& pack)
{
    m_temp = pack.m_temp;
    m_press = pack.m_press;
    m_light = pack.m_light;
    m_humid = pack.m_humid;

    return *this;
}