#include <libunit.h>

int	check_test(t_test *test, int code)
{
	// check process exit code
	if (WTERMSIG(code) == SIGSEGV)
	{
		ft_printf("%s[%s]:[%s]:[SIGSEGV]\n%s", RED, test->function_name, test->test_name, RESET);
		return (0);
	}
	if (WTERMSIG(code) == SIGBUS)
	{
		ft_printf("%s[%s]:[%s]:[SIGBUS]\n%s", RED, test->function_name, test->test_name, RESET);
		return (0);
	}
	if (WEXITSTATUS(code) == 0)
	{
		ft_printf("%s[%s]:[%s]:[OK]\n%s", GREEN, test->function_name, test->test_name, RESET);
		return (1);
	}
	//* 255 = -1 (unsigned)
	ft_printf("%s[%s]:[%s]:[KO]\n%s", RED, test->function_name, test->test_name, RESET);
	return (0);
}

void	print_result(int test_pass, int total)
{
	ft_printf("\ntests results: %d/%d ", test_pass, total);
	if (test_pass < total)
		ft_printf("%s[KO]%s\n", RED, RESET);
	else
		ft_printf("%s[OK]%s\n", GREEN, RESET);
}

int	run_test(t_list *tests)
{
	int	total;
	int	test_pass;
	int	code;
	int	pid;

	total = ft_lstsize(tests);
	test_pass = 0;
	while (tests != NULL)
	{
		pid = fork();
		t_test *test;

		test = (t_test*)(tests->content);
		if (pid == 0)
		{
			exit(test->f());
		}
		wait(&code);
		test_pass += check_test(test, code);
		tests = tests->next;
	}
	print_result(test_pass, total);
	return (0);
}