build: converter

converter: main.o Controller.o TemperatureModel.o Observer.o Observable.o ConsoleView.o
	g++ main.o Controller.o TemperatureModel.o Observer.o Observable.o ConsoleView.o -o converter

main.o: ./src/main.cpp
	g++ -c ./src/main.cpp

ConsoleView.o: ./src/ConsoleView.cpp
	g++ -c ./src/ConsoleView.cpp

Controller.o: ./src/Controller.cpp
	g++ -c ./src/Controller.cpp

Observer.o: ./src/Observer.cpp
	g++ -c ./src/Observer.cpp

Observable.o: ./src/Observable.cpp
	g++ -c ./src/Observable.cpp

TemperatureModel.o: ./src/TemperatureModel.cpp
	g++ -c ./src/TemperatureModel.cpp

clean:
	rm -rf *.o converter

test:
	echo "PASS"