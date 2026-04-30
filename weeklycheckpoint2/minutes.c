#include <stdio.h>
int main(void)
{
    int mov_run_t;
    int start_t_h;
    int start_t_m;
    int end_t_h;
    int end_t_m;
    printf("Movie Length in minutes: ");
    scanf("%d",&mov_run_t);
    printf("What is the starting time: ");
    scanf("%d:%d",&start_t_h,&start_t_m);
    int min_t_h = mov_run_t/60;
    int min_t_m = mov_run_t%60;
    printf("The movie is %d hours and %d minutes long\n", min_t_h, min_t_m);

    end_t_h = mov_run_t/60+start_t_h;
    end_t_m = mov_run_t%60+start_t_m;

    printf("End Time: %d:%d \n", end_t_h, end_t_m);
}
