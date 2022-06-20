
all:
	mkdir -p build
	g++ -std=c++20 src/kchq.cpp src/cli/cli.h src/cli/cli.cpp src/datastore/datastore.h src/datastore/datastore.cpp -o build/kchq

clean:
	rm build/kchq