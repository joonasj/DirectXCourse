/*

Dx11BaseClass.h - Koko kurssin aikana k‰ytett‰v‰ perusluokka 
				  DirectX:lle, p‰ivitet‰‰n tarpeen tullen.


*/

#ifndef _BASE_CLASS_H_
#define _BASE_CLASS_H_

#include <d3d11.h>
#include <d3dx11.h>
#include <dxerr.h>


class Dx11BaseClass
{
    public:
        Dx11BaseClass();
        virtual ~Dx11BaseClass();

        bool Initialize( HINSTANCE hInstance, HWND hwnd );
        void Shutdown( );

        virtual bool LoadContent( );
        virtual void UnloadContent( );

        virtual void Update( float dt ) = 0;
        virtual void Render( ) = 0;

    protected:
        HINSTANCE hInstance_;
        HWND hwnd_;

        D3D_DRIVER_TYPE driverType_;
        D3D_FEATURE_LEVEL featureLevel_;

        ID3D11Device* d3dDevice_;
        ID3D11DeviceContext* d3dContext_;
        IDXGISwapChain* swapChain_;
        ID3D11RenderTargetView* backBufferTarget_;
};

#endif