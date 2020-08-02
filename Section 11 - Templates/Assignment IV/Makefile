CC:=g++
CPPFLAGS:=-std=c++11

main: main.cpp Contact.h Employee.h
	$(CC) $(CPPFLAGS) $< -o $@

.PHONY: clean

clean:
	rm main