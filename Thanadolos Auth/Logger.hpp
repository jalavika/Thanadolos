#pragma once

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include "Packet.hpp"
#include "Locker.hpp"

class Client;
class Logger
{
public:
	static void Infos(std::string const &msg, int color = 15);
	static void Error(std::string const &msg, int color = 12, std::string const &error = "");
	static void NetworkRcv(Packet &packet, Client &client, std::string name = "", int color = 3);
	static void NetworkSnd(IMessage *message, Packet &packet, Client &client, int color = 11);
	static Locker *getLocker();
};
#endif