MAKEFLAGS += --no-print-directory

FRAMEWORK = framework/
LIB = libft/

all:
	$(MAKE) -C $(FRAMEWORK)
	$(MAKE) -C $(LIB)
	$(MAKE) -C tests/
	$(MAKE) -C real-tests/

re:
	$(MAKE) re -C $(FRAMEWORK)
	$(MAKE) re -C $(LIB)
	$(MAKE) -C tests/
	$(MAKE) -C real-tests/

fclean:
	$(MAKE) fclean -C $(FRAMEWORK)
	$(MAKE) fclean -C $(LIB)
	$(MAKE) fclean -C tests/
	$(MAKE) fclean -C real-tests/

clean:
	$(MAKE) fclean -C $(FRAMEWORK)
	$(MAKE) fclean -C $(LIB)
	$(MAKE) fclean -C tests/
	$(MAKE) fclean -C real-tests/

.PHONY: all re fclean clean

.SILENT: