#define T_DIR  1   // Directory
#define T_FILE 2   // File
#define T_DEV  3   // Device
// Add an O_EXTENT flag to the open() system call 
// that will create an extent based file.
// We need to add a new flag for a new type of file for extent
#define T_EXTENT 4

struct stat {
  short type;  // Type of file
  int dev;     // File system's disk device
  uint ino;    // Inode number
  short nlink; // Number of links to file
  uint size;   // Size of file in bytes
  uint addrs[13];
};
