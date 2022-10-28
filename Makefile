GCCFLAG=-Wall -Wextra -Werror

all: 
	gcc $(GCCFLAG) -c *.c
	ar rc libft.a *.o
clean:
	@/bin/rm *.o

fclean: clean
	@/bin/rm -f *.gch
	@/bin/rm -f *.gch libft.a

re: fclean all
