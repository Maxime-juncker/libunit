MAKEFLAGS += --no-print-directory

FRAMEWORK = framework/
LIB = libft/

all:
	$(MAKE) -C $(FRAMEWORK)
	$(MAKE) -C $(LIB)
	$(MAKE) -C tests/
	$(MAKE) -C real-tests/
	$(MAKE) -C tests-bonus/

re:
	$(MAKE) re -C $(FRAMEWORK)
	$(MAKE) re -C $(LIB)
	$(MAKE) -C tests/
	$(MAKE) -C real-tests/
	$(MAKE) -C tests-bonus/

fclean:
	$(MAKE) fclean -C $(FRAMEWORK)
	$(MAKE) fclean -C $(LIB)
	$(MAKE) fclean -C tests/
	$(MAKE) fclean -C real-tests/
	$(MAKE) fclean -C tests-bonus/

clean:
	$(MAKE) clean -C $(FRAMEWORK)
	$(MAKE) clean -C $(LIB)
	$(MAKE) clean -C tests/
	$(MAKE) clean -C real-tests/
	$(MAKE) clean -C tests-bonus/

bonus:
	$(MAKE) bonus -C tests/
	$(MAKE) bonus -C real-tests/
	$(MAKE) bonus -C tests-bonus/

.PHONY: all re fclean clean bonus

.SILENT: