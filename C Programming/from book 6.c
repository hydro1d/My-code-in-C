#include<stdio.h>
int main ()
{
    FILE *fp;
    char filename[] = "my_file.txt";

    fp =fopen(filename,"w");

    fprintf(fp, "This is a file created by my ai!");
    fprintf(fp,"I am so happy.");

    fclose(fp);

    return 0;
}
// integer noi etake bolee file handler

/*

w means (File open. pc te thakuk or na thakuk)
r means (File open for reading. Must be on the pc)
a means (append. file agee ja khola hoise ta thakbe + new kichu add hobe)

w+ means ()
r+ means ()
a+ means()

*/
