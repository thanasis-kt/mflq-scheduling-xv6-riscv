#include "kernel/pstat.h"
#include "user/user.h"


int main(int argc,char *argv[]) {
  struct pstat stat;
  printf("PS PS %p\n",&stat);
  // Using get_pinfo syscall
  if (getpinfo(&stat) < 0) {
    printf("getpinfo failed\n");
    return -1;
  }
  printf("STAT IS %d\n",stat.n);

  printf("PID\tPPID\tPRIOR\tSTATE\tNAME\tMEMORY SIZE\n");
  for (int i = 0; i < stat.n; i++) {
    //TODO STATE TO STRING
    printf("%d\t%d\t%d\t%d\t%s\t%ld\n",stat.info[i].pid,stat.info[i].ppid,stat.info[i].priority,stat.info[i].state,stat.info[i].name,stat.info[i].mem_size);

  }


}
