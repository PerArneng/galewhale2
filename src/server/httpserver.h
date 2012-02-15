
#pragma once

#include <memory>

using namespace std;

class HttpServer {

public:
	HttpServer();
	virtual void addHandler();
	virtual void start();
	virtual void stop();
};

