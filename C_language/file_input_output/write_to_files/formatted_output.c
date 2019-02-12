#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = NULL;

    fp = fopen("file2.txt","w+");

    //Make sure the fp is not NULL, because if fp is NULL. Then the file is not opened with the designated read and write priviledges
    if (fp != NULL)
    {
        fprintf(fp,"%s %s %s %s %d", "Hello", "my", "number", "is", 555);
    }

    fclose(fp);
    
    return 0;
}
//Success