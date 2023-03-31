COLLEEN					:= Colleen

GRACE						:= Grace

CC							:= gcc

CFLAGS					:= -Wall -Wextra -Werror

SRCS_COLLEEN		:= Colleen.c

SRCS_GRACE			:= Grace.c

TMP_COLLEEN			:= tmp_Colleen

GRACE_KID				:= Grace_kid.c

RM							:= rm -rf

.PHONY: all
all: $(COLLEEN) $(GRACE)

.PHONY: colleen
colleen: $(COLLEEN) $(GRACE)

$(COLLEEN): $(SRCS_COLLEEN)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: grace
grace: $(GRACE)

$(GRACE): $(SRCS_GRACE)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: test_colleen
test_colleen: colleen
	./Colleen > $(TMP); diff $(TMP_COLLEEN) $(SRCS_COLLEEN)

.PHONY: test_grace
test_grace: grace
	./Grace; diff $(SRCS_GRACE) $(GRACE_KID)

.PHONY: clean
clean:
	$(RM) $(TMP_COLLEEN)
	$(RM) $(GRACE_KID)

.PHONY: fclean
fclean: clean
	$(RM) $(COLLEEN)
	$(RM) $(GRACE)

.PHONY: re
re: fclean all
