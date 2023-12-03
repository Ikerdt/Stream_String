#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define LEN 50
void stream_char_test()
{
    char str[LEN];
    FILE * fout, * fin;
    char line[LEN+1];
    fout = fopen("ejemplo.txt", "r");
    printf("File descriptor of test_file.txt is %d\n",fileno(fout));

    fseek(fout,0,SEEK_END);
    fseek(fout,-2,SEEK_CUR);
    uint32_t a = 0;
    char c = 0;
    if(fout == (FILE *)NULL)
    {
        exit(-1);
    }
    do
    {
        fread(&c,1,1,fout);
        printf("%c",c);
        if(a !=0)
        {
            break;
        }
        

        a = fseek(fout,-2,SEEK_CUR);


    } while (1);

    printf("finish");
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