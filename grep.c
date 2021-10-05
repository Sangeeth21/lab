#include<stdio.h>
#include<string.h>
int main(int argv,char * args[])
{
FILE * f;
char str[100];
char c;
int i,flag,j,m,k;
char arg[]="HI";
char temp[30];
if(argv<3)
{
printf("usage grep<s> <val.txt>\n");
return;
}
f=fopen(args[2],"r");
while(!feof(f))
{
i=0;
while(1)
{
fscanf(f,"%c",&c);
if(feof(f))
{
str[i++]='\0';
break;
}
if(c=='\n')
{
str[i++]='\0';
break;
}
str[i++]=c;
}
if(strlen(str)>=strlen(args[1]))
for(k=0;k<=strlen(str)-strlen(args[1]);k++)
{
for(m=0;m<strlen(args[1]);m++)
temp[m]=str[k+m];
temp[m]='\0';
if(strcmp(temp,args[1])==0)
{
printf("%s\n",str);
break;
}
}
}
return 0;
}
