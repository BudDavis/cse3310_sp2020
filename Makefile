# this is an example makefile


all: asio-1.12.2 src/chat_server src/chat_client src/json \
     src/shuffle_test src/char_count_test src/gtk_chat2

asio-1.12.2:
	tar xzf asio-1.12.2.tar.gz


# many examples on the web show the 'pkg-config' commands
# being executed during the make process.  this just
# does it once when the makefile is initially parsed
GTKLINKFLAGS=$(shell pkg-config --libs gtk+-2.0)
GTKCOMPILEFLAGS=$(shell pkg-config --cflags gtk+-2.0)


CXXFLAGS+= -DASIO_STANDALONE -Wall -O0 -g -std=c++11
CPPFLAGS+=-I./include -I./asio-1.12.2/include -I./src ${GTKCOMPILEFLAGS}
LDLIBS+= -lpthread ${GTKLINKFLAGS}

src/shuffle_test:src/shuffle_test.cpp src/cards.cpp
	${CXX} -o $@ $^ -Wall -std=c++11

src/char_count_test:src/char_count_test.cpp src/char_count.c
	${CXX} -o $@ $^ -Wall -std=c++11

test:
	./src/shuffle_test

clean:
	-rm -rf asio-1.12.2
	-rm -f src/chat_client
	-rm -f src/chat_server		
	-rm -f src/json
	-rm -f src/shuffle_test
	-rm -f src/char_count_test
	-rm -f src/gtk_chat2
