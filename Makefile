CC= g++
TARGET=a.out
CPPFLAGS=-Wall
SOURCE_DIR=src
HEADER_DIR=include
RESOULT:=${wildcard ${SOURCE_DIR}/main.cpp}
SOURCE:=${wildcard ${SOURCE_DIR}/*.cpp}
HEADER:=${wildcard ${HEADER_DIR}/*.h}
OBJECTS:=$(SOURCE:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $(LDFLAGS) $(OBJECTS) $(LIBS)
%.o: %.cpp %.h
	$(CC) -o $@ -c $< -I$(HEADER_DIR) $(CPPFLAGS)    
.PHONY: clean
clean:
	rm -f $(OBJECTS) $(TARGET)
