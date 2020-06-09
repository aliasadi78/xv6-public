#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
                     //test programm
//int
//main(int argc,char *argv[])
//{
//    procinfo();
//    exit();
//}
int
main(void)
{
    int pid = fork();
    if (pid == 0){
        fork();
        fork();
        fork();
        int pidx = getpid();
        if (pidx % 8 == 0){
            int *ptr = (int *)malloc(123456 * sizeof(int));
            ptr++;
        }
        else if (pidx % 8 == 1){
            int *ptr = (int *)malloc(234567 * sizeof(int));
            ptr++;
        }
        else if (pidx % 8 == 2){
            int *ptr = (int *)malloc(345678 * sizeof(int));
            ptr++;
        }
        else if (pidx % 8 == 3){
            int *ptr = (int *)malloc(456789 * sizeof(int));
            ptr++;
        }
        else if (pidx % 8 == 4){
            int *ptr = (int *)malloc(567890 * sizeof(int));
            ptr++;
        }
        else if (pidx % 8 == 5){
            int *ptr = (int *)malloc(678901 * sizeof(int));
            ptr++;
        }
        else if (pidx % 8 == 6){
            int *ptr = (int *)malloc(789012 * sizeof(int));
            ptr++;
        }
        else {
            int *ptr = (int *)malloc(890123 * sizeof(int));
            ptr++;
        }
        while(1){
        }
    }
    else{
        sleep(2);
    }
}