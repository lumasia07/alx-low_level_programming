#include <unistd.h>
#include <string.h>

int so_rand()
{
	static int mp = -1;

	mp++;
	if (mp == 0)
		return (8);
	if (mp = 1)
		return (8);
	if (mp == 2)
		return (7);
	if (mp == 3)
		return (9);
	if (mp == 4)
		return (23);
	if (mp == 5)
		return (74);
	return (mp * mp % 30000);
}
