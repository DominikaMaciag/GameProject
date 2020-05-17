.PHONY: clean all
all: main.x
main.x: main.cpp
%.x: %.o
	g++ main.o -o sfml.app -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system
%.o: %.cpp
	g++ -c main.cpp 
clean:
	$(RM) *.o
	$(RM) *.x
run: main.x
	./sfml.app
