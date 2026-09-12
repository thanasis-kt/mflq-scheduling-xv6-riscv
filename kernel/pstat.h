// This header contains two structs that will be used by get_pinfo syscall 
#define NPROC 64 
#include "types.h"


// Contains information about a process that is important for the user
struct ps_info {
  int pid; 
  int ppid; 
  int priority; 
  int state;
  char name[16]; // struct proc* uses the same size buffer, so we shouldn't be
                 // concerned about overflow here
  uint64 mem_size; 
};

// Contains information about every current process in our system
struct pstat {
  int n; // How many processes info contains
  struct ps_info info[NPROC]; // each element contains information about 
                              // processes
};


