#include <zip/zip.h>
#include <stdio.h>

int main(){
    struct zip_t *zip = zip_open("foo.zip",
    ZIP_DEFAULT_COMPRESSION_LEVEL, 'w');
    zip_entry_open(zip, "foo-1.txt");
    {
        const char *buf = "some data here ... \0";
        zip_entry_write(zip, buf, strlen(buf));
    };
    zip_entry_close(zip);
    zip_entry_open(zip, "foo-2.txt");
    zip_entry_close(zip);
    zip_close(zip);
    printf("selesai \n");
    return 0;
}   