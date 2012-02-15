
#include "httpserverfactory.h"
#include "httpserver.h"
#include "mongoosehttpserver.h"
#include <string>
#include <memory>

using namespace std;

shared_ptr<HttpServer> HttpServerFactory::create(string name) {
	return static_pointer_cast<HttpServer>(make_shared<MongooseHttpServer>());
}