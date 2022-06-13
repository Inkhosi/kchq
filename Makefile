
all:
	mkdir -p build
	g++ src/kchq.cpp -o build/kchq

clean:
	rm build/kchq