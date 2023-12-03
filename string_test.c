#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define LEN 50
void stream_char_test()
{
    char str[LEN];
    FILE * fout, * fin;
    char line[LEN+1];
    int c;
    fout = fopen("ejemplo.txt", "wa");
    printf("File descriptor of test_file.txt is %d\n",fileno(fout));

    fin = fdopen(0,"r");

    if(fout == (FILE *)NULL)
    {
        exit(-1);
    }
    do
    {
        char c = 0;
        fgets(str,LEN,fin);
        fputs(str,fout);
        fflush(fout);
    } while (c != EOF);

    fclose(fout);
    
}
int main(int argc, char* argv[])
{
    stream_char_test();
    /*
    int8_t a = atoi(argv[1]);
    int8_t b = atoi(argv[2]);
    int32_t suma = a + b;
    printf("Result of (%d) + (%d) = %d",a,b,suma);
    */
}