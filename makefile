CC ?= gcc 

APP_NAME_STRING = string_test
APP_NAME_SEEK = string_binary_seek

OBJ_FILES_SEEK = string_binary_seek.o
OBJ_FILES_STRING = string_test.o
LIBS = .

all: $(APP_NAME_STRING) $(APP_NAME_SEEK)

$(APP_NAME_STRING): $(OBJ_FILES_STRING)
	$(CC) -o $@ $^

$(APP_NAME_SEEK): $(OBJ_FILES_SEEK)
	$(CC) -o $@ $^
%.o: %.c
	$(CC) -o $@ -c $^ -g


clean:
	rm *.o $(APP_NAME) $(APP_NAME_SEEK)