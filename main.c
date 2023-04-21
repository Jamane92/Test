#include <stdio.h>
#include "Fonction.h"
#include "allegro.h"

int main() {
    allegro_init();
    install_keyboard();
    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0) != 0)
    {
        allegro_message("Probleme GFX Mode");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    printf("Vie vite, l'air");
    return 0;
}END_OF_MAIN()
