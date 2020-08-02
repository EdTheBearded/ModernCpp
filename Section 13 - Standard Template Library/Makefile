CC:=g++
CPPFLAGS:=-std=c++14

DEPS = Contacts.h Book.h

ODIR = obj
_OBJ = Contacts.o Book.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) $(CPPFLAGS) -c $< -o $@

main: $(OBJ)
	$(CC) $(CPPFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o main