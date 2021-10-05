#include<stdio.h>
int main()
{
int fd[2],child;
char a[10];
printf("\n enter the string to enter into the pipe:");
scanf("%s",a);
pipe(fd);
child=fork();
if(!child)
{ close(fd[10]);
write(fd[1],a,5);
wait(0);
}
else
{
close(fd[1]);
read(fd[0],a,5);
printf("\n the string retrived from pipe is %s\n",a);
}
return 0;
}
