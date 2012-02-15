#include <iostream>
#include "mongoosehttpserver.h"

using namespace std;

void MongooseHttpServer::addHandler() {
	cout << "mongoose: adding a handler" << endl;
}

void MongooseHttpServer::start() {
	cout << "mongoose: starting server" << endl;
}

void MongooseHttpServer::stop() {
	cout << "mongoose: stopping server" << endl;
}