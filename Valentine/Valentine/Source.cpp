#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_primitives.h>

int main() {


	al_init();
	al_init_primitives_addon();
	al_init_font_addon();

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_FONT *font = al_create_builtin_font();

	display = al_create_display(640, 480);

	al_clear_to_color(al_map_rgb(10, 50, 70));

	al_draw_filled_rectangle(140.0, 70.0, 480.0, 400.0, al_map_rgb(200, 20, 25));
	al_draw_filled_rectangle(200.0, 110.0, 420.0, 350.0, al_map_rgb(255, 172, 163));
	al_draw_text(font, al_map_rgb(255, 255, 255), 310, 180, ALLEGRO_ALIGN_CENTER, "HAPPY VALENTINES DAY");
	al_draw_text(font, al_map_rgb(255 ,255,	255), 310, 200, ALLEGRO_ALIGN_CENTER, "I WOVE YOU MAMMA MO");
	al_draw_text(font, al_map_rgb(255, 255, 255), 310, 220, ALLEGRO_ALIGN_CENTER, "YOU'RE THE BEST TEACHER EVER");
	
	al_flip_display();

	al_rest(20.0);

}