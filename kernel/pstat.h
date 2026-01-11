#define NPROC 64 
#include "types.h"
//TODO CHANGE DEFINE

struct ps_info {
  int pid; 
  int ppid; 
  int priority; 
  int state;
  char name[16]; // TODO Change size?
  uint64 mem_size;
};

struct pstat {
  int n;
  struct ps_info info[NPROC];
};


