CC:=g++
CPPFLAGS:=-std=c++11

main: main.cpp PrettyPrinter.h
	$(CC) $(CPPFLAGS) $< -o $@

.PHONY: clean

clean:
	rm main