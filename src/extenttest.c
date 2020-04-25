#include "types.h"
#include "user.h"
#include "fcntl.h"
#include "stat.h"
#include "fs.h"

int main(int argc, char *argv[]){
	printf(1, "\n*** TEST 1: Checking READ/WRITE existing file without O_EXTENT flags *** \n");
	int fd1; 
	fd1 = open("README", O_RDWR);
	struct stat st;
	fstat(fd1,&st);
	printstat(&st);
	close(fd1);
	printf(1,"\n");
	// Shoudl work successfully since the absense of O_EXTENT leads to creation of T_FILE
	
	printf(1, "\n*** TEST 2: Checking READ/WRITE with O_EXTENT flags *** \n");
	int fd2; 
	fd2 = open("extenttest2", O_CREATE | O_RDWR | O_EXTENT);
	char string2[] = "TEST 2: Checking READ/WRITE without O_EXTENT flags";
	write(fd2, string2, sizeof(string2));
	struct stat st2;
	fstat(fd2,&st2);
	printstat(&st2);
	close(fd2);
	printf(1,"\n");

	printf(1, "\n*** TEST 3: Checking lseek functionality with O_EXTENT flags *** \n");
	int fd3; 
	fd3 = open("extenttest3", O_CREATE | O_RDWR | O_EXTENT);
	lseek(fd3, 200);
	char string3[] = "TEST 3: Checking lseek functionality with O_EXTENT flags";
	write(fd3, string3, sizeof(string3));
	struct stat st3;
	fstat(fd3,&st3);
	printstat(&st3);
	close(fd3);
	printf(1,"\n");
	// We can see that the size of the file is 257 as compared to 57 because we gave an offset of 200

	exit();
}