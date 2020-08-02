CC:=g++
CPPFLAGS:=-std=c++14

main: main.cpp FunctionObjects.h
	$(CC) $(CPPFLAGS) $< -o $@

.PHONY: clean

clean:
	rm main