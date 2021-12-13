#pragma once
#include <iostream>

class Server {
public:
	int CPUS;
	double memory;
	double performance;
	int openPorts;

	Server();
	Server(int C, double M, double P, int OP) : CPUS(C), memory(M), performance(P), openPorts(OP) {};

private:
	void displayConfiguration() noexcept;
};