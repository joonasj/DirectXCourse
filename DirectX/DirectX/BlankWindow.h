/*

BlankWindow.h - Tyhjä DirectX ikkunan header


*/

#ifndef _BLANK_WINDOW_H_
#define _BLANK_WINDOW_H_

#include "Dx11BaseClass.h"


class BlankWindow : public Dx11BaseClass
{
    public:
        BlankWindow( );
        virtual ~BlankWindow( );

        bool LoadContent( );
        void UnloadContent( );

        void Update( float dt );
        void Render( );
};

#endif