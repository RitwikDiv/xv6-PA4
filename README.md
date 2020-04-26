# README

## Team 
- Ritwik Divakaruni - A20386609
- Lin Abu-Amara - A20370871

---
### How to run the tests

To run the tests simply start running xv6 on your local machine and type the commands to see the test cases. The testcases are located in extenttest.c and lseektest.c.
- extenttest (Contians both extent tests and ftat changes/tests)
- lseektest (Contains lseek tests)
View the testing document if you have any more questions

--- 
### Files Changed 

ALL CHANGES REFLECTED IN changes.txt

- Lseek functionality
    - Makefile - To add the test to system call
    - lseektest.c - Test Cases for lseek functionality
    - syscall.c - adding sys_lseek system call
    - syscall.h - adding sys_lseek #
    - sysfile.c - Adding func for sys_lseek to update the offset mentioned by user
    - user.h - Added system call definition
    - usys.S - Adding the SYSCALL(lseek)


- Extent and fstat functionality
    - Makefile - To add the tests to printstat
    - extenttest.c - Adding test cases for extent based files and fstat functionality. A new system call calle printstat is added to print the stat details
    - fnctl.h - O_EXTENT flag
    - stat.h - T_EXTENT flag for new file type and adding address field for stat.h to copy from inode
    - fs.c 
        - bmap - Adding the first fit algorithms for extent based file system along with block allocation. 
        - stati - Just copying info from inode structure to stat structure to be printed through fstat. 
    - ls.c - Simple adding another switch case to print T_EXTENT based files
    - syscall.c - Adding a new system call sys_printstat which takes in the stat struct and prints all the information about it along with a pointer and length for extent based files
    - sysfile.c - Modified sys_open to create T_EXTENT type files based on the flag being passed.
    - user.h - Added system call definition for printstat
    - usys.S - Adding the SYSCALL(printstat)
    - syscall.h - adding sys_printstat #



---
### Set up the system for xv6 use

- Install Ubuntu on windows
    - Enable the windows subsystem for linux (This removes the need for us to use VirtualBox to run a new linux subsystem)
- Check for updates on Ubuntu and download them using:

     `sudo apt update`

- Install gcc (C compiler), g++ and make on the Ubuntu terminal by using :

    `sudo apt install build-essential`

- Install qemu using:

    `sudo apt install qemu`

- Git clone the xv6 file from mit-pdos file by running:

    `git clone git://github.com/mit-pdos/xv6-public.git`

- Navigate into the xv6 folder where all the c files exist.

### Start xv6

- Compile xv6 by running: `make`
- Run the qemu emulator by running: `make qemu-nox`

### Restarting xv6 after making changes to code

- After saving the files you made changes to, run `make clean` on the main xv6 directory to delete all the .o and .h files created
- Re-compile using `make` or simply run `make qemu-nox`

---

