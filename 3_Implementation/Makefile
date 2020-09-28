# Name of the project
PROJECT_NAME = INSURANCE

# Output directory
BUILD = build

# All source code files
SOURCE = source/main.c \
source/insurance.c \
source/alcohol.c \
source/diet.c \
source/exercise.c \
source/smoke.c \
source/accident.c \
source/drugs.c \
source/healthIssues.c \
source/insomniac.c \
source/monthPayment.c \
source/policy.c \
source/stress.c

# All test source files
TEST_SRC = test/testPolicy.c \
unity/unity.c \
source/alcohol.c \
source/diet.c \
source/exercise.c \
source/accident.c \
source/monthPayment.c \
source/policy.c \

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinclude \
-Iunity


PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Default target built
$(PROJECT_NAME):all

.PHONY: run clean test doc all

all: $(SOURCE) $(BUILD)
	gcc $(SOURCE) $(INC) -o $(PROJECT_OUTPUT) 

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 
	./$(TEST_OUTPUT)



# Create new build folder if not present
$(BUILD):
	mkdir build
