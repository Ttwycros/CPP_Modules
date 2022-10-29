SRC =	ex00 \
		ex01 \
		ex02 \

.PHONY :	all clean re fclean run target create_Make create_main


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

fold_make :

# using "fold=n", creates 1..n folders, starting with ex00.
ifdef fold

	number=0 ; while [[ $$number -le $(fold) ]] ; do \
		mkdir ex0$$number ; \
		echo ex0$$number ; \
		((number = number + 1)) ; \
	done
	@echo 'toto is defined' $(fold)
else
	@echo 'no toto around'
endif

create_Make:
	find . -type d -empty -exec touch {}/Makefile \;

create_main:
	find . -type d -exec touch {}/main.cpp \;