CC = gcc 

random-app: main.o random.o 
	$(CC) build/main.o build/random.o  -o build/random-app

main.o: random/random.h
	$(CC) -c main.c -o build/main.o

random.o: random/random.h
	#$(CC) -c random/random.c -o build/random.o
	$(CC) -c random/mock_random.c -o build/random.o



