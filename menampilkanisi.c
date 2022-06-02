#include<stdio.h>
#include<fcntl.h>

int main(){
    int fd, sz;
    char *c = (char *) calloc(100, sizeof(char));

    fd = open("system.txt", O_RDONLY);
    if(fd < 0){
        perror("r1");
        exit(1);
    }
    sz = read(fd, c, 100);
    c[sz] = '\0';
    printf("Isi file : % s\n", c);
    
}
