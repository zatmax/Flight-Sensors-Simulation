/**
* @author SZATKOWSKI Maxime
* @file Server.hpp
* @date 15/09/2022
* @brief fichier source contenant l'impl�mentation des m�thodes de la classe Server
*/

#include "Server.hpp"
#include <iostream>
#include <fstream>

using namespace std;

using std::fstream;

Server::Server(){}

Server::Server(const Server& s) 
{
    consoleActivation = s.consoleActivation;
    logActivation = s.logActivation;
}

Server& Server::operator=(const Server& s) 
{
    consoleActivation = s.consoleActivation;
    logActivation = s.logActivation;
 
    return *this;
}

void Server::consoleWrite(const Packet p) 
{
    cout << "Luminosity :" << p.m_light << " lumen" << endl;
    cout << "Pressure :" << p.m_press << " hPa" << endl;
    cout << "Temperature :" << p.m_temp << " c" << endl;
    cout << "Humidity :" << p.m_humid << " %" << endl;
}

//penser � mettre fpath en param�tre / demander le path le main (string)
void Server::fileWrite(const string fpath, const Packet p)
{
    ofstream file(fpath, ios::app);

    if (file)
    {
        cout << "�criture" << endl;  //heure � laquelle les valeurs sont �crites
        file << " Luminosity : " << p.m_light << " lumen" << endl;
        file << " Pressure : " << p.m_press << " hPa" << endl;
        file << " Temperature : " << p.m_temp << " c" << endl;
        file << " Humidity : " << p.m_humid << " %" << endl;
        
        file.close();
    }
    else
    {
        cerr << "Cannot open file" << endl;
    }
}