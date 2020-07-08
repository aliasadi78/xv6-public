#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int *wtime = 0;
    int *rtime = 0;
    int rc = fork();
    if (rc < 0) {
        // fork failed; exit
        printf(1 , "fork failed\n");
        exit();
    } else if (rc == 0) {
        // child (new process)
        for(int i = 0; i<100 ; i++){
            printf(1 , "value is %d print by child" , i);
        }

    } else {
        // parent goes down this path (original process)
        int wc = waitx(wtime , rtime);
        if (wc < 0 ){
            printf(1 , "wait failed\n");
            exit();
        }
        printf(1 , "hello, I am parent of %d (pid:%d) and wtime is %d and rtime is %d\n",
               wc, (int) getpid() , *wtime , *rtime);
    }
    return 0;
}