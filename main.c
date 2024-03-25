#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c;
    int wc=0,state=0;
    c = getchar();
    while ( c != EOF )
    {
        c = getchar();
        if((c==' ')||(c=='\t')||(c=='.')||(c==',')||(c==';'))
        {
            state=0;
        }
        else if((state==0)&&(c!= EOF))
        {
            state=1;
            ++wc;
        }
    }
    printf("%d",wc);
    return 0;
}