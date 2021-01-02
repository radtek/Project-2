// 2020.12.8 Add CSystemsOptimizeDlg 实现类

#pragma once
#include <afxwin.h>
#include "resource.h" // 主符号
#include "CContralDlg.h"
#include "CDiskDlg.h"
#include "CLitterDlg.h"

#if !defined(AFX_SYSOPTIMIZEDLG_H__368DD37B_D0F5_4840_935F_3A3889E04035__INCLUDED_)
#define AFX_SYSOPTIMIZEDLG_H__368DD37B_D0F5_4840_935F_3A3889E04035__INCLUDED_

// 宏定义
#define fTitle          1  // 标题
#define fMinButton      2  // 最小化按钮
#define fCloseButton    4  // 关闭按钮
#define fAll            7  // 所有标识

//#define IDR_MAINFRAME 128
//#define IDC_STATICSELECT 1040
//#define IDC_FRAME 1000

// 按钮状态
enum CButtonState { bsNone, bsMin, bsClose };

// CSystemsOptimizeDlg 对话框
class CSystemsOptimizeDlg : public CDialog
{
public:
	//------------------------------------------------
	// 成员函数
	/*
	* 构造函数
	*/
	CSystemsOptimizeDlg(CWnd* pParent = nullptr);

	/*
	* 初始化面板
	*/
	virtual BOOL OnInitDialog();
	/*
	* 消息处理程序
	*/
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	/*
	* 如果向对话框添加最小化按钮，则需要下面的代码来绘制该图标
	*/
	afx_msg void OnPaint();
	
	/*
	* 当用户拖动最小化窗口时系统调用此函数取得光标显示
	*/
	afx_msg HCURSOR OnQueryDragIcon();

	/*
	* 数据动态绑定
	*/
	virtual void DoDataExchange(CDataExchange* pDX);

	//----------------------------------------------
	/*
	* 控制面板
	*/
	afx_msg void OnStaContral();
	/*
	* 磁盘空间整理
	*/
	afx_msg void OnStaDisk();
	/*
	* 垃圾清理
	*/
	afx_msg void OnStaLitter();
	/*
	* 系统任务
	*/
	afx_msg void OnStaTask();

	void DestroyWindowBox(int num);
	void CreateDialogBox(int num);
	void DrawCaption();
	void DrawDialog(UINT Flags);
	HBRUSH OnCtlColor(CDC *pDC, CWnd *pWnd, UINT nCtlColor);

	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonDown(UINT nHitTest, CPoint point);
	afx_msg BOOL OnNcActivate(BOOL bActive);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	
	DECLARE_MESSAGE_MAP()

	afx_msg void OnNcPaint();
	afx_msg void OnMove(int x, int y);
	//-----------------------------------------------	
	// 成员变量

	// 对话框数据
//#ifdef AFX_DESIGN_TIME
//	enum { IDD = IDD_SYSTEMSOPTIMIZE_DIALOG };
//#endif
	enum { IDD = IDD_SYSTEMSOPTIMIZE_DIALOG };
	
	int                   m_Num;
	
	HICON                 m_hIcon;
	CStatic               m_Select;
	CStatic               m_Frame;

	CString               m_Caption;              // 窗体标题
	CButtonState          m_ButtonState;          // 按钮状态
	int                   m_CaptionHeight;        // 标题栏的高度
	int                   m_TitleDrawHeight;      // 标题栏实际的绘制高度
	int                   m_ButtonWidth;          // 按钮位图宽度
	int                   m_ButtonHeight;         // 按钮高度
	int                   m_BorderWidth;          // 边框宽度
	int                   m_BorderHeight;         // 边框高度
	COLORREF              m_CapitonColor;         // 标题字体颜色
	CFont                 m_CaptionFont;          // 标题字体
	BOOL                  m_IsDrawForm;           // 是否重绘按钮
	CRect                 m_TitleRc;              // 标题栏区域
	CRect                 m_MinRect;              // 最小化按钮区域
	CRect                 m_CloseRect;            // 关闭按钮区域

	CBitmap               m_BKGround;

	CContralDlg          *m_pContralDlg; // 控制面板操作模块
	CDiskDlg             *m_pDiskDlg;    // 磁盘空间整理模块
	CLitterDlg           *m_pLitterDlg;  // 垃圾文件清理模块
	//CTaskDlg           *m_pTaskDlg;    // 系统任务管理模块
};

#endif
