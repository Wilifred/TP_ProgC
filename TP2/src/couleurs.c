#include <stdio.h>
#include <string.h>

struct Couleur {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
};

int main() {
    struct Couleur couleur[10];


    couleur[0].red   = 0xef;
    couleur[0].green = 0x78;
    couleur[0].blue  = 0x12;
    couleur[0].alpha = 0xff;

    couleur[1].red   = 0x10;
    couleur[1].green = 0x20;
    couleur[1].blue  = 0x30;
    couleur[1].alpha = 0xff;

    couleur[2].red   = 0x50;
    couleur[2].green = 0x22;
    couleur[2].blue  = 0x88;
    couleur[2].alpha = 0xee;

    couleur[3].red   = 0x01;
    couleur[3].green = 0x00;
    couleur[3].blue  = 0x00;
    couleur[3].alpha = 0xff;

    couleur[4].red   = 0xf0;
    couleur[4].green = 0xff;
    couleur[4].blue  = 0xff;
    couleur[4].alpha = 0xff;

    couleur[5].red   = 0xff;
    couleur[5].green = 0x80;
    couleur[5].blue  = 0x40;
    couleur[5].alpha = 0xff;

    couleur[6].red   = 0xc0;
    couleur[6].green = 0x4e;
    couleur[6].blue  = 0x5d;
    couleur[6].alpha = 0xee;

    couleur[7].red   = 0x33;
    couleur[7].green = 0x55;
    couleur[7].blue  = 0x77;
    couleur[7].alpha = 0xff;

    couleur[8].red   = 0x48;
    couleur[8].green = 0x02;
    couleur[8].blue  = 0x88;
    couleur[8].alpha = 0xee;

    couleur[9].red   = 0xaa;
    couleur[9].green = 0xbb;
    couleur[9].blue  = 0xcc;
    couleur[9].alpha = 0xff;


    for (int i = 0; i < 10; i++) {
        printf("Couleur %d\n", i+1);
        printf("Rouge : %d\n", couleur[i].red);
        printf("Vert : %d\n", couleur[i].green);
        printf("Bleu : %d\n", couleur[i].blue);
        printf("Alpha : %d\n", couleur[i].alpha);
        printf("\n");
    }
    return 0;

}
