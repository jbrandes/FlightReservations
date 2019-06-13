all:

	g++ flightbooking.cpp -o Make
	
run:
	g++ flightbooking.cpp -o Make
	
clean: 
	rm flightbooking.cpp

	g++ flightbooking.cpp -o build/create-reservation

execute:
	build/create-reservation

run: all execute

clean:
	rm build/*

