#pragma once
#include "Resource.h"
#include "afxwin.h"
#include "GsPreviewCtrl.h"
// CDialogPreview �Ի���

class CDialogPreview : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogPreview)

public:
	CDialogPreview(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogPreview();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CGsPreviewCtrl m_PreviewCtrl;
	virtual BOOL OnInitDialog();
};
