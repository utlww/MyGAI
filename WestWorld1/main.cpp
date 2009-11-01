#include <Windows.h>
#include <winbase.h>
#include "EntityNames.h"
#include "Miner.h"

int main()
{
    Miner bob(ent_Miner_Bob);

    for(int i=0; i<=20; i++)
    {
        bob.Update();

        Sleep(800);
    }
}
