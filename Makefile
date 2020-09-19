SOURCE = source/main.c \
source/insurance.c

INCLUDE = -Iinclude \

PROJECT_NAME = INSURANCE.out

$(PROJECT_NAME): $(SOURCE)
	gcc $(SOURCE) $(INCLUDE) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./$(PROJECT_NAME)