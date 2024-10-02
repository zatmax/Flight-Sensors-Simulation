/**
* @author SZATKOWSKI Maxime
* @file Scheduler.cpp
* @date 06/10/2022
* @brief fichier source contenant l'implémentation des méthodes de la classe Scheduler
*/

#include "Scheduler.hpp"

Scheduler::Scheduler()
{

}

Scheduler::Scheduler(const Scheduler& s)
{
	m_packet = s.m_packet;
}

Scheduler::~Scheduler()
{
}

Scheduler& Scheduler::operator=(const Scheduler& s)
{
	m_packet = s.m_packet;

	return *this;
}

Scheduler Scheduler::getData() 
{
	Temperature t;
	Pressure p;
	Humidity h;
	Light l;

	m_packet.m_temp = t.getData();
	m_packet.m_press = p.getData();
	m_packet.m_humid = h.getData();
	m_packet.m_light = l.getData();

	return *this;
}

Packet Scheduler::sendData()
{
	return m_packet;
}