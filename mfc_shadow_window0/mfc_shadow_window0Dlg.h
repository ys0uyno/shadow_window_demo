
// mfc_shadow_window0Dlg.h : header file
//

#pragma once

#include "WndShadow.h"

// Cmfc_shadow_window0Dlg dialog
class Cmfc_shadow_window0Dlg : public CDialogEx
{
// Construction
public:
	Cmfc_shadow_window0Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MFC_SHADOW_WINDOW0_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

public:
	CWndShadow m_wnd_shadow;
};
