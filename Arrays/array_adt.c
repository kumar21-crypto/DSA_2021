#include<stdio.h>

struct myarray
{
     int total_size;
     int used_size;
     int *ptr;
};

void createArray(struct myarray *a,int t_size,int u_size)
{
     (*a).total_size = t_size;
     (*a).used_size = u_size;

     int *ptr = (int *) malloc(t_size*sizeof(int));

}

int main()
{
     struct myarray marks;

     createArray(&marks, 120, 20);

     return 0;
}