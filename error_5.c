#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>

int main()
{

    int fd = 0;
   fd = open("marvellous.txt",O_RDONLY):
   if(error !=0) 
   {
    switch(error){
        case ENOENT:
        printf(" there is no such file . create and open file\n")
        break;
        case EACCES:
        printf(" unabal to access as there is no permisin .\n ")
        break;
    }
   }
   printf("value of  error is:%d\n",errno);
    printf(" statement error:%s\n",strerror(error));
    return 0;
}

