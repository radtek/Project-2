// 2020.12.27 Add CLitterDlg — 垃圾清理

#if !defined(AFX_LITTERDLG_H__5BE912A3_8112_471F_8D04_082D52D0EE80__INCLUDED_)
#define AFX_LITTERDLG_H__5BE912A3_8112_471F_8D04_082D52D0EE80__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#pragma once
#include <afxwin.h>
#include "resource.h"

class CLitterDlg : public CDialog
{
public:
	void FileDelete(CString FilePath);
	void DeleteLitterFile();
	CLitterDlg(CWnd* pParent = NULL);   // standard constructor

	HANDLE		m_hThread;                // 线程句柄
	enum { IDD = IDD_LITTER_DIALOG };
	CListBox	m_List;
	CComboBox	m_Combo;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);

	virtual BOOL OnInitDialog();
	afx_msg void OnButselect();
	afx_msg void OnButbegin();
	afx_msg void OnButstop();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#endif