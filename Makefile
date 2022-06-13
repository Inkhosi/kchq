
all:
	mkdir -p build
	g++ src/kchq.cpp src/cli/cli.h src/cli/cli.cpp -o build/kchq

clean:
	rm build/kchq