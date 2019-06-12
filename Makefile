all:

	g++ flightbooking.cpp -o Flight

run:
	g++ flightbooking.cpp -o flight
	

	
clean:
        rm -rf *.o flight
