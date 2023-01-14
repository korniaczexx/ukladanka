/***************************************************************
 * Name:      UkladankaApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2022-12-14
 * Copyright:  ()
 * License:
 **************************************************************/

#include "UkladankaApp.h"

//(*AppHeaders
#include "UkladankaMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(UkladankaApp);

bool UkladankaApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	UkladankaDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
