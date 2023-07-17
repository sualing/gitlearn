#include <sys/types.h>
#include <sys/time.h>
#include <unistd.h> 
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "filerw.h"

int main(int argc ,char *argv[])
{
	printf("test demo\n");
	filerw();
	return 0;
}
