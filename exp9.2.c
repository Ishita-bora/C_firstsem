#include <stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("myfile.txt" , "r");
    if(fp == NULL)
    {
        printf("file does not exist.");
        return 1;
    }
    
}