#include<stdio.h>
#include<string.h>

int strend(char *s,char *t)
{
        char *a=s;
        char *b=t;

while(*s!='\0')
        s++;
while(*t!='\0')
        t++;
while(s>a && t>b && *s-- == *t--)
        ;
return(t==a && *s == *t ? 1: 0);
}

int main()

{
printf("first strend %d\n", strend("Cheeseburger", "box"));
printf("second strend %d\n", strend("baskbetball", "computer"));
printf("third strend %d\n", strend("punchline", "mouse"));
}
