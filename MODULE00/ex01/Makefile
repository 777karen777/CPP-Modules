# NAME	= phoneBook

# # SRCS	=	$(wildcard ./*.cpp)
# HEADERS = $(wildcard *.hpp) $(wildcard *.tpp)
# CPPSRCS	= main.cpp PhoneBook.cpp ContactBook.cpp
# CPP		= c++
# CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
# RM		= rm -rf

# %.o: %.cpp $(HEADERS)
# 	$(CPP) $(CPPFLAGS) -c $< -o $@
# #Colors:
# GREEN		=	\e[92;5;118m
# YELLOW		=	\e[93;5;226m
# GRAY		=	\e[33;2;37m
# RESET		=	\e[0m
# CURSIVE		=	\e[33;3m

# .PHONY: all clean re

# all: $(NAME)

# $(NAME): 
# 	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
# 	@ $(CPP) $(CPPFLAGS) $(CPPSRCS) -o $(NAME)
# 	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

# clean:
# 	@$(RM) $(NAME)
# 	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

# fclean:
# 	@$(RM) $(NAME)
# 	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

# re: clean all


NAME	=	phoneBook

CPP		=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS	=	$(wildcard ./*.cpp)


# HEADERS = $(wildcard *.hpp) $(wildcard *.tpp)

RMIF	=	rm -f

OBJ		=	${SRCS:.cpp=.o}

%.o: %.cpp # $(HEADERS)
	$(CPP) $(CPPFLAGS) -c $< -o $@

all:		${NAME}

${NAME}:	${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
		   	${RMIF} ${OBJ}

fclean:		clean
			${RMIF} ${NAME}

re:			fclean all

.PHONY:		all clean fclean rm