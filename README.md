# README

## Team 
- Ritwik Divakaruni - A20386609
- Lin Abu-Amara - A20370871

---
### How to run the tests


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

