
#include "SetUp.h"


SetUp::SetUp()
{
    p_object_ = NULL;
    rect_.x = 0;
    rect_.y = 0;
    rect_.w = 0;
    rect_.h = 0;
}

SetUp::~SetUp()
{
    Free();
}

bool SetUp::LoadImageFile(std::string path, SDL_Renderer* screen)
{
   
    Free();
    SDL_Texture* newTexture = NULL;

    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load(path.c_str());
    if (loadedSurface != NULL)
    {
        //ky thuat Color key ( xoa mau background cua anh )
        Uint32 key = SDL_MapRGB(loadedSurface->format,
            COLOR_KEY_R,
            COLOR_KEY_G,
            COLOR_KEY_B);
        SDL_SetColorKey(loadedSurface, SDL_TRUE, key);

        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface(screen, loadedSurface);
        if (newTexture != NULL)
        {
            //Get image dimensions
            rect_.w = loadedSurface->w;
            rect_.h = loadedSurface->h;
        }

        //Get rid of old loaded surface
        SDL_FreeSurface(loadedSurface);
    }

    p_object_ = newTexture;
    return p_object_ != NULL;
}

void SetUp::Free()
{
    if (p_object_ != NULL)
    {
        SDL_DestroyTexture(p_object_);
        p_object_ = NULL;
        rect_.w = 0;
        rect_.h = 0;
    }
}

void SetUp::Render(SDL_Renderer* des, const SDL_Rect* clip)
{
    SDL_Rect renderQuad = { rect_.x, rect_.y, rect_.w, rect_.h };
    if (clip != NULL)
    {
        renderQuad.w = clip->w;
        renderQuad.h = clip->h;
    }
    SDL_RenderCopy(des, p_object_, clip, &renderQuad);
}