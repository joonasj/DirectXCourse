#include "TriangleDemo.h"
#include "Dx11BaseClass.h"
#include <xnamath.h>

struct VertexPos
{
	XMFLOAT3 pos;
}	

TriangleDemo::TriangleDemo() : solidColorVS_(0), solidColorPS_(0), inputLayout_(0), vertexBuffer_(0) {

}

TriangleDemo::~TriangleDemo() {
}

bool TriangleDemo::LoadContent(){
	ID3DBlob* vsBuffer = 0;
	bool compileResult = Compile3DShader("Greencolor.fx", "VS_Main", "vs_4_0", &vsBuffer);
	if(compileResult == false) 
	{
		MessageBox(0, "Error loading vertex shader!", "Compile  error", MB_OK);
		return false;
	}

	HRESULT d3dResult;

	d3dResult = d3dDevice ->(CreateVertexShader(vsBuffer->Get
    
		if( FAILED (d3dResult)){
			if(vsBuffer)
				vsBuffer->Release();
			return false;
		}

		D3D11_INPUT_ELEMENT_DESC solidCOlorLayout[] = 
		{
			{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0 ,0, D3D11_INPUT_PER_VERTEX_DATA, 0}
		}

		unsigned int totalLayoutElements =  ARRAYSIZE(solidColorLayout);

		d3dResult = ---

			vsBuffer->Release();
		if(FAILED (d3dResult)){
			returl false;
		}
		
		ID3DBlob* psBuffer = 0;

		compileResult = CompileD3DShader("GreenColor.fx", "PS_Main", "ps_4_0", &psBuffer);

}

