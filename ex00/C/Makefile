NAME						:= Colleen

CC							:= gcc

CFLAGS					:= -Wall -Wextra -Werror

SRCSDIR					:= srcs/

OBJSDIR					:= objs/

SRCS						:= Colleen.c

TMP							:= tmp_Colleen

VPATH						:= $(SRCSDIR) # set the paths for make to search source files

RM							:= rm -rf

.PHONY: all
all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: test
test: all
	./Colleen > $(TMP); diff $(TMP) $(SRCS)

.PHONY: clean
clean:
	$(RM) $(TMP)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all
