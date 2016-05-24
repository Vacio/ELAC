
// ELACView.h : interface of the CELACView class
//

#pragma once


class CELACView : public CView
{
protected: // create from serialization only
	CELACView();
	DECLARE_DYNCREATE(CELACView)

// Attributes
public:
	CELACDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CELACView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ELACView.cpp
inline CELACDoc* CELACView::GetDocument() const
   { return reinterpret_cast<CELACDoc*>(m_pDocument); }
#endif

