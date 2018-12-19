#include <stdio.h>
#include <string.h>
#define SIZE 100

char *my_strncpy(char *s, char *t, unsigned int n)
{
        int i;
        int len = strlen(t);
        for(i = 0; i < n; i++)
        {
                if(i < len)
                        s[i] = t[i];
                else
                        s[i] = 0;
        }
        s[i] = 0;
        return s;
}

char *my_strncat(char *s, char *t, unsigned int n)
{       int i;
        int len = strlen(t);
        int slen = strlen(s);
        for(i = 0; i < n; i++)
        {
                if(i < len)
                        s[slen + i] = t[i];
                else
                        break;
        }
        s[slen + i] = '\0';
        return s;
}

int my_strncmp(char *s, char *t, unsigned int n)
{       int i;
        for(int i = 0; i < n; i++){
                if(s[i] != t[i] || s[i] == 0 || t[i] == 0)
                        return s[i] - t[i];
        }
        return 0;
}
int main()
{
        char s[SIZE] = "Danny", t[SIZE] = "Hong";
        char *ps =  "Danny", *pt = "Hong";
        printf("my_strncmp(%s, %s, %d) = %d\n", ps, pt, 2, my_strncmp(s, t, 6));
        printf("my_strncat(%s, %s, %d) = %s\n", ps, pt, 3,  my_strncat(s, t, 7));
        printf("my_strncpy(%s, %s, %d) = %s\n", ps, pt, 4,  my_strncpy(s, t, 8));
        return 0;
}

