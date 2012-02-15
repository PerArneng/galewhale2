
CXX=g++-4.7
CXX_OPTS=-std=c++11 -Wall -pedantic

SRC_SRV=src/server
BIN_SRV=bin/galewhaled

all: httpserver.o mongoosehttpserver.o httpserverfactory.o server.o
	$(CXX) $(CXX_OPTS) server.o httpserver.o httpserverfactory.o mongoosehttpserver.o -o $(BIN_SRV)

server.o: $(SRC_SRV)/server.cpp
	$(CXX) $(CXX_OPTS) -c $(SRC_SRV)/server.cpp

httpserverfactory.o: $(SRC_SRV)/httpserverfactory.h $(SRC_SRV)/mongoosehttpserver.h $(SRC_SRV)/httpserver.h $(SRC_SRV)/mongoosehttpserver.cpp
	$(CXX) $(CXX_OPTS) -c $(SRC_SRV)/httpserverfactory.cpp	

httpserver.o: $(SRC_SRV)/httpserver.h $(SRC_SRV)/httpserver.cpp
	$(CXX) $(CXX_OPTS) -c $(SRC_SRV)/httpserver.cpp
	
mongoosehttpserver.o: $(SRC_SRV)/httpserver.h $(SRC_SRV)/mongoosehttpserver.h $(SRC_SRV)/mongoosehttpserver.cpp
	$(CXX) $(CXX_OPTS) -c $(SRC_SRV)/mongoosehttpserver.cpp
	
clean:
	rm *.o
	rm $(BIN_SRV)