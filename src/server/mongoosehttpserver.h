
#pragma once

#include "httpserver.h"

class MongooseHttpServer : public HttpServer {

public:
	void addHandler() override;
	void start() override;
	void stop() override;
};