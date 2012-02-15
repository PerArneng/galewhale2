
#include <iostream>
#include <cstdlib>
#include "httpserverfactory.h"

using namespace std;

int main() {

	HttpServerFactory httpServerFactory;
	auto server = httpServerFactory.create("mongoose");
	
	server->addHandler();
	
	server->start();
	
	server->stop();

	return EXIT_SUCCESS;
}