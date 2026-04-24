#include <stdio.h>

int main() {
    int base[5], limit[5];
    int seg, off;

    // input segment table from figure
    for(int i=0;i<5;i++)
        scanf("%d %d",&base[i],&limit[i]);

    for(int i=0;i<3;i++) {
        scanf("%d %d",&seg,&off);

        if(off < limit[seg])
            printf("%d\n", base[seg] + off);
        else
            printf("Invalid\n");
    }

    return 0;
}