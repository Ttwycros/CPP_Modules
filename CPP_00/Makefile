SRC =	ex00 \
		ex01 \
		ex02 \

.PHONY :	all clean re fclean

all:
	for dir in $(SRC); do \
        $(MAKE) -C $$dir; \
    done

clean:
	for dir in $(SRC); do \
        $(MAKE) clean -C $$dir; \
    done

fclean:
	for dir in $(SRC); do \
        $(MAKE) fclean -C $$dir; \
    done

re: fclean all