CPP_FILES := $(wildcard src/*.cpp)
OBJ_FILES := $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))


bin/driver.exe: $(OBJ_FILES)
	g++ -o $@ $^

obj/%.o: src/%.cpp
	g++ -c -o $@ $<