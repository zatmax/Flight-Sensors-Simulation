/**
* @author SZATKOWSKI Maxime
* @file Packet.hpp
* @date 02/10/2022
* @brief Fichier header contenant la définition des méthodes de la classe Server
*/

#ifndef Packet_H
#define Packet_H

#include <iostream>

class Packet
{
    friend class Scheduler;
    friend class Server;

private:

    //attributs
    int m_press;
    int m_temp;
    int m_light;
    int m_humid;

public:

    Packet();
    Packet(const Packet& param_p);
    ~Packet() {}
    Packet operator=(const Packet&);
};

#endif //PACKET_H
