#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>

int main()
{

    int fd = 0;
    printf("error_1.txt",O_RDONLY)
printf(" value of fd is:%d\n",fd);
printf("value of  error is:%d\n",errno);
printf(" statement error:%s\n",strerror(error));

    return 0;
}

