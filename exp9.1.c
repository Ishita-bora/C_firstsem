#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("myfile.txt" , "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "welcome to this new file.");
    fclose(fp);
    return 0;

}