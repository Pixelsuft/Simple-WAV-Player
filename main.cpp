//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream.h>
#include <cstdlib.h>
#include <mmsystem.hpp>
using namespace std;
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        setlocale(0,"");
        system("title Pixelsuft WAV Player");
        system("color 0a");
        cout <<endl <<"WAV Player." <<endl <<"Powered by pixelsuft!" <<endl <<endl <<endl;
        if(argc>1)
        {
                for(int i=1;i<argc;i++)
                {
                        cout <<"Song to play: " << argv[i] <<"." <<endl;
                        if(FileExists(argv[i]))
                        {
                                PlaySound(argv[i],0,SND_ASYNC);
                                cout <<"Playing Sound " <<argv[i] <<"..." <<endl;
                                if(i<argc-1)cout <<"Next song?";
                                else cout <<"Exit?";
                                system("pause");
                                cout <<endl <<endl;
                        }
                        else cout <<"Where is file " <<argv[i] <<"?" <<endl;
                }
        }
        else
        {
                cout <<"No songs played" <<endl;
                system("pause");
        }
        return 0;
}
//---------------------------------------------------------------------------
























