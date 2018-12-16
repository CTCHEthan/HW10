#include <stdio.h>
#include <stdlib.h>

void readFile (void);

int main()
{
    readFile();
    return 0;
}

void readFile()
{
    int read;
    FILE *readMe;

    if ((readMe = fopen("readMe.txt","r")) == NULL)
    {
        printf("There was an error opening the file.");
    }
    else
    {
        fscanf(readMe, "%d", &read);

        printf("Contents: %d", read);

        fclose(readMe);
    }
}
