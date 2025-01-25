#ifndef STRLEN_TESTS_H
# define STRLEN_TESTS_H

# include <libunit.h>

// ft_strlen.c
size_t	ft_strlen_test(char *s);

// launcher.c
int		strlen_launch(void);

// tests:
int		NULL_test(void);
int		basic_test(void);

#endif
