all:
	make -C libft
	gcc main.c -I minilibx -lmlx -framework OpenGL -framework AppKit libft/libft.a

clean:
	rm ./a.out
	make -C libft fclean

