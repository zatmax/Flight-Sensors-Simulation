#include "Light.hpp"

//Constructeur par d�faut
Light::Light()
{
    this->m_maxValue = 1200; //lumen
    this->m_minValue = 800;
}

//Constructeur par recopie
Light::Light(const Light& temp_p)
{
    this->m_maxValue = temp_p.m_maxValue;
    this->m_minValue = temp_p.m_minValue;
}

//Destructeur par d�faut 
Light::~Light() = default;

//op�rateur d'affectation
Light& Light::operator=(const Light & temp_p)
{
    this->m_minValue = temp_p.m_minValue;
    this->m_maxValue = temp_p.m_maxValue;
    return *this;
}