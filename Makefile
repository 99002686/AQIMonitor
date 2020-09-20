# Project Name
PROJECT_NAME = INSURANCE

# Source Initiation
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

# Include path Initiation
INCLUDE = -Iinclude \

# Output variable Initiation 
PROJECT_OUTPUT = $(PROJECT_NAME).out

# make 
$(PROJECT_NAME): $(SOURCE)
	gcc $(SOURCE) $(INCLUDE) -o $(PROJECT_OUTPUT)

# make run
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)
