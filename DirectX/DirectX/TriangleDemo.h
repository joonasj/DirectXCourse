#include "Dx11BaseClass.h"

class TriangleDemo : public Dx11BaseClass
{
public:
	TriangleDemo();
		virtual ~TriangleDemo();
	bool LoadContent();
	void UnLoadContent();
	void Update(float dt);
	void Render();
private:
	ID3D11VertextShader* solidColorVS_;
	ID3D11PixelShader* solidColorPS_;
	ID3D11InputLayout* inputLayout_;
	ID3D11Buffer* vertexBuffer_;
}