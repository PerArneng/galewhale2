import os

env = Environment(
	CXX='/Users/pure/Software/gcc47/bin/g++-4.7',
	CXXFLAGS='-std=c++0x'
)

src = 'src'
server_src = '%s/%s' % (src, 'server') 

server_files = [
	'httpserver.cpp', 
	'httpserverfactory.cpp', 
	'mongoosehttpserver.cpp',
	'server.cpp'
]

server_obj_files = []

for server_file in server_files:
	target = 'bin/%s.o' % (os.path.splitext(server_file)[0])
	server_obj_files.append(target)
	env.Object(target = target, 
			   source = '%s/%s' % (server_src, server_file))

Program(target = 'bin/galewhaled', source = server_obj_files)
