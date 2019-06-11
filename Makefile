all:
	g++ flightbooking.cpp -o build/create-reservation

execute:
	build/create-reservation

run: all execute

clean:
	rm build/*