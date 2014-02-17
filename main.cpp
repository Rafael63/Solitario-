/*This source code copyrighted by Lazy Foo' Productions (2004-2013)
and may not be redistributed without written permission.*/

//The headers
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <string>
#include "Ordenamiento.h"
//Screen attributes
const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 1000  ;
const int SCREEN_BPP = 32;

//The surfaces
SDL_Surface*Lista1[1];
SDL_Surface*Lista2[2];
SDL_Surface*Lista3[3];
SDL_Surface*Lista4[4];
SDL_Surface*Lista5[5];
SDL_Surface*Lista6[6];
SDL_Surface*Lista7[7];
SDL_Surface*ListaMaso[23];
SDL_Surface* Vacio = NULL;
SDL_Surface* Vacio1 = NULL;
SDL_Surface* Vacio2 = NULL;
SDL_Surface* Vacio3 = NULL;
SDL_Surface* Vacio4 = NULL;
SDL_Surface *background = NULL;
SDL_Surface *foo = NULL;
SDL_Surface *screen = NULL;
Ordenamiento JuegoComienza;


//The event structure
SDL_Event event;

 static SDL_Surface *load_image( std::string filename )
{
    //The image that's loaded
    SDL_Surface* loadedImage = NULL;

    //The optimized image that will be used
    SDL_Surface* optimizedImage = NULL;

    //Load the image
    loadedImage = IMG_Load( filename.c_str() );

    //If the image loaded
    if( loadedImage != NULL )
    {
        //Create an optimized image
        optimizedImage = SDL_DisplayFormat( loadedImage );

        //Free the old image
        SDL_FreeSurface( loadedImage );

        //If the image was optimized just fine
        if( optimizedImage != NULL )
        {
            //Map the color key
            Uint32 colorkey = SDL_MapRGB( optimizedImage->format, 0, 0xFF, 0xFF );

            //Set all pixels of color R 0, G 0xFF, B 0xFF to be transparent
            SDL_SetColorKey( optimizedImage, SDL_SRCCOLORKEY, colorkey );
        }
    }

    //Return the optimized image
    return optimizedImage;
}

void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination )
{
    //Temporary rectangle to hold the offsets
    SDL_Rect offset;

    //Get the offsets
    offset.x = x;
    offset.y = y;

    //Blit the surface
    SDL_BlitSurface( source, NULL, destination, &offset );
}


bool init()
{
    //Initialize all SDL subsystems
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return 1;
    }

    //Set up the screen
    screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );

    //If there was an error in setting up the screen
    if( screen == NULL )
    {
        return 1;
    }

    //Set the window caption
    SDL_WM_SetCaption( "Solitario \Profesional\"", NULL );

    //If everything initialized fine
    return true;
}

bool load_files()
{
    //Load the background image

       JuegoComienza.primera.recuperar(0)->carta->setEstado(true);
       JuegoComienza.primera.recuperar(0)->carta->ValidacionDelado();
       JuegoComienza.segunda.recuperar(1)->carta->setEstado(true);
       JuegoComienza.segunda.recuperar(1)->carta->ValidacionDelado();
       JuegoComienza.tercera.recuperar(2)->carta->setEstado(true);
       JuegoComienza.tercera.recuperar(2)->carta->ValidacionDelado();
       JuegoComienza.cuarto.recuperar(3)->carta->setEstado(true);
       JuegoComienza.cuarto.recuperar(3)->carta->ValidacionDelado();
       JuegoComienza.quinta.recuperar(4)->carta->setEstado(true);
       JuegoComienza.quinta.recuperar(4)->carta->ValidacionDelado();
       JuegoComienza.sexta.recuperar(5)->carta->setEstado(true);
       JuegoComienza.sexta.recuperar(5)->carta->ValidacionDelado();
      JuegoComienza.septima.recuperar(6)->carta->setEstado(true);
       JuegoComienza.septima.recuperar(6)->carta->ValidacionDelado();
      for(int i = 0; i<1; i++){


          Lista1[i]=JuegoComienza.primera.recuperar(i)->carta->image;
       }
        for(int i = 0; i<2; i++){


            Lista2[i]=JuegoComienza.segunda.recuperar(i)->carta->image;
       }
        for(int i = 0; i<3; i++){


           Lista3[i]=JuegoComienza.tercera.recuperar(i)->carta->image;
       }
       for(int i = 0; i<4; i++){



          Lista4[i]=JuegoComienza.cuarto.recuperar(i)->carta->image;
       }
       for(int i = 0; i<5; i++){



          Lista5[i]=JuegoComienza.quinta.recuperar(i)->carta->image;
       }
       for(int i = 0; i<6; i++){



          Lista6[i]=JuegoComienza.sexta.recuperar(i)->carta->image;
       }
       for(int i = 0; i<7; i++){

          ;
          Lista7[i]=JuegoComienza.septima.recuperar(i)->carta->image;
       }
        for(int i = 0; i<23; i++){

          ListaMaso[i]=JuegoComienza.mazo.recuperar(i)->carta->image;
       }
     background = load_image( "background.png" );
       Vacio = load_image("verde.png");
       Vacio1 = load_image("verde.png");
       Vacio2 = load_image("verde.png");
       Vacio3 = load_image("verde.png");
       Vacio4 = load_image("verde.png");
    //If the background didn't load
    if( background == NULL )
    {
        return false;
    }

    //Load the stick figure
    foo = load_image( "foo.png" );

    //If the stick figure didn't load
    if( foo == NULL )
    {
        return false;
    }

    return true;
}

void clean_up()
{
    //Free the surfaces
    SDL_FreeSurface( background );
    SDL_FreeSurface( foo );
    SDL_FreeSurface(Vacio);
    SDL_FreeSurface(Vacio1);
    SDL_FreeSurface(Vacio2);
    SDL_FreeSurface(Vacio3);
    SDL_FreeSurface(Vacio4);
    //Quit SDL
    SDL_Quit();
}

int main( int argc, char* args[] )
{
     //Quit flag

  JuegoComienza.Ordenar();

  bool quit = false;




    //Initialize
    if( init() == false )
    {
        return 1;
    }

    //Load the files
    if( load_files() == false )
    {
        return 1;
    }

    //Apply the surfaces to the screen

    apply_surface( 0, 0, background, screen );
    apply_surface( 0, 13, foo, screen );
    apply_surface( 150, 13, Vacio, screen );
    apply_surface( 300, 10, Vacio, screen );
    apply_surface( 400, 10, Vacio, screen );
    apply_surface( 500, 10, Vacio, screen );
    apply_surface( 600, 10, Vacio4, screen );

    for(int i =0; i<1; i++){
          apply_surface( 100, 350+i*12, Lista1[i], screen );
    }
    for(int i =0; i<2; i++){
          apply_surface( 210, 350+i*12, Lista2[i], screen );
    }
    for(int i =0; i<3; i++){
          apply_surface( 320, 350+i*12, Lista3[i], screen );
    }
     for(int i =0; i<4; i++){
          apply_surface( 430, 350+i*12, Lista4[i], screen );
    }
     for(int i =0; i<5; i++){
          apply_surface( 540, 350+i*12, Lista5[i], screen );
    }
     for(int i =0; i<6; i++){
          apply_surface( 650, 350+i*12, Lista6[i], screen );
    }
    for(int i =0; i<7; i++){
          apply_surface( 760, 350+i*12, Lista7[i], screen );
    }
    //Update the screen

    if( SDL_Flip( screen ) == -1 )
    {
        return 1;
    }

    //While the user hasn't quit
    int i;
    while( quit == false )
    {
        //While there's events to handle
        i++;
        while( SDL_PollEvent( &event ) )
        {
            //If the user has Xed out the window
           if(event.type == SDL_KEYDOWN)
           {
             switch(event.key.keysym.sym)
             {
                 case SDLK_SPACE :
             i++;
             apply_surface( 0, 0, ListaMaso[0], screen );

             }

           }
            if( event.type == SDL_QUIT )
            {

                quit = true;
            }
          apply_surface( 0, 0, background, screen );

        }


    }

    //Free the surfaces and quit SDL
    clean_up();

    return 0;

}

