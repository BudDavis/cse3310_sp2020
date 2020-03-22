# this is an example makefile


all: asio-1.12.2 src/chat_server src/chat_client src/json \
     src/shuffle_test

asio-1.12.2:
	tar xzf asio-1.12.2.tar.gz

CXXFLAGS+= -DASIO_STANDALONE -Wall -O0 -g -std=c++11
CPPFLAGS+=-I./include -I./asio-1.12.2/include -I./src
LDLIBS+= -lpthread

src/shuffle_test:src/shuffle_test.cpp src/cards.cpp
	${CXX} -o $@ $^ -Wall -std=c++11

test:
	./src/shuffle_test

clean:
	-rm -rf asio-1.12.2
	-rm -f src/chat_client
	-rm -f src/chat_server		
	-rm -f src/json
	-rm -f src/shuffle_test
