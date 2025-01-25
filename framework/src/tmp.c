#include <libunit.h>
#include <stdint.h>

int	test_OK(void)
{
	return(0);
}

int	test_KO(void)
{
	return(-1);
}

int	test_segv(void)
{
	int	*tmp = NULL;

	tmp[1] = 0;
	return(0);
}

#include <fcntl.h>
#include <sys/mman.h>
int	test_bus_err(void)
{
    int fd;
    int *map;
    int size = sizeof(int);
    char *name = "/a";

    shm_unlink(name);
    fd = shm_open(name, O_RDWR | O_CREAT, (mode_t)0600);
    /* THIS is the cause of the problem. */
    /*ftruncate(fd, size);*/
    map = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    /* This is what generates the SIGBUS. */
    *map = 0;
	exit (0);
}

