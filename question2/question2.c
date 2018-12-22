#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcat1(char *s, char *t){

while(*s!='\0'){
        s++;
        }
s--;
while((*s=*t)!='\0'){
        s++;
        t++;
        }
}

int getLine(char s[],int size){
int a;
int b;
for(int a=0;a<size-1 && b!='\n' ;++a)
        s[a] = b;

if(b == '\n'){
        s[a] = b;
        ++a;
}
s[a] = '\0';
return a;

}

int main()

{

char a[]="Big";
char b[]="Boy";
char c[]="High";
char d[]="School";
char e[]="Photo";
char f[]="Booth";

getLine(b,2);
strcat1(a,b);
printf("%s\n", a);
getLine(d,5);
strcat1(c,d);
printf("%s\n", c);
getLine(f,4);
strcat1(e,f);
printf("%s\n", e);
return 0;
}
