#include <stdio.h>
#include "colored_text.h"

int main() {
    printf(BLK "Black text\n" RESET);
    printf(RED "Red text\n" RESET);
    printf(GRN "Green text\n" RESET);
    printf(YEL "Yellow text\n" RESET);
    printf(BLU "Blue text\n" RESET);
    printf(MAG "Magenta text\n" RESET);
    printf(CYN "Cyan text\n" RESET);
    printf(WHT "White text\n" RESET);

    printf(BBLK "Bright Black text\n" RESET);
    printf(BRED "Bright Red text\n" RESET);
    printf(BGRN "Bright Green text\n" RESET);
    printf(BYEL "Bright Yellow text\n" RESET);
    printf(BBLU "Bright Blue text\n" RESET);
    printf(BMAG "Bright Magenta text\n" RESET);
    printf(BCYN "Bright Cyan text\n" RESET);
    printf(BWHT "Bright White text\n" RESET);

    return 0;
}
