// 2020.12.10 Add CContralDlg实现类

#if !defined(AFX_CONTRALDLG_H__8863A379_B3E1_49B5_8699_9290C71EC4B3__INCLUDED_)
#define AFX_CONTRALDLG_H__8863A379_B3E1_49B5_8699_9290C71EC4B3__INCLUDED_
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "CIconBtn.h"
#include "resource.h"

class CContralDlg : public CDialog
{
	//DECLARE_DYNAMIC(CContralDlg)
public:
	////////////////////////////////////////////////////
	// 标准构造函数
	CContralDlg(CWnd* pParent = nullptr);   
	virtual ~CContralDlg();

	virtual void DoDataExchange(CDataExchange* pDX);

	virtual BOOL OnInitDialog();
	afx_msg void OnButinternet();
	afx_msg void OnButmmsys();
	afx_msg void OnButtimedate();
	afx_msg void OnButdesk();
	afx_msg void OnButaccess();
	afx_msg void OnButmouse();
	afx_msg void OnButkeyboard();
	afx_msg void OnButintl();
	afx_msg void OnButappwiz();
	afx_msg void OnButhdwwiz();
	afx_msg void OnButsysdm();
	afx_msg void OnButmodem();
	afx_msg HBRUSH OnCtlColor(CDC *pDC, CWnd *pWnd, UINT nCtlColor);
	//}}AFX_MSG

	/////////////////////////////////////////////////////
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CONTRAL_DIALOG };
#endif
	enum { IDD = IDD_CONTRAL_DIALOG };
	CIconBtn    m_Computer;
	CIconBtn    m_Timedate;
	CIconBtn    m_Sysdm;
	CIconBtn    m_Mouse;
	CIconBtn    m_Mmsys;
	CIconBtn    m_Keyboard;
	CIconBtn    m_Intl;
	CIconBtn    m_Hdwwiz;
	CIconBtn    m_Desk;
	CIconBtn    m_Appwiz;
	CIconBtn    m_Access;
	CIconBtn    m_Internet;

	void OnBnClickedBtnSave();

	DECLARE_MESSAGE_MAP()
};

#endif
