#include <types.h>
#include <exports.h>

extern volatile unsigned long os_time;

size_t time()
{
	//printf("os_time in time: %lu\n", os_time);

	return os_time * ((unsigned long)10);
}
