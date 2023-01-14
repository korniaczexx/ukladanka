/***************************************************************
 * Name:      UkladankaMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2022-12-14
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef UKLADANKAMAIN_H
#define UKLADANKAMAIN_H

#include <map>
#include "ukladanka.h"

using namespace std;

//(*Headers(UkladankaDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/timer.h>
//*)

class UkladankaDialog: public wxDialog
{
    public:

        UkladankaDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~UkladankaDialog();

    private:

        //(*Handlers(Dialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTimer1Trigger(wxTimerEvent& event);
        void OnBitmapButton1Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void inicjalizujPlansze();
        //*)

        //(*Identifiers(UkladankaDialog)
        static const long ID_STATICTEXT1;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON2;
        static const long ID_BITMAPBUTTON3;
        static const long ID_BITMAPBUTTON4;
        static const long ID_BITMAPBUTTON5;
        static const long ID_BITMAPBUTTON6;
        static const long ID_BITMAPBUTTON7;
        static const long ID_BITMAPBUTTON8;
        static const long ID_BITMAPBUTTON9;
        static const long ID_BITMAPBUTTON10;
        static const long ID_BITMAPBUTTON11;
        static const long ID_BITMAPBUTTON12;
        static const long ID_BITMAPBUTTON13;
        static const long ID_BITMAPBUTTON14;
        static const long ID_BITMAPBUTTON15;
        static const long ID_BITMAPBUTTON16;
        static const long ID_STATICTEXT2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_TIMER1;
        //*)

        //(*Declarations(UkladankaDialog)
        wxBitmapButton* BitmapButton0;
        wxBitmapButton* BitmapButton10;
        wxBitmapButton* BitmapButton11;
        wxBitmapButton* BitmapButton12;
        wxBitmapButton* BitmapButton13;
        wxBitmapButton* BitmapButton14;
        wxBitmapButton* BitmapButton15;
        wxBitmapButton* BitmapButton1;
        wxBitmapButton* BitmapButton2;
        wxBitmapButton* BitmapButton3;
        wxBitmapButton* BitmapButton4;
        wxBitmapButton* BitmapButton5;
        wxBitmapButton* BitmapButton6;
        wxBitmapButton* BitmapButton7;
        wxBitmapButton* BitmapButton8;
        wxBitmapButton* BitmapButton9;
        wxButton* Button1;
        wxButton* Button2;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxTimer Timer1;
        //*)

        DECLARE_EVENT_TABLE()
        ukladanka uklad;
        double ir=0;
        wxBitmapButton * plansza[16];
        wxBitmap obrazki[17];
        map<int,int> przelicz;
};

#endif // UKLADANKAMAIN_H
