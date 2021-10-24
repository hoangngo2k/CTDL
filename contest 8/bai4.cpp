#include <wx/wxprec.h>

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#ifndef WX_PRECOMP
    #include <wx/app.h>
#endif

//(*AppHeaders
//*)


class MyApp : public wxApp
{
    public:
        virtual bool OnInit();
};

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    //(*AppInitialize
    //*)
    return wxsOK;
}

