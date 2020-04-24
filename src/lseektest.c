#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
	printf(1," * * * TEST 1: Valid File, Valid Offset * * *\n");
    int fd;
    int offset = 15;
	fd = open("test", O_CREATE | O_RDWR);
    printf(1,"File descriptor: %d\n",fd );
	if (lseek(fd,offset) < 0 ) {
		printf(1, "ERROR: Couldn't change file offset\n");
	}
	printf(1,"\n");
	close(fd);

	printf(1," * * * TEST 2: Valid File, Invalid Offset * * *\n");
    offset = -1;
	fd = open("test", O_CREATE | O_RDWR);
    printf(1,"File descriptor: %d\n",fd );
	if (lseek(fd,offset) < 0 ) {
		printf(1, "ERROR: Couldn't change file offset\n");
	}
	printf(1,"\n");
	close(fd);

	printf(1," * * * TEST 3: Invalid File, Valid/Invalid Offset * * *\n");
    offset = -1;
	fd = -1;
    printf(1,"File descriptor: %d\n",fd );
	if (lseek(fd,offset) < 0 ) {
		printf(1, "ERROR: Couldn't change file offset\n");
	}
	printf(1,"\n");
	close(fd);
	exit();	
}