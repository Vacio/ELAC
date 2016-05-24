
// ELACView.cpp : implementation of the CELACView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ELAC.h"
#endif

#include "ELACDoc.h"
#include "ELACView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CELACView

IMPLEMENT_DYNCREATE(CELACView, CView)

BEGIN_MESSAGE_MAP(CELACView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CELACView construction/destruction

CELACView::CELACView()
{
	// TODO: add construction code here

}

CELACView::~CELACView()
{
}

BOOL CELACView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CELACView drawing

void CELACView::OnDraw(CDC* /*pDC*/)
{
	CELACDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CELACView printing

BOOL CELACView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CELACView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CELACView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CELACView diagnostics

#ifdef _DEBUG
void CELACView::AssertValid() const
{
	CView::AssertValid();
}

void CELACView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CELACDoc* CELACView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CELACDoc)));
	return (CELACDoc*)m_pDocument;
}
#endif //_DEBUG


// CELACView message handlers
