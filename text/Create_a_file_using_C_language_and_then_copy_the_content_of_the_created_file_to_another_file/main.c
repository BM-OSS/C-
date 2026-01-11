#include <stdio.h>
#include <stdlib.h>
void filecopy(FILE *fpin,FILE *fpout)
{
    char ch;
    ch=getc(fpin);
    while(!feof(fpin))
    {
        putc(ch,fpout);
        ch=getc(fpin);
    }
}
int main()
{
    FILE *fpin, *fpout;
    char ch;
    fpin=fopen("file_a.dat","r");
    fpout=fopen("file_b.dat","w");
    filecopy(fpin,fpout);
    fclose(fpin);
}