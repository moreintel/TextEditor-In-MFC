// TextEditorDlg.h : header file
//
#include "splash.h"
#include "EditWindow.h"

#if !defined(AFX_TextEditorDLG_H__68215130_2DA9_4F1E_984F_CC4F2A8B7C41__INCLUDED_)
#define AFX_TextEditorDLG_H__68215130_2DA9_4F1E_984F_CC4F2A8B7C41__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTextEditorDlg dialog

class CTextEditorDlg : public CDialog
{
// Construction
public:
	void OpenFile(void);

	CTextEditorDlg(CWnd* pParent = NULL);	// standard constructor
	friend class CCountStringDialog;
	friend class EditWindow;
	CMenu m_Menu;					//����˵������
	CFont m_Font;					//�������������
	HACCEL m_hAccel;				//������ټ�����

	CToolBar TextEditor_ToolBar;           //���ӵĹ�����
	CReBar TextEditor_ReBar;                    

	BOOL isNew;						//�ж��Ƿ����½����ı�
	CString SavePath;				//�����ļ���ʱ��·��
	BOOL isModified;				//�жϱ༭�ؼ��������Ƿ��޸�

	//����/�滻ʱʹ�õı���
	CFindReplaceDialog* dlg;		//����"����/�滻"�Ի���ָ��
	int nindex;				     	//�洢�����ַ�������ʼλ��
	int index;						//�ҵ��ַ�����λ��(�ɼ�¼�ϴβ���λ��)
	BOOL degree;					//�ж��Ƿ�Ϊ��һ���滻�ı��
	BOOL find;						//�ж��Ƿ���в��ҵı��
	
	EditWindow * m_EditPtr; 

// Dialog Data
	//{{AFX_DATA(CTextEditorDlg)
	enum { IDD = IDD_TextEditor_DIALOG };
	EditWindow m_Edit;				//���屳���༭��ؼ�
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTextEditorDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTextEditorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnMenuOpen();
	afx_msg void OnMenuSave();
	afx_msg void OnMenuSaveas();
	afx_msg void OnMenuFindReplace();
    afx_msg long OnFindReplace(WPARAM wParam, LPARAM lParam);
	afx_msg void OnMenuFont();
	afx_msg void OnMenuNew();
	afx_msg void OnMenuAbout();
	afx_msg void OnClose();
	afx_msg void OnMenuCopy();
    afx_msg void OnMenuPaste();
	afx_msg void OnMenuCut();
	afx_msg void OnMenuDelete();
	afx_msg void OnMenuUndo();
	afx_msg void OnMenuSelectAll();
	afx_msg void OnMenuCountString();
	afx_msg void OnMenuCountAll();
	afx_msg void OnMenuHelp();
	afx_msg void OnMenuReg();
	afx_msg void OnMenuBackUp();
	afx_msg int  OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDropFiles(HDROP hDropInfo);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TextEditorDLG_H__68215130_2DA9_4F1E_984F_CC4F2A8B7C41__INCLUDED_)