
#include "CountTime.h"
#include "MainFunction.h"


// problems about time in game
CountTime::CountTime()
{
    start_tick_ = 0;
    paused_ticks_ = 0;
    is_paused_ = false;
    is_started_ = false;
}

void CountTime::start()
{
    is_started_ = true;
    is_paused_ = false;
    start_tick_ = SDL_GetTicks();
}

void CountTime::stop()
{
    is_started_ = false;
    is_paused_ = false;
}

void CountTime::pause()
{
    if ((is_started_ == true) && (is_paused_ == false))
    {
        is_paused_ = true;
        paused_ticks_ = SDL_GetTicks() - start_tick_;
    }
}

void CountTime::unpause()
{
    if (is_paused_ == true)
    {
        is_paused_ = false;
        //Reset the starting ticks
        start_tick_ = SDL_GetTicks() - paused_ticks_;
        //Reset the paused ticks
        paused_ticks_ = 0;
    }
}

int CountTime::get_ticks()
{
    if (is_started_ == true)
    {
        //If the timer is paused
        if (is_paused_ == true)
        {
            return paused_ticks_;
        }
        else
        {
            return SDL_GetTicks() - start_tick_;
        }
    }

    //If the timer isn't running
    return 0;
}

bool CountTime::is_started()
{
    return is_started_;
}

bool CountTime::is_paused()
{
    return is_paused_;
}