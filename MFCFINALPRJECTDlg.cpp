
// MFCFINALPRJECTDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFCFINALPRJECT.h"
#include "MFCFINALPRJECTDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCFINALPRJECTDlg dialog



CMFCFINALPRJECTDlg::CMFCFINALPRJECTDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCFINALPRJECT_DIALOG, pParent)
	, isPressedADD(false)
	, pt2(_T(""))
	, pt4(_T(""))
	, pt5(_T(""))
	, ppd1(0)
	, ppd2(0)
	, ppd3(0)
	, ppd4(0)
	, ppd5(0)
	, tt1(_T(""))
	, tt3(_T(""))
	, tt4(_T(""))
	, tt5(_T(""))
	, gt4(_T(""))
	, pt1(_T(""))
	, pt3(_T(""))
	, tt2(_T(""))
	, gtd1(_T(""))
	, gtd2(_T(""))
	, gtd3(_T(""))
	, gtd5(_T(""))
	, dv1(_T(""))
	, dv2(_T(""))
	, dv3(_T(""))
	, dv4(_T(""))
	, dv5(_T(""))
	, mstr(_T(""))
	, TEST1(FALSE)
	, TEST2(FALSE)
	, TEST3(FALSE)
	, TEST4(FALSE)
	, TEST5(FALSE)
	, pv1(0)
	, pv2(0)
	, pv3(0)
	, pv4(0)
	, pv5(0)
	, checkToday1(FALSE)
	, checkToday2(FALSE)
	, checkToday3(FALSE)
	, checkToday4(FALSE)
	, checkToday5(FALSE)
	, checkGeneral1(FALSE)
	, checkGeneral2(FALSE)
	, checkGeneral3(FALSE)
	, checkGeneral4(FALSE)
	, checkGeneral5(FALSE)
	, isPressedInfo(FALSE)
	, isListInfoPressed(FALSE)
	, isAddOrDelete(false)
	, isPrssedRemove(FALSE)
	, isListRemovePressed(FALSE)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCFINALPRJECTDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, pc1);
	DDX_Text(pDX, IDC_EDIT3, pt2);
	DDX_Control(pDX, IDC_EDIT5, pc3);
	DDX_Text(pDX, IDC_EDIT7, pt4);
	DDX_Text(pDX, IDC_EDIT9, pt5);
	DDX_Text(pDX, IDC_EDIT2, ppd1);
	DDX_Text(pDX, IDC_EDIT4, ppd2);
	DDX_Text(pDX, IDC_EDIT6, ppd3);
	DDX_Text(pDX, IDC_EDIT8, ppd4);
	DDX_Text(pDX, IDC_EDIT10, ppd5);
	DDX_Text(pDX, IDC_EDIT11, tt1);
	DDX_Control(pDX, IDC_EDIT12, tc2);
	DDX_Text(pDX, IDC_EDIT13, tt3);
	DDX_Text(pDX, IDC_EDIT14, tt4);
	DDX_Text(pDX, IDC_EDIT15, tt5);
	DDX_Text(pDX, IDC_EDIT19, gt4);
	DDX_Text(pDX, IDC_EDIT1, pt1);
	DDX_Control(pDX, IDC_EDIT3, pc2);
	DDX_Text(pDX, IDC_EDIT5, pt3);
	DDX_Control(pDX, IDC_EDIT7, pc4);
	DDX_Control(pDX, IDC_EDIT9, pc5);
	DDX_Control(pDX, IDC_EDIT2, pcd1);
	DDX_Control(pDX, IDC_EDIT4, pcd2);
	DDX_Control(pDX, IDC_EDIT6, pcd3);
	DDX_Control(pDX, IDC_EDIT8, pcd4);
	DDX_Control(pDX, IDC_EDIT10, pcd5);
	DDX_Control(pDX, IDC_EDIT11, tc1);
	DDX_Text(pDX, IDC_EDIT12, tt2);
	DDX_Control(pDX, IDC_EDIT13, tc3);
	DDX_Control(pDX, IDC_EDIT14, tc4);
	DDX_Control(pDX, IDC_EDIT15, tc5);
	DDX_Control(pDX, IDC_EDIT16, gcd1);
	DDX_Text(pDX, IDC_EDIT16, gtd1);
	DDX_Control(pDX, IDC_EDIT17, gcd2);
	DDX_Text(pDX, IDC_EDIT17, gtd2);
	DDX_Control(pDX, IDC_EDIT18, gcd3);
	DDX_Text(pDX, IDC_EDIT18, gtd3);
	DDX_Control(pDX, IDC_EDIT19, gcd4);
	DDX_Text(pDX, IDC_EDIT20, gtd5);
	DDX_Control(pDX, IDC_EDIT20, gcd5);
	DDX_Control(pDX, IDC_EDIT21, dc1);
	DDX_Text(pDX, IDC_EDIT21, dv1);
	DDX_Control(pDX, IDC_EDIT22, dc2);
	DDX_Text(pDX, IDC_EDIT22, dv2);
	DDX_Control(pDX, IDC_EDIT23, dc3);
	DDX_Text(pDX, IDC_EDIT23, dv3);
	DDX_Control(pDX, IDC_EDIT24, dc4);
	DDX_Text(pDX, IDC_EDIT24, dv4);
	DDX_Control(pDX, IDC_EDIT25, dc5);
	DDX_Text(pDX, IDC_EDIT25, dv5);
	DDX_Text(pDX, IDC_EDIT29, mstr);
	DDX_Control(pDX, IDC_COMBO2, list1);
	DDX_Check(pDX, IDC_CHECK2, TEST1);
	DDX_Check(pDX, IDC_CHECK3, TEST2);
	DDX_Check(pDX, IDC_CHECK5, TEST3);
	DDX_Check(pDX, IDC_CHECK4, TEST4);
	DDX_Check(pDX, IDC_CHECK6, TEST5);
	DDX_Control(pDX, IDC_COMBO1, sortControl);
	DDX_Text(pDX, IDC_EDIT27, pv1);
	DDX_Text(pDX, IDC_EDIT28, pv2);
	DDX_Text(pDX, IDC_EDIT30, pv3);
	DDX_Text(pDX, IDC_EDIT31, pv4);
	DDX_Text(pDX, IDC_EDIT32, pv5);
	DDX_Control(pDX, IDC_EDIT27, ipc1);
	DDX_Control(pDX, IDC_EDIT28, ipc2);
	DDX_Control(pDX, IDC_EDIT30, ipc3);
	DDX_Control(pDX, IDC_EDIT31, ipc4);
	DDX_Control(pDX, IDC_EDIT32, ipc5);
	DDX_Check(pDX, IDC_CHECK7, checkToday1);
	DDX_Check(pDX, IDC_CHECK8, checkToday2);
	DDX_Check(pDX, IDC_CHECK10, checkToday3);
	DDX_Check(pDX, IDC_CHECK9, checkToday4);
	DDX_Check(pDX, IDC_CHECK11, checkToday5);
	DDX_Check(pDX, IDC_CHECK12, checkGeneral1);
	DDX_Check(pDX, IDC_CHECK13, checkGeneral2);
	DDX_Check(pDX, IDC_CHECK15, checkGeneral3);
	DDX_Check(pDX, IDC_CHECK14, checkGeneral4);
	DDX_Check(pDX, IDC_CHECK16, checkGeneral5);
	DDX_Control(pDX, IDC_COMBO3, cInfo1List);
	DDX_Control(pDX, IDC_COMBO4, cInfo2List);
	DDX_Control(pDX, IDC_BUTTON2, removeControl);
	DDX_Control(pDX, IDC_COMBO6, removeL1);
	DDX_Control(pDX, IDC_COMBO5, removeL2);
}

BEGIN_MESSAGE_MAP(CMFCFINALPRJECTDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCFINALPRJECTDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCFINALPRJECTDlg::OnBnClickedButton1)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CMFCFINALPRJECTDlg::OnCbnSelchangeCombo2)
	ON_BN_CLICKED(IDC_CHECK2, &CMFCFINALPRJECTDlg::OnBnClickedCheck2)
	ON_BN_CLICKED(IDC_CHECK3, &CMFCFINALPRJECTDlg::OnBnClickedCheck3)
	ON_BN_CLICKED(IDC_CHECK5, &CMFCFINALPRJECTDlg::OnBnClickedCheck5)
	ON_BN_CLICKED(IDC_CHECK4, &CMFCFINALPRJECTDlg::OnBnClickedCheck4)
	ON_BN_CLICKED(IDC_CHECK6, &CMFCFINALPRJECTDlg::OnBnClickedCheck6)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CMFCFINALPRJECTDlg::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_CHECK7, &CMFCFINALPRJECTDlg::OnBnClickedCheck7)
	ON_BN_CLICKED(IDC_CHECK8, &CMFCFINALPRJECTDlg::OnBnClickedCheck8)
	ON_BN_CLICKED(IDC_CHECK10, &CMFCFINALPRJECTDlg::OnBnClickedCheck10)
	ON_BN_CLICKED(IDC_CHECK9, &CMFCFINALPRJECTDlg::OnBnClickedCheck9)
	ON_BN_CLICKED(IDC_CHECK11, &CMFCFINALPRJECTDlg::OnBnClickedCheck11)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCFINALPRJECTDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_CHECK12, &CMFCFINALPRJECTDlg::OnBnClickedCheck12)
	ON_BN_CLICKED(IDC_CHECK13, &CMFCFINALPRJECTDlg::OnBnClickedCheck13)
	ON_BN_CLICKED(IDC_CHECK15, &CMFCFINALPRJECTDlg::OnBnClickedCheck15)
	ON_BN_CLICKED(IDC_CHECK14, &CMFCFINALPRJECTDlg::OnBnClickedCheck14)
	ON_BN_CLICKED(IDC_CHECK16, &CMFCFINALPRJECTDlg::OnBnClickedCheck16)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCFINALPRJECTDlg::OnBnClickedButton4)
	ON_CBN_SELCHANGE(IDC_COMBO3, &CMFCFINALPRJECTDlg::OnCbnSelchangeCombo3)
	ON_CBN_SELCHANGE(IDC_COMBO4, &CMFCFINALPRJECTDlg::OnCbnSelchangeCombo4)
	ON_CBN_SELCHANGE(IDC_COMBO5, &CMFCFINALPRJECTDlg::OnCbnSelchangeCombo5)
	ON_CBN_SELCHANGE(IDC_COMBO6, &CMFCFINALPRJECTDlg::OnCbnSelchangeCombo6)
END_MESSAGE_MAP()


// CMFCFINALPRJECTDlg message handlers

BOOL CMFCFINALPRJECTDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCFINALPRJECTDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCFINALPRJECTDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCFINALPRJECTDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMFCFINALPRJECTDlg::UpdateList(int i) {
	TRACE("%d", m.getSize(0));
	switch (i) {
		case 0:
			if (m.getSize(0) == 0) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToBuy*>(m.getMission(i, m.getSize(i)))->setPrice(0);
				pt1 = m.getText(0, 0);
				ppd1 = m.getPrice(0, 0);
				break;
			}
			pt1 = m.getText(0, 0);
			ppd1 = m.getPrice(0, 0);
			if (m.getSize(0) == 1) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToBuy*>(m.getMission(i, m.getSize(i)))->setPrice(0);
				pt2 = m.getText(0, 1);
				ppd2 = m.getPrice(0, 1);
				break;
			}
			pt2 = m.getText(0, 1);
			ppd2 = m.getPrice(0, 1);
			if (m.getSize(0) == 2) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToBuy*>(m.getMission(i, m.getSize(i)))->setPrice(0);
				pt3 = m.getText(0, 2);
				ppd3 = m.getPrice(0, 2);
				break;
			}
			pt3 = m.getText(0, 2);
			ppd3 = m.getPrice(0, 2);
			if (m.getSize(0) == 3) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToBuy*>(m.getMission(i, m.getSize(i)))->setPrice(0);
				pt4 = m.getText(0, 3);
				ppd4 = m.getPrice(0, 3);
				break;
			}
			pt4 = m.getText(0, 3);
			ppd4 = m.getPrice(0, 3);
			if (m.getSize(0) == 4) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToBuy*>(m.getMission(i, m.getSize(i)))->setPrice(0);
				pt5 = m.getText(0, 4);
				ppd5 = m.getPrice(0, 4);
				break;
			}
			pt5 = m.getText(0, 4);
			ppd5 = m.getPrice(0, 4);
			break;
		case 1:
			if (m.getSize(1) == 0) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToDay*>(m.getMission(i, m.getSize(i)))->setPriority(0);
				tt1 = m.getText(1, 0);
				pv1 = m.getPrice(1, 0);
				break;
			}
			tt1 = m.getText(1, 0);
			pv1 = m.getPrice(1, 0);
			if (m.getSize(1) == 1) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToDay*>(m.getMission(i, m.getSize(i)))->setPriority(0);
				tt2 = m.getText(0, 1);
				pv2 = m.getPrice(0, 1);
				break;
			}
			tt2 = m.getText(0, 1);
			pv2 = m.getPrice(0, 1);
			if (m.getSize(0) == 2) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToDay*>(m.getMission(i, m.getSize(i)))->setPriority(0);
				tt3 = m.getText(1, 2);
				pv3 = m.getPrice(1, 2);
				break;
			}
			tt3 = m.getText(1, 2);
			pv3 = m.getPrice(1, 2);
			if (m.getSize(1) == 3) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToDay*>(m.getMission(i, m.getSize(i)))->setPriority(0);
				tt4 = m.getText(1, 3);
				pv4 = m.getPrice(1, 3);
				break;
			}
			tt4 = m.getText(1, 3);
			pv4 = m.getPrice(1, 3);
			if (m.getSize(0) == 4) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<ToDay*>(m.getMission(i, m.getSize(i)))->setPriority(0);
				tt5 = m.getText(1, 4);
				pv5 = m.getPrice(1, 4);
				break;
			}
			tt5 = m.getText(1, 4);
			pv5 = m.getPrice(1, 4);
			mstr.Format(_T("SOTRING NAMES COMPLETED"));
		case 2:
			if (m.getSize(2) == 0) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<General*>(m.getMission(i, m.getSize(i)))->setDateLim(_T(""));
				gtd1 = m.getText(2, 0);
				dv1 = static_cast<General*>(m.getMission(i, 0))->getDateLim();
				break;
			}
			gtd1 = m.getText(2, 0);
			dv1 = static_cast<General*>(m.getMission(i, 0))->getDateLim();
			if (m.getSize(2) == 1) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<General*>(m.getMission(i, m.getSize(i)))->setDateLim(_T(""));
				gtd2 = m.getText(2, 1);
				dv2 = static_cast<General*>(m.getMission(i, 1))->getDateLim();
				break;
			}
			gtd2 = m.getText(2, 1);
			dv2 = static_cast<General*>(m.getMission(i, 1))->getDateLim();
			if (m.getSize(2) == 2) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<General*>(m.getMission(i, m.getSize(i)))->setDateLim(_T(""));
				gtd2 = m.getText(2, 1);
				dv2 = static_cast<General*>(m.getMission(i, 1))->getDateLim();
				break;
			}
			gtd3 = m.getText(2, 2);
			dv3 = static_cast<General*>(m.getMission(i, 2))->getDateLim();
			if (m.getSize(2) == 3) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<General*>(m.getMission(i, m.getSize(i)))->setDateLim(_T(""));
				gtd2 = m.getText(2, 1);
				dv2 = static_cast<General*>(m.getMission(i, 1))->getDateLim();
				break;
			}
			gtd4 = m.getText(2, 3);
			dv4 = static_cast<General*>(m.getMission(i, 3))->getDateLim();
			if (m.getSize(2) == 4) {
				m.getMission(i, m.getSize(i))->setText(_T(""));
				static_cast<General*>(m.getMission(i, m.getSize(i)))->setDateLim(_T(""));
				gtd2 = m.getText(2, 1);
				dv2 = static_cast<General*>(m.getMission(i, 1))->getDateLim();
				break;
			}
			gtd5 = m.getText(2, 4);
			dv5 = static_cast<General*>(m.getMission(i, 4))->getDateLim();
	}
	UpdateData(FALSE);
}



void CMFCFINALPRJECTDlg::OnBnClickedButton2() {
	isPrssedRemove = !isPrssedRemove;
	if (isPrssedRemove) {
		GetDlgItem(IDC_COMBO6)->ShowWindow(SW_SHOW);
	}
	else {
		GetDlgItem(IDC_COMBO6)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_COMBO5)->ShowWindow(SW_HIDE);
	}
}


void CMFCFINALPRJECTDlg::OnBnClickedButton1()
{
	isAddOrDelete = FALSE;
	if (!isPressedADD) {
		GetDlgItem(IDC_COMBO2)->ShowWindow(SW_SHOW);
		mstr.Format(_T("Please choose mission you want to add.\r\nWrite down the mission in the tab below\r\nAnd fill the check box again"));
	}
	else {
		GetDlgItem(IDC_COMBO2)->ShowWindow(SW_HIDE);
		list1.SetCurSel(-1);
	}

	isPressedADD = !isPressedADD;
	//mstr.Empty();
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnCbnSelchangeCombo2()
{
	Mission* newMission = NULL;
	int i = list1.GetCurSel();
	if (!isAddOrDelete) {
		switch (i) {
		case 0:
			if (m.isFull(i)) {
				mstr.Format(_T("To buy list is full."));
			}
			else {
				switch (m.getFreeSlot(i)) {
				case 0:
					pc1.SetReadOnly(FALSE);
					pcd1.SetReadOnly(FALSE);
					break;

				case 1:
					pc2.SetReadOnly(FALSE);
					pcd2.SetReadOnly(FALSE);
					break;
				case 2:
					pc3.SetReadOnly(FALSE);
					pcd3.SetReadOnly(FALSE);
					break;
				case 3:
					pc4.SetReadOnly(FALSE);
					pcd4.SetReadOnly(FALSE);
					break;

				case 4:
					pc5.SetReadOnly(FALSE);
					pcd5.SetReadOnly(FALSE);
					break;
				}
				mstr.AppendFormat(L"\r\nPlease enter product name and price.");
			}
			break;
		case 1:
			if (m.isFull(i)) {
				mstr.Format(_T("Today list is full."));
			}
			else {
				switch (m.getFreeSlot(i)) {
				case 0:
					tc1.SetReadOnly(FALSE);
					ipc1.SetReadOnly(FALSE);
					break;
				case 1:
					tc2.SetReadOnly(FALSE);
					ipc2.SetReadOnly(FALSE);
					break;
				case 2:
					tc3.SetReadOnly(FALSE);
					ipc3.SetReadOnly(FALSE);
					break;
				case 3:
					tc4.SetReadOnly(FALSE);
					ipc4.SetReadOnly(FALSE);
					break;

				case 4:
					tc5.SetReadOnly(FALSE);
					ipc5.SetReadOnly(FALSE);
					break;
				}
				mstr.AppendFormat(L"\r\nPlease mission description and priority [1-3]");
			}
			break;
		case 2:
			if (m.isFull(i)) {
				mstr.Format(_T("Today list is full."));
			}
			else {
				switch (m.getFreeSlot(i)) {
				case 0:
					gcd1.SetReadOnly(FALSE);
					dc1.SetReadOnly(FALSE);
					break;
				case 1:
					gcd2.SetReadOnly(FALSE);
					dc2.SetReadOnly(FALSE);
					break;
				case 2:
					gcd3.SetReadOnly(FALSE);
					dc3.SetReadOnly(FALSE);
					break;
				case 3:
					gcd4.SetReadOnly(FALSE);
					dc4.SetReadOnly(FALSE);
					break;

				case 4:
					gcd5.SetReadOnly(FALSE);
					dc5.SetReadOnly(FALSE);
					break;
				}
				mstr.AppendFormat(L"\r\nPlease enter mission description and datelimit [dd.mm.yy]");
			}
			break;
		}
	}
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck2()
{
	TEST1 = !TEST1;
	CEdit* p = NULL;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	pc1.SetReadOnly(TRUE);
	pcd1.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToBuy(pt1, ppd1);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK2);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck3()
{
	TEST2 = !TEST2;
	int i;
	CEdit* p = NULL;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	pc2.SetReadOnly(TRUE);
	pcd2.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToBuy(pt2, ppd2);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK3);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck5()
{
	TEST3 = !TEST3;
	int i;
	CEdit* p = NULL;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	pc3.SetReadOnly(TRUE);
	pcd3.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToBuy(pt3, ppd3);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK5);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck4()
{
	TEST4 = !TEST4;
	int i;
	CEdit* p = NULL;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	pc4.SetReadOnly(TRUE);
	pcd4.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToBuy(pt4, ppd4);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK4);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck6()
{
	TEST5 = !TEST5;
	CEdit* p = NULL;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	pc5.SetReadOnly(TRUE);
	pcd5.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToBuy(pt5, ppd5);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK6);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}

void CMFCFINALPRJECTDlg::OnCbnSelchangeCombo1()
{
	int j;
	int i = sortControl.GetCurSel();
	switch (i) {
	case 0:
		m.sortByPrice();
		if (m.getSize(0) == 0)
			break;
		pt1 = m.getText(0, 0);
		ppd1 = m.getPrice(0, 0);
		if (m.getSize(0) == 1)
			break;
		pt2 = m.getText(0, 1);
		ppd2 = m.getPrice(0, 1);
		if (m.getSize(0) == 2)
			break;
		pt3 = m.getText(0, 2);
		ppd3 = m.getPrice(0, 2);
		if (m.getSize(0) == 3)
			break;
		pt4 = m.getText(0, 3);
		ppd4 = m.getPrice(0, 3);
		if (m.getSize(0) == 4)
			break;
		pt5 = m.getText(0, 4);
		ppd5 = m.getPrice(0, 4);
		mstr.Format(_T("SOTRING PRICE COMPLETED"));
		break;
	case 1:
		m.sortByName();
		if (m.getSize(0) == 0)
			break;
		pt1 = m.getText(0, 0);
		ppd1 = m.getPrice(0, 0);
		if (m.getSize(0) == 1)
			break;
		pt2 = m.getText(0, 1);
		ppd2 = m.getPrice(0, 1);
		if (m.getSize(0) == 2)
			break;
		pt3 = m.getText(0, 2);
		ppd3 = m.getPrice(0, 2);
		if (m.getSize(0) == 3)
			break;
		pt4 = m.getText(0, 3);
		ppd4 = m.getPrice(0, 3);
		if (m.getSize(0) == 4)
			break;
		pt5 = m.getText(0, 4);
		ppd5 = m.getPrice(0, 4);
		mstr.Format(_T("SOTRING NAMES COMPLETED"));
	case 2:
		m.sortByPriority();
		if (m.getSize(1) == 0)
			break;
		tt1 = m.getText(1, 0);
		pv1 = m.getPrio(1, 0);
		if (m.getSize(1) == 1)
			break;
		tt2 = m.getText(1, 1);
		pv2 = m.getPrio(1, 1);
		if (m.getSize(1) == 2)
			break;
		tt3 = m.getText(1, 2);
		pv3 = m.getPrio(1, 2);
		if (m.getSize(1) == 3)
			break;
		tt4 = m.getText(1, 3);
		pv4 = m.getPrio(1, 3);
		if (m.getSize(1) == 4)
			break;
		tt5 = m.getText(1, 4);
		pv5 = m.getPrio(1, 4);
		mstr.Format(_T("SOTRING PRIORITIES COMPLETED"));
	}

	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck7()
{
	checkToday1 = !checkToday1;
	CEdit* p = NULL;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	tc1.SetReadOnly(TRUE);
	ipc1.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToDay(tt1, 0 , pv1);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK7);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}

void CMFCFINALPRJECTDlg::OnBnClickedCheck8()
{
	checkToday2 = !checkToday2;
	CEdit* p = NULL;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	tc2.SetReadOnly(TRUE);
	ipc2.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToDay(tt2, 0, pv2);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK8);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck10()
{
	checkToday3 = !checkToday3;
	CEdit* p = NULL;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	tc3.SetReadOnly(TRUE);
	ipc3.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToDay(tt3, 0, pv3);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK10);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck9()
{
	checkToday4 = !checkToday4;
	CEdit* p = NULL;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	tc4.SetReadOnly(TRUE);
	ipc4.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToDay(tt4, 0, pv4);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK9);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck11()
{
	checkToday5 = !checkToday5;
	CEdit* p = NULL;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	tc5.SetReadOnly(TRUE);
	ipc5.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new ToDay(tt5, 0, pv5);
	m.insert(newMission);
	p = (CEdit*)GetDlgItem(IDC_CHECK11);
	p->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedButton3()
{
	pt2 = pt4 = pt5 = pt1 = pt3 = tt1 = tt3 = tt4 = tt5 = gt4 = tt2 = gtd1 = gtd2 = gtd3 = gtd4 = gtd5 = dv1 = dv2 = dv3 = dv4 = dv5 = _T("");
	pv1 = pv2 = pv3 = pv4 = pv5 = ppd1 = ppd2 = ppd3 = ppd4 = ppd5 = 0;
	mstr.Empty();
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck12()
{
	checkGeneral1 = !checkGeneral1;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	gcd1.SetReadOnly(TRUE);
	dc1.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new General(dv1, gtd1);
	m.insert(newMission);
	GetDlgItem(IDC_CHECK12)->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck13()
{
	checkGeneral1 = !checkGeneral1;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	gcd2.SetReadOnly(TRUE);
	dc2.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new General(dv2, gtd2);
	m.insert(newMission);
	GetDlgItem(IDC_CHECK13)->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck15()
{
	checkGeneral1 = !checkGeneral1;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	gcd3.SetReadOnly(TRUE);
	dc3.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new General(dv3, gtd3);
	m.insert(newMission);
	GetDlgItem(IDC_CHECK15)->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck14()
{
	checkGeneral1 = !checkGeneral1;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	gcd4.SetReadOnly(TRUE);
	dc4.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new General(dv4, gtd4);
	m.insert(newMission);
	GetDlgItem(IDC_CHECK14)->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedCheck16()
{
	checkGeneral1 = !checkGeneral1;
	int i;
	Mission* newMission = NULL;
	i = list1.GetCurSel();
	gcd5.SetReadOnly(TRUE);
	dc5.SetReadOnly(TRUE);
	UpdateData(TRUE);
	newMission = new General(dv5, gtd5);
	m.insert(newMission);
	GetDlgItem(IDC_CHECK16)->ShowWindow(SW_HIDE);
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnBnClickedButton4()
{
	isPressedInfo = !isPressedInfo;
	if (isPressedInfo) {
		GetDlgItem(IDC_COMBO3)->ShowWindow(SW_SHOW);
	}
	else {
		GetDlgItem(IDC_COMBO3)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_COMBO4)->ShowWindow(SW_HIDE);
	}
}


void CMFCFINALPRJECTDlg::OnCbnSelchangeCombo3()
{
	isListInfoPressed = !isListInfoPressed;
	if (isListInfoPressed)
		GetDlgItem(IDC_COMBO4)->ShowWindow(SW_SHOW);
	else if (cInfo2List.GetCurSel() == -1)
		GetDlgItem(IDC_COMBO4)->ShowWindow(SW_HIDE);
}


void CMFCFINALPRJECTDlg::OnCbnSelchangeCombo4()
{
	CString s[3] = { _T("To buy"), _T("Today"), _T("General") };
	int i, j;
	i = cInfo1List.GetCurSel();
	j = cInfo2List.GetCurSel();
	if (i != -1 && j != -1) {
		if (m.getFreeSlot(i) <= j) {
			mstr.Append(s[i]);
			mstr.AppendFormat(L" mission number: %d. does not exists!\r\n", j + 1);
		}
		else
			mstr.Format(m.getMission(i, j)->getInfo());
	}
	UpdateData(FALSE);
}



void CMFCFINALPRJECTDlg::OnCbnSelchangeCombo5()
{
	int i, j;
	CString s[3] = { _T("To buy"), _T("Today"), _T("General") };
	i = removeL1.GetCurSel();
	j = removeL2.GetCurSel();
	if (i != -1 && j != -1) {
		if (m.getFreeSlot(i) <= j) {
			mstr.Append(s[i]);
			mstr.AppendFormat(L" mission number: %d. does not exists!\r\n", j + 1);
		}
		else {
			m.deleteMission(i, j);
			UpdateList(i);
		}
	}
	UpdateData(FALSE);
}


void CMFCFINALPRJECTDlg::OnCbnSelchangeCombo6()
{
	isListRemovePressed = !isListRemovePressed;
	if (isListRemovePressed)
		GetDlgItem(IDC_COMBO5)->ShowWindow(SW_SHOW);
	else if (cInfo2List.GetCurSel() == -1)
		GetDlgItem(IDC_COMBO5)->ShowWindow(SW_HIDE);
}