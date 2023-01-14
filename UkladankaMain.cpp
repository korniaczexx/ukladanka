/***************************************************************
 * Name:      UkladankaMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2022-12-14
 * Copyright:  ()
 * License:
 **************************************************************/

#include "UkladankaMain.h"
#include <wx/msgdlg.h>
#include <ukladanka.h>
#include <iostream>

//(*InternalHeaders(UkladankaDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(UkladankaDialog)
const long UkladankaDialog::ID_STATICTEXT1 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON1 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON2 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON3 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON4 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON5 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON6 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON7 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON8 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON9 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON10 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON11 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON12 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON13 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON14 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON15 = wxNewId();
const long UkladankaDialog::ID_BITMAPBUTTON16 = wxNewId();
const long UkladankaDialog::ID_STATICTEXT2 = wxNewId();
const long UkladankaDialog::ID_BUTTON1 = wxNewId();
const long UkladankaDialog::ID_BUTTON2 = wxNewId();
const long UkladankaDialog::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(UkladankaDialog,wxDialog)
    //(*EventTable(UkladankaDialog)
    //*)
END_EVENT_TABLE()

UkladankaDialog::UkladankaDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(UkladankaDialog)
    wxBoxSizer* BoxSizer1;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;

    Create(parent, id, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ukladanka"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2 = new wxFlexGridSizer(4, 4, 0, 0);
    BitmapButton0 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    FlexGridSizer2->Add(BitmapButton0, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    FlexGridSizer2->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    FlexGridSizer2->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    FlexGridSizer2->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    FlexGridSizer2->Add(BitmapButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
    FlexGridSizer2->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton6 = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
    FlexGridSizer2->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton7 = new wxBitmapButton(this, ID_BITMAPBUTTON8, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
    FlexGridSizer2->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton8 = new wxBitmapButton(this, ID_BITMAPBUTTON9, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
    FlexGridSizer2->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton9 = new wxBitmapButton(this, ID_BITMAPBUTTON10, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
    FlexGridSizer2->Add(BitmapButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton10 = new wxBitmapButton(this, ID_BITMAPBUTTON11, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
    FlexGridSizer2->Add(BitmapButton10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton11 = new wxBitmapButton(this, ID_BITMAPBUTTON12, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
    FlexGridSizer2->Add(BitmapButton11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton12 = new wxBitmapButton(this, ID_BITMAPBUTTON13, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
    FlexGridSizer2->Add(BitmapButton12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton13 = new wxBitmapButton(this, ID_BITMAPBUTTON14, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
    FlexGridSizer2->Add(BitmapButton13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton14 = new wxBitmapButton(this, ID_BITMAPBUTTON15, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON15"));
    FlexGridSizer2->Add(BitmapButton14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton15 = new wxBitmapButton(this, ID_BITMAPBUTTON16, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
    FlexGridSizer2->Add(BitmapButton15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    BoxSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("Uloz obrazek"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("Nowa gra"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    Timer1.SetOwner(this, ID_TIMER1);
    Timer1.Start(10, false);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UkladankaDialog::OnBitmapButton1Click);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UkladankaDialog::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UkladankaDialog::OnButton2Click);
    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&UkladankaDialog::OnTimer1Trigger);
    //*)

    /*
    #define pp(nr) plansza[nr] = Pole ## nr;
    pp(0) pp(1) pp(2) pp(3) pp(4) pp(5) pp(6) pp(7) pp(8)
    #undef pp
    */

#define pp(nr) plansza[nr] = BitmapButton ## nr; obrazki[nr] = wxBitmap(wxImage(_T("grafiki\\o")+ wxString::Format(wxT("%i"),nr) +_T(".jpg")));
    pp(0) pp(1) pp(2) pp(3) pp(4) pp(5) pp(6) pp(7) pp(8) pp(9) pp(10) pp(11) pp(12) pp(13) pp(14) pp(15)
#undef pp
    obrazki[16] = wxBitmap(wxImage(_T("grafiki\\o16.jpg")));

    inicjalizujPlansze();

    Fit();
}

UkladankaDialog::~UkladankaDialog()
{
    //(*Destroy(UkladankaDialog)
    //*)
}

void UkladankaDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void UkladankaDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void UkladankaDialog::OnTimer1Trigger(wxTimerEvent& event)
{
    ir++;
    double x = ir*Timer1.GetInterval()/1000.0;
    StaticText2->SetLabel(wxString::Format("%.2f", x));
}

void UkladankaDialog::OnBitmapButton1Click(wxCommandEvent& event)
{

    int staryPusty = uklad.pusty;
    int id = event.GetId();
    int nr = przelicz[id];
    if(uklad.ruch(nr))
    {
        plansza[uklad.pusty]-> SetBitmap(obrazki[16]);
        plansza[staryPusty]->SetBitmap(obrazki[uklad.tablica[staryPusty]]);
        if(uklad.czyRozwiazane())
        {
            string wyjatek = "WYgrana"; //Tu komunikat
            throw wyjatek;
        }
    }


}

void UkladankaDialog::OnButton1Click(wxCommandEvent& event)
{
    //uklad.losowanie();
    //inicjalizujPlansze();
    //ir=0;



    for(int i=0; i<16; i++)
    {
        przelicz[plansza[i]->GetId()] = i;
        plansza[i]->SetBitmap(obrazki[i]);
        Connect(plansza[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UkladankaDialog::OnBitmapButton1Click);
    }

    plansza[uklad.pusty]-> SetBitmap(obrazki[16]);
    ir=0;

}

void UkladankaDialog::OnButton2Click(wxCommandEvent& event)
{
    uklad.losowanie();
    inicjalizujPlansze();
    ir=0;
}

void UkladankaDialog::inicjalizujPlansze(){
    for(int i=0; i<16; i++)
    {
        przelicz[plansza[i]->GetId()] = i;
        int pozycjaWylosowanegoObrazka = uklad.tablica[i];
        plansza[i]->SetBitmap(obrazki[pozycjaWylosowanegoObrazka]);
        Connect(plansza[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UkladankaDialog::OnBitmapButton1Click);
    }

    plansza[uklad.pusty]-> SetBitmap(obrazki[16]);
}
