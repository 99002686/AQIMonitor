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

INCLUDE = -Iinclude \

PROJECT_NAME = INSURANCE.out

$(PROJECT_NAME): $(SOURCE)
	gcc $(SOURCE) $(INCLUDE) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./$(PROJECT_NAME)
