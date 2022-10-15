.PHONY: run target create_Make

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