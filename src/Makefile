CXX = g++
INCDIR = ../include
CXXFLAGS = -Wall -I $(INCDIR)
DEPS = Metric.h Imperial.h Temperature.h Conversions.h
OBJ = main.o Metric.o Imperial.o Temperature.o 

%.o: %.cpp $(DEPS)
	$(CXX) -o $@ $< $(CXXFLAGS)

convertit: $(OBJ)
	g++ -o $@ $^ $(CXXFLAGS)

clean:
	rm -f convertit *.o
