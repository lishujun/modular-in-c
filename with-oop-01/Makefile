CC = gcc

random-app: main.o random.o mock_random.o
	$(CC) build/main.o build/random.o build/mock_random.o  -o build/random-app

main.o: random/random.h
	mkdir -p build
	$(CC) -c main.c -o build/main.o

random.o: random/random.h
	mkdir -p build
	$(CC) -c random/random.c -o build/random.o


mock_random.o: random/random.h
	mkdir -p build
	$(CC) -c random/mock_random.c -o build/mock_random.o