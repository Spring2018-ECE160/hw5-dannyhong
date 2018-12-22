#include <stdio.h>
#include <ctype.h>
#include <math.h>

 int getfloat(double *fp){
    
    int c;
    int st = 0;
    int sn = 1;
    double t = 0.0;
    int expsn = 1;
    int i = 0;
    while (isspace(c = getch()));
    if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.' && tolower(c) != 'e') {
        ungetch(c);
        return 0;
    }
    
    sn = (c == '-') ? -1 : 1;
    if (c == '-' || c == '+') {
        c = getch();
        if (!isdigit(c) && c != '.' && tolower(c) != 'e') {
            ungetch(c);
            return 0;
        }
    }
    
    for (*fp = 0.0; isdigit(c); c = getch())
        *fp = 10 * *fp + c - '0';
    
    if (c == '.'){
        t = 1;
        while (isdigit(c = getch())){
            *fp = 10.0 * *fp + c - '0';
            t *= 10.0;
        }
        *fp /= t;
        
    }
    if (t == 1) {  
        *fp *= sn;
        ungetch(c);
        return c;
    }
    if (*fp != 0.0)
        st = 1;   
    
    if (tolower(c) == 'e') {
        if ((c = getch()) == '-') {
            expsn = -1;
            c = getch();
        }
        for (i = 0; isdigit(c); c = getch()){
            i = 10 * i + c - '0';
	}
        if (i == 0){
            ungetch(c);
            return c;
        }
        if (st == 0)  
            *fp = 1.0;
        *fp = *fp * pow(10.0,(double)(i*expsn));
    }
    *fp *= sn;
    if (c != EOF){
        ungetch(c);
    }
    return c;
}

int main(int argc, char **argv){
    double f;
    int c;
    while ((c = getfloat(&f)) != EOF)
        printf("%f %g %d\n",f,f,c);
        return 0;
}
