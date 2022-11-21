# E89 Pedagogical & Technical Lab
# project:     template C repo
# created on:  2022-09-14 - 16:36 +0200
# 1st author:  Élise C. Philippe - eriizu
# description: Building the project

NAME    =       ligne

SRCS    =       src/set_line.c         \
                src/test_line.c         \
                src/set_pixel.c         \
                src/get_ratio.c         \
                src/get_value.c

OBJS    =       $(SRCS:.c=.o)

CFLAGS  +=-Iinclude -Wall -Wextra

LDFLAGS += -llapin -lsfml-graphics -lsfml-window -lsfml-system -lstdc++ -lm

RM      =       rm -vf

CC      :=      gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
