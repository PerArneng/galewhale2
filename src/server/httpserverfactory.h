
#pragma once

#include "httpserver.h"
#include <string>

class HttpServerFactory {

public:
	shared_ptr<HttpServer> create(string name);

};