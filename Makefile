.PHONY: clean all
all: main.x
main.x: main.o KlasaBlok.o
%.x: %.o
	g++ main.o KlasaBlok.o -o sfml.app -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system
%.o: %.cpp
	g++ -c -o $@ $<
clean:
	$(RM) *.o
	$(RM) *.x
run: main.x
	./sfml.app

