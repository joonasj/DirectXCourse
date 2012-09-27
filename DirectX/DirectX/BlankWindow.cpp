/*

BlankWindow.cpp

*/

#include "BlankWindow.h"
#include <xnamath.h>


BlankWindow::BlankWindow( )
{

}


BlankWindow::~BlankWindow( )
{

}


bool BlankWindow::LoadContent( )
{
    return true;
}


void BlankWindow::UnloadContent( )
{

}


void BlankWindow::Update( float dt )
{

}


void BlankWindow::Render( )
{
    if( d3dContext_ == 0 )
        return;

    float clearColor[4] = { 0.35f, 0.25f, 0.25f, 1.0f };
    d3dContext_->ClearRenderTargetView( backBufferTarget_, clearColor );

    swapChain_->Present( 0, 0 );
}